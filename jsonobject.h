#ifndef JSONOBJECT_H
#define JSONOBJECT_H

#include "jsonmember.h"

class JsonObject {
public:
	//Pre-Condition:
	//"intMembers" is defined.
	//Post-Condition:
	//"intMembers" is returned.
	void getIntMembers(JsonMember intMembers[]) const;

	//Pre-Condition:
	//"stringMembers" is defined.
	//Post-Condition:
	//"stringMembers" is returned.
	void getStringMembers(JsonMember stringMembers[]) const;

	//Pre-Condition:
	//"boolMembers" is defined.
	//Post-Condition:
	//"boolMembers" is returned.
	void getBoolMembers(JsonMember boolMembers[]) const;

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"intMembers" is defined.
	void setIntMembers(JsonMember intMembers[]);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"stringMembers" is defined.
	void setStringMembers(JsonMember stringMembers[]);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"boolMembers" is defined.
	void setBoolMembers(JsonMember boolMembers[]);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"intMembers[id]" is defined with the provided parameters (for an int JsonMember).
	void setIntMember(int id, std::string name, int value);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"stringMembers[id]" is defined with the provided parameters (for a string JsonMember).
	void setStringMember(int id, std::string name, std::string value);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"boolMembers[id]" is defined with the provided parameters (for a bool JsonMember).
	void setBoolMember(int id, std::string name, bool value);
private:
	JsonMember intMembers[50];
	JsonMember stringMembers[50];
	JsonMember boolMembers[50];
};
#endif //JSONOBJECT_H
