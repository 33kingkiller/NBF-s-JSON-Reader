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
