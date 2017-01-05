#include "jsonstream.h"

//Public

JsonStream::JsonStream() {
	lineNum = 1;
}

void JsonStream::open(std::string path) {
	inputStream.open(path);
}

void JsonStream::input(JsonObject objects[], JsonArray arrays[]) {
	logger.open("logs/JSON_Store.txt");
	do {
		logger << "Storing line # " << lineNum << "...\n";
		while (isspace(inputStream.peek())) {
			inputStream.ignore(1);
		}
		std::getline(inputStream, lines[lineNum - 1]);
		totalLines = lineNum;
		lineNum++;
	} while (inputStream);
	logger.close();

	bool isArray = false;
	bool isObject = false;

	for (int i = 1; i < totalLines; i++) {
		logger.open("logs/JSON_Parse.txt");
		parseStream.str(lines[i]);

		if (NameCheck(lines[i])) {
			parseStream.get();
			std::getline(parseStream, currentName, '\"');

			logger << "Found item name: " << currentName << std::endl;

			parseStream.get();
			parseStream.get();
			parseStream.get();

			if (parseStream.peek() == '\"') {

			} //if string
			else if (parseStream.peek() == '{') {

			} //if object
			else if (parseStream.peek() == '[') {
				isArray = true;
			} //if array
			else if (isdigit(parseStream.peek())) {

			} //if digit
			else {
				logger << "Failed to parse line " << i << ". It is in the incorrect format.\n";
			}
		} //if name
		else {
			if (parseStream.peek() == '}') {
				isObject = false;
			}
			else if (parseStream.peek() == '{') {
				isObject = true;
			}
			else if (parseStream.peek() == ']') {
				isArray = false;
			}
			else if (parseStream.peek() == '[') {
				isArray = true;
			}
			else {
				logger << "Failed to parse line " << i << ". Either the line is in the incorrect format or it is blank.\n";
			}
		} //else

		logger.close();
	} //for
} //void

void JsonStream::close() {
	inputStream.close();
}

//Private

bool JsonStream::NameCheck(std::string input) {
	parseStream.str(input);
	if (parseStream.peek() == '\"') {
		return true;
	}else {
		return false;
	}
}

void JsonStream::PrintLine4() {
	std::cout << lines[3];
}
