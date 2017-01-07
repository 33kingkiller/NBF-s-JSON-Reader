#include "jsonarray.h"

void JsonArray::getJsonValues(int valsI[], std::string valsS[], bool valsB[]) const {
	for (int i = 0; i < 50; i++) {
		valsI[i] = valuesI[i];
		valsS[i] = valuesS[i];
		valsB[i] = valuesB[i];
	}
}

void JsonArray::getJsonObjects(JsonObject jObjects[]) const {
	JsonMember tempIMembers[50];
	JsonMember tempSMembers[50];
	JsonMember tempBMembers[50];

	for (int i = 0; i < 50; i++) {
		objects[i].getIntMembers(tempIMembers);
		jObjects[i].setIntMembers(tempIMembers);

		objects[i].getStringMembers(tempSMembers);
		jObjects[i].setStringMembers(tempSMembers);

		objects[i].getBoolMembers(tempBMembers);
		jObjects[i].setBoolMembers(tempBMembers);
	}
}

JsonObject JsonArray::getJsonObject(int id) const {
	return objects[id];
}

void JsonArray::setJsonValue(int id, std::string value) {
	valuesS[id] = value;
}

void JsonArray::setJsonValue(int id, int value) {
	valuesI[id] = value;
}

void JsonArray::setJsonValue(int id, bool value) {
	valuesB[id] = value;
}

void JsonArray::setJsonObject(int id, JsonObject jObject) {
	JsonMember tempMembersI[50];
	JsonMember tempMembersS[50];
	JsonMember tempMembersB[50];
	
	jObject.getIntMembers(tempMembersI);
	jObject.getStringMembers(tempMembersS);
	jObject.getBoolMembers(tempMembersB);

	objects[id].setIntMembers(tempMembersI);
	objects[id].setStringMembers(tempMembersS);
	objects[id].setBoolMembers(tempMembersB);
}

/*void JsonArray::setJsonObject(int id, JsonMember jMembers[], bool isString) {
	if (isString) {
		objects[id].setStringMembers(jMembers);
	}
	else {
		objects[id].setIntMembers(jMembers);
	}
}*/
