#ifndef JSONMEMBER_H
#define JSONMEMBER_H

#include <string>

class JsonMember {
public:
	std::string getName() const;
	std::string getStringValue() const;
	int getIntValue() const;
	void setName(std::string name);
	void setStringValue(std::string valueS);
	void setIntValue(int valueI);
private:
	std::string name;
	std::string valueS;
	int valueI;
};
#endif //JSONMEMBER_H
