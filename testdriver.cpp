#include <iostream>
#include "jsonstream.h"

JsonObject objects[50];
JsonArray arrays[50];
JsonStream jsonStream;

int main() {
	jsonStream.open("map.json");
	jsonStream.input(objects, arrays);
	jsonStream.close();

	return 0;
}

/*
Notes for release Readme.md:
1. No object/array can have more than 50 members/values in the .json. If any of your's exceed this, it is recommended that you create a second object/array for the overflow members/values.
2. It is recommended that you limit the size of your JsonObject[] and JsonArray[] to just what you need. If your arrays (C++) are too big, ypu'll get a massive lag spike and overwhelming amounts of RAM usage. As a side note, it is very much possible to avoid this and obtain a small lag spike and barely any RAM usage.
*/
