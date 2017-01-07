#ifndef JSONSTREAM_H
#define JSONSTREAM_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "jsonobject.h"
#include "jsonarray.h"

class JsonStream {
public:
	//Default Constructor
	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//All necessary private members (C++) are defined.
	JsonStream();

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//All necessary private members (C++) are defined except for "currentObjectId" or "currentArrayId". "startingId" indicates the number of the starting array (C++) member (so that a previously used JsonObject[] or JsonArray[] can be used again from where it was left off). "isObjectDifferent" indicates whether or not "startingId" refers to a JsonObject[] (if false, it refers to a JsonArray[]).
	JsonStream(int startingId, bool isObjectDifferent);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//All necessary private members (C++) are defined except for "currentObjectId" and "currentArrayId". "startingObjectId" indicates the number of the starting JsonObject[] member, and "startingArrayId" indicates the number of the starting JsonArray[] member (so that previously used JsonObject[]s and JsonArray[]s can be used again from where they were left off).
	JsonStream(int startingObjectId, int startingArrayId);

	//Pre-Condition:
	//N/A.
	//Post-Condition
	//"inputStream" is opened with the provided "path," and "path" is recorded.
	void open(std::string path);

	//IMPORTANT NOTE: It is best if you run this in a constructor, if possible. This way the lag spike (varying in size based on how big your input JsonObject[]s and JsonArray[]s are) takes place at the start of your application. The lag spike may not be that big, so give it a few tests and decide what to do for yourself.
	//Pre-Condition:
	//"inputStream" is opened with the provided "path," and "path" is recorded (can be accompished by calling "open" function).
	//Post-Condition:
	//Provided "objects[]" and "arrays[]" are defined based on the data in the .json defined "inputStream."
	void input(JsonObject objects[], JsonArray arrays[]);

	//Pre-Condition:
	//"inputStream" is opened with the provided "path," and "path" is recorded (can be accompished by calling "open" function).
	//Post-Condition:
	//"inputStream" is closed.	
	void close();
		
private:
	bool NameCheck(std::string input);
	bool IntCheck(std::string input);
	//void PrintLine4();
	std::ifstream inputStream;
	std::ofstream logger;
	std::stringstream parseStream;
	std::string jPath;
	std::string lines[9999];
	std::string currentName;
	std::string currentIntS;
	std::string currentValueS;
	int currentValueI;
	int currentObjectId;
	int currentObjectMemberIntId;
	int currentObjectMemberStringId;
	int currentArrayId;
	int currentArrayObjectId;
	int currentArrayObjectMemberIntId;
	int currentArrayObjectMemberStringId;
	int currentArrayValueId;
	int tempArrayId;
	int tempArrayObjectId;
	int tempArrayObjectMemberIntId;
	int tempArrayObjectMemberStringId;
	int tempArrayValueId;
	int lineNum;
	int totalLines;
	bool isValidFile;
};
#endif //JSONSTREAM_H
