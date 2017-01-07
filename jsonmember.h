#ifndef JSONMEMBER_H
#define JSONMEMBER_H

#include <string>

class JsonMember {
public:
	//Pre-Condition:
	//"name" is defined.
	//Post-Condition:
	//"name" is returned.
	std::string getName() const;

	//Pre-Condition:
	//"valueS" is defined.
	//Post-Condition:
	//"valueS" is returned.
	std::string getStringValue() const;

	//Pre-Condition:
	//"valueI" is defined.
	//Post-Condition:
	//"valueI" is returned.
	int getIntValue() const;

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"name" is defined.
	void setName(std::string name);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"valueS" is defined.
	void setStringValue(std::string valueS);

	//Pre-Condition:
	//N/A.
	//Post-Condition:
	//"valueI" is defined.
	void setIntValue(int valueI);
private:
	std::string name;
	std::string valueS;
	int valueI;
};
#endif //JSONMEMBER_H
