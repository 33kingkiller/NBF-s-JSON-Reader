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
	JsonStream();
	JsonStream(int startingId, bool isObjectDifferent);
	JsonStream(int startingObjectId, int startingArrayId);
	void open(std::string path);
	void input(JsonObject objects[], JsonArray arrays[]);
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
	std::string currentInt;
	std::string currentValueS;
	int currentValueI;
	int currentObjectId;
	int currentObjectMemberId;
	int currentArrayId;
	int currentArrayObjectId;
	int currentArrayObjectMemberId;
	int currentArrayValueId;
	int tempArrayId;
	int tempArrayObjectId;
	int tempArrayObjectMemberId;
	int tempArrayValueId;
	int lineNum;
	int totalLines;
	bool isValidFile;
	bool isEmbeddedArray;
};
#endif //JSONSTREAM_H
