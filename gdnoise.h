/* gdsqlite.h */
#ifndef GDNOISE_H
#define GDNOISE_H

#include "reference.h"
#include "ustring.h"

#include "FastNoise/FastNoise.h"

class Noise : public Reference {
	GDCLASS(FastNoise,Reference);

protected:
	static void _bind_methods();

public:
	Noise();
	
	int open(String path);

private:
	FastNoise *fn;
};

#endif
