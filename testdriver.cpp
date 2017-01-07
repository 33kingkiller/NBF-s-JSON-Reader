#include <iostream>
#include <NBF/jsonstream.h>

JsonObject objects[50];
JsonArray arrays[50];
JsonStream jsonStream;

int main() {
	jsonStream.open("map.json");
	jsonStream.input(objects, arrays);
	jsonStream.close();

	return 0;
}
