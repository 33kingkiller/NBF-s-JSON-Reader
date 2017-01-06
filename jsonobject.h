#ifndef JSONOBJECT_H
#define JSONOCJECT_H

#include "jsonmember.h"

class JsonObject {
public:
	void getIntMembers(JsonMember intMembers[]) const;
	void getStringMembers(JsonMember stringMembers[]) const;
	void setIntMembers(JsonMember intMembers[]);
	void setStringMembers(JsonMember stringMembers[]);
	void setIntMember(int id, std::string name, int value);
	void setStringMember(int id, std::string name, std::string value);
private:
	JsonMember intMembers[50];
	JsonMember stringMembers[50];
};
#endif //JSONOBJECT_H
