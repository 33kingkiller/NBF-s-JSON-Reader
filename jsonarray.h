#ifndef JSONARRAY_H
#define JSONARRAY_H

#include "jsonmember.h"
#include "jsonobject.h"

class JsonArray {
public:
	void getJsonMembers(JsonMember jMembers[]);
	void getJsonObjects(JsonObject jObjects[]);
private:
	JsonMember members[50];
	JsonObject objects[50];
};
#endif //JSONARRAY_H
