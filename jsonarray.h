#ifndef JSONARRAY_H
#define JSONARRAY_H

#include "jsonmember.h"
#include "jsonobject.h"

class JsonArray {
public:
	//Pre-Condition:
	//"valuesI" and "valuesS" are defined.
	//Post-Condition:
	//"valuesI" and valuesS" are returned.
	void getJsonValues(int valuesI[], std::string valuesS[]) const;

	//Pre-Condition:
	//"objects" is defined.
	//Post-Condition:
	//"objects" is returned.
	void getJsonObjects(JsonObject jObjects[]) const;

	//Pre-Condition:
	//"objects" is defined.
	//Post-Condition:
	//"objects[id]" is returned.
	JsonObject getJsonObject(int id) const;

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"valuesS[id]" is set to "value."
	void setJsonValue(int id, std::string value);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"valuesI[id]" is set to "value."
	void setJsonValue(int id, int value);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"objects[id]" is set to "jObject."
	void setJsonObject(int id, JsonObject jObject);

	//NOTE: This function may be ran twice for each JsonObject so that the string and int JsonMembers for each JsonObject can be defined.
	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"objects[id]" is defined by the parameters "jMembers" and "isString." "isString" indicates whether or not "jMembers" defines an array of string JsonMembers (if false, it defines an array of int JsonMembers).
	void setJsonObject(int id, JsonMember jMembers[], bool isString);


private:
	int valuesI[50];
	std::string valuesS[50];
	JsonObject objects[50];
};
#endif //JSONARRAY_H
