#ifndef JSONSTREAM_H
#define JSONSTREAM_H

#include "jsonobject.h"

class JsonStream {
public:
	void open(std::string path) const;
	void input();
	void close() const;
private:
	JsonObject object[999];
};
#endif //JSONSTREAM_H
