#include <iostream>
#include "jsonstream.h"

JsonObject objects[999];
JsonStream jsonStream;

int main() {
	jsonStream.open("map.json");
	jsonStream.input(objects);
	jsonStream.close();

	return 0;
}
