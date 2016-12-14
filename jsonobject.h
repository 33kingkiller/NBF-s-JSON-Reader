#ifndef JSONOBJECT_H
#define JSONOCJECT_H

#include "jsonmember.h"

class JsonObject {
public:
	void getIntMembers(JsonMember intMembers[]) const;
	void getStringMembers(JsonMember stringMembers[]) const;
	void setIntMembers(JsonMember intMembers[]);
	void setStringMembers(JsonMember stringMembers[]);
private:
	JsonMember intMembers[50];
	JsonMember stringMembers[50];
};
#endif //JSONOBJECT_H
