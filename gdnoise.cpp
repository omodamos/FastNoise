/* gdsqlite.cpp */

#include "gdnoise.h"
#include "project_settings.h"
#include "os/os.h"

Noise::Noise() {
}

// int SQLite::open(String path) {
// 	if (path.begins_with("res://")) {
// 		if (ProjectSettings::get_singleton()) {
// 			String resource_path = ProjectSettings::get_singleton()->get_resource_path();
// 			if (resource_path != "") path = path.replace("res:/",resource_path);
// 			else path = path.replace("res://", "");
// 		}
// 	}
// 	else if (path.begins_with("user://")) {
// 		String data_dir=OS::get_singleton()->get_data_dir();
// 		if (data_dir != "") path = path.replace("user:/",data_dir);
// 		else path = path.replace("user://", "");
// 	}
	
// 	return sqlite3_open(path.utf8().get_data(), &db);
// }

void Noise::_bind_methods() {
	// ClassDB::bind_method("open", &Noise::open);
	// BIND_CONSTANT(NOISE_OK);
}

