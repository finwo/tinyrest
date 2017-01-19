// Pointers to the driver later in life
char * (*driver_info)();
char * (*driver_types)();                                      // Returns pointer to CSV list of types
char * (*driver_ids)(char *type);                              // Returns pointer to CSV list of IDs
char * (*driver_get_object)(char *type, char *id);             // Returns a single object
char * (*driver_set_object)(char *type, char *object);         // Store an object, returns original if available
char * (*driver_del_object)(char *type, char *id);             // Delete an object, returns original
char * (*driver_objects_containing)(char *type, char *search); // Returns a CSV list of objects containing the string (key or value)

// List all drivers to stdout
void driver_list();

// Returns whether the driver (by name) exists
int driver_select(char *name);