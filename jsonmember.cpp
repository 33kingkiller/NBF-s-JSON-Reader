#include "jsonmember.h"

std::string JsonMember::getName() const {
	return name;
}

std::string JsonMember::getStringValue() const {
	return valueS;
}

int JsonMember::getIntValue() const {
	return valueI;
}

bool JsonMember::getBoolValue() const {
	return valueB;
}

void JsonMember::setName(std::string nameS) {
	name = nameS;
}

void JsonMember::setStringValue(std::string stringValue) {
	valueS = stringValue;
}

void JsonMember::setIntValue(int intValue) {
	valueI = intValue;
}

void JsonMember::setBoolValue(bool boolValue) {
	valueB = boolValue;
}
