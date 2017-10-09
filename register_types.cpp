/* register_types.cpp */

#include "register_types.h"
#include "class_db.h"

#include "gdnoise.h"

void register_gdnoise_types() {

        ClassDB::register_class<Noise>();
}

void unregister_gdnoise_types() {
   //nothing to do here
}
