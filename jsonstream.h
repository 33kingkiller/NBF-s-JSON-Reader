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
	void open(std::string path);
	void input(JsonObject objects[], JsonArray arrays[]);
	void close();
private:
	bool NameCheck(std::string input);
	void PrintLine4();
	std::ifstream inputStream;
	std::ofstream logger;
	std::stringstream parseStream;
	std::string lines[9999];
	std::string currentName;
	std::string currentValueS;
	std::string currentName;
	int currentValueI;
	int lineNum;
	int totalLines;
};
#endif //JSONSTREAM_H
