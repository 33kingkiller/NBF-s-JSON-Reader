#include "jsonarray.h"

void JsonArray::getJsonMembers(JsonMember jMembers[]) {
	for (int i = 0; i < 50; i++) {
		jMembers[i].setName(members[i].getName());
		jMembers[i].setIntValue(members[i].getIntValue());
		jMembers[i].setStringValue(members[i].getStringValue());
	}
}

void JsonArray::getJsonObjects(JsonObject jObjects[]) {
	JsonMember tempIMembers[50];
	JsonMember tempSMembers[50];

	for (int i = 0; i < 50; i++) {
		objects[i].getIntMembers(tempIMembers);
		jObjects[i].setIntMembers(tempIMembers);

		objects[i].getStringMembers(tempSMembers);
		jObjects[i].setStringMembers(tempSMembers);
	}
}
