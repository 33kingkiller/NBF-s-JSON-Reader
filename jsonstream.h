#ifndef JSONSTREAM_H
#define JSONSTREAM_H

#include <string>
#include <iostream>
#include <fstream>
#include "jsonobject.h"

class JsonStream {
public:
	JsonStream();
	void open(std::string path);
	void input(JsonObject objects[]);
	void close();
private:
	std::ifstream inputStream;
	std::string lines[9999];
	std::string currentName;
	std::string currentValueS;
	int currentValueI;
	int lineNum;
};
#endif //JSONSTREAM_H
