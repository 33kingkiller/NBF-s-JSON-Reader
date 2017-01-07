# NBF-s-JSON-Reader
Introduction
-----------------
NBF's JSON Reader for C++ developers. This is a library for those who do not care to modify JSONs and simply want a library for reading them and storing their data. This allows the library to be more lightweight and allocate less memory. This readme will describe everything one should know before they use this library. For this reason, it is recommended that you read, or at least skim over, this entire document before you use the library. That being said, once you have read this document it will be relatively easy and quick to throw together an application utilizing this library.

Installation
-----------------
This library only works for Visual Studio C++, but you may recompile it into another type of library, if you wish.

To install the library into your project, change the following settings in your project’s “Properties” menu (note that this is a standard setup method, so you may look up a video of some sort if you don’t understand these instructions):

Configuration Properties -> Linker -> General -> Additional Library Directories
	-Add the path for the library's "lib" directory.
Configuration Properties -> Linker -> Input -> Additional Dependencies
	-Add "jsonr.lib;" at the beginning.
Configuration Properties -> C/C++ -> General -> Additional Include Directories
	-Add the path for the library's "include" directory.

After you've done this, you have successfully linked the library!

Use the line "#include <NBF/jsonstream.h>" to include everything you will need.

Usage
----------
You can find an example of the library’s usage by looking at “testdriver.cpp” (master) and “map.json” (reference) in this repository; furthermore, all of the header files in this repository contain pre-conditions and post-conditions. If you know what that means, you can take advantage of it. If you don’t, you should look it up.

Before you can start using this library, you need to ensure that your .json(s) are following the correct format. Firstly, no object/array can have more than 50 members/values in your .json. If any of your's exceed this, it is recommended that you create a second object/array for the overflow members/values. Second, no two values/members (no matter how small) can be on the same line. Third, anything with a name MUST be written out like this with no extra spaces, characters, etc. before the first quotation mark or after the last quotation mark/digit: 

For an int member -  “name”: x
For a string member - “name”: “x”
For an object name - “name”: {
For an array name - “name”: [

Fourth, if you use a {, [, }, or ], this must either be on its own line or after a name formatted as mentioned above. Fifth, this library does not allow for arrays within objects. It does, however, allow for objects within arrays.

By including <NBF/jsonstream.h>, you will be including everything else necessary to utilize the library (<NBF/jsonobject.h>, <NBF/jsonarray.h>, and <NBF/jsonmember.h>). Go ahead and make a JsonObject[] and a JsonArray[]. These will be necessary for JsonStream’s “input” function. It is recommended that you limit the size of your JsonObject[] and JsonArray[] to just what you need. If your arrays (C++) are too big, you'll get a massive lag spike and overwhelming amounts of RAM usage. As a side note, it is very much possible to avoid this and obtain a small lag spike and barely any RAM usage. After you’ve made these, make a JsonStream object (C++) as well, then proceed to call “[INSERT YOUR JsonStream NAME HERE].open()” with the path to your .json as a parameter, “[INSERT YOUR JsonStream NAME HERE].input()” with your JsonObject[] and JsonArray[] as parameters, and “[INSERT YOUR JsonStream NAME HERE].close()”. After this code has ran, your JsonObject[] and JsonArray[] will contain the data stored in the .json you provided.

If you want your application to get logs from the library, create a directory call "logs" with "JSON_Store.txt" and "JSON_Parse.txt" in. Make sure this directory is in the same directory as your application's binary (.exe usually). Have a great day!
