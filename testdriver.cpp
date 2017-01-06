#include <iostream>
#include "jsonstream.h"

JsonObject objects[999];
JsonArray arrays[999];
JsonStream jsonStream;

int main() {
	jsonStream.open("map.json");
	jsonStream.input(objects, arrays);
	jsonStream.close();

	return 0;
}
