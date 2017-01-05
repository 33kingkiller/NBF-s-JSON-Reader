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
		totalLines = lineNum;
		lineNum++;
	} while (inputStream);
	logger.close();

	for (int i = 1; i < totalLines; i++) {
		if (NameCheck(lines[i])) {
			parseStream.str(lines[i]);
			parseStream.get();
			std::getline(parseStream, currentName, '\"');

			logger.open("logs/JSON_Parse.txt");
			logger << "Found item name: " << currentName;

			parseStream.get();
			parseStream.get();
			parseStream.get();

			if (parseStream.peek() == '\"') {

			} //if string
			else if (parseStream.peek() == '{') {

			} //if object
			else if (parseStream.peek() == '[') {
				parseStream.str(lines[i+1]);
				if (parseStream.peek() == '\"') {

				} //if string
				else if (parseStream.peek() == '{') {

				} //if object
				else if (parseStream.peek() == '[') {
					parseStream.str(lines[i + 1]);
					if (parseStream.peek() == '\"') {

					} //if string
					else if (parseStream.peek() == '{') {

					} //if object
					else if (parseStream.peek() == '[') {
						parseStream.str(lines[i + 1]);
						if (parseStream.peek() == '\"') {

						} //if string
						else if (parseStream.peek() == '{') {

						} //if object
						else if (isdigit(parseStream.peek())) {

						} //if digit
					} //if array
					else if (isdigit(parseStream.peek())) {

					} // if digit
				} //if array
				else if (isdigit(parseStream.peek())) {

				} //if digit
			} //if array
			else if (isdigit(parseStream.peek())) {

			} //if digit
		} //if name
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
