#include "jsonstream.h"

//Public

JsonStream::JsonStream() {
	lineNum = 1;
}

void JsonStream::open(std::string path) {
	inputStream.open(path);
}

void JsonStream::input(JsonObject objects[]) {
	logger.open("logs/JSON_Store.txt");
	do {
		logger << "Storing line # " << lineNum << "...\n";
		while (isspace(inputStream.peek())) {
			inputStream.ignore(1);
		}
		std::getline(inputStream, lines[lineNum - 1]);
		lineNum++;
	} while (inputStream);
	logger.close();

	PrintLine4();
}

void JsonStream::close() {
	inputStream.close();
}

//Private

void JsonStream::NameCheck(std::string input, bool* check, std::string* returnName) {

}

void JsonStream::PrintLine4() {
	std::cout << lines[3];
}
