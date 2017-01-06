#ifndef JSONARRAY_H
#define JSONARRAY_H

#include "jsonmember.h"
#include "jsonobject.h"

class JsonArray {
public:
	void getJsonValues(int valuesI[], std::string valuesS[]);
	void getJsonObjects(JsonObject jObjects[]);
	void getJsonObject(int id, JsonObject& jObject);
	void setJsonValue(int id, std::string value);
	void setJsonValue(int id, int value);
	void setJsonObject(int id, JsonObject jObject);
	void setJsonObject(int id, JsonMember jMembers[], bool isString);
private:
	int valuesI[50];
	std::string valuesS[50];
	JsonObject objects[50];
};
#endif //JSONARRAY_H
