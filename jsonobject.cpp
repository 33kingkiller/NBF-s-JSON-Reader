#include "jsonobject.h"

void JsonObject::getIntMembers(JsonMember ints[]) const {
	for (int i = 0; i < 50; i++) {
		ints[i].setName(intMembers[i].getName());
		ints[i].setIntValue(intMembers[i].getIntValue());
	}
}

void JsonObject::getStringMembers(JsonMember strings[]) const {
	for (int i = 0; i < 50; i++) {
		strings[i].setName(stringMembers[i].getName());
		strings[i].setStringValue(stringMembers[i].getStringValue());
	}
}


void JsonObject::getBoolMembers(JsonMember bools[]) const {
	for (int i = 0; i < 50; i++) {
		bools[i].setName(boolMembers[i].getName());
		bools[i].setBoolValue(boolMembers[i].getBoolValue());
	}
}

void JsonObject::setIntMembers(JsonMember ints[]) {
	for (int i = 0; i < 50; i++) {
		intMembers[i].setName(ints[i].getName());
		intMembers[i].setIntValue(ints[i].getIntValue());
	}
}

void JsonObject::setStringMembers(JsonMember strings[]) {
	for (int i = 0; i < 50; i++) {
		stringMembers[i].setName(strings[i].getName());
		stringMembers[i].setStringValue(strings[i].getStringValue());
	}
}

void JsonObject::setBoolMembers(JsonMember bools[]) {
	for (int i = 0; i < 50; i++) {
		boolMembers[i].setName(bools[i].getName());
		boolMembers[i].setBoolValue(bools[i].getBoolValue());
	}
}

void JsonObject::setStringMember(int id, std::string name, std::string value) {
	stringMembers[id].setName(name);
	stringMembers[id].setStringValue(value);
}

void JsonObject::setIntMember(int id, std::string name, int value) {
	intMembers[id].setName(name);
	intMembers[id].setIntValue(value);
}

void JsonObject::setBoolMember(int id, std::string name, bool value) {
	boolMembers[id].setName(name);
	boolMembers[id].setBoolValue(value);
}
