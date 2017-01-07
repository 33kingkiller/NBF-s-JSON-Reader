#include <iostream>
#include <NBF/jsonstream.h>

JsonObject objects[50];
JsonArray arrays[50];
JsonStream jsonStream;

int main() {
	jsonStream.open("map.json");
	jsonStream.input(objects, arrays);
	jsonStream.close();

	JsonMember tempMembersB[50]; //Boolean members
	JsonMember tempMembersI[50]; //Integer members
	JsonMember tempMembersS[50]; //String members

	//Print first bool in the first object of the first array:
	arrays[0].getJsonObject(0).getBoolMembers(tempMembersB);
	if (tempMembersB[0].getBoolValue()) {
		std::cout << tempMembersB[0].getName() << std::endl << "true\n";
	}
	else if (!tempMembersB[0].getBoolValue()) {
		std::cout << tempMembersB[0].getName() << std::endl << "false\n";
	}
	else {
		std::cout << "Failed to find boolean member.\n";
	}

	//Print first int in the first object of the first array:
	arrays[0].getJsonObject(0).getIntMembers(tempMembersI);
	std::cout << tempMembersI[0].getName() << std::endl << tempMembersI[0].getIntValue() << std::endl;

	//Print first string in the first object of the first array:
	arrays[0].getJsonObject(0).getStringMembers(tempMembersS);
	std::cout << tempMembersS[0].getName() << std::endl << tempMembersS[0].getStringValue() << std::endl;

	return 0;
}
