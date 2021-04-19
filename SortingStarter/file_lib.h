#ifndef			__H__FILE_LIB__
#define			__H__FILE_LIB__
#include <stdlib.h>


/*
 * returns the size of the loaded file in bytes
 *
 * -path (char*) the name of the file being loaded
 * -contents (char**) a poniter to the memory of the contents of 
 *  the file
 */
size_t load_file(char* path, char** contents);


/*
 * writes a file with the name of the first param, the contents
 * of the param, and the size in bytes of the third param, while
 * returning the size in bytes of the file
 *
 * -path (char*) the name that the new written file will have
 * -contents (char*) the contents that will be in the new written file
 * -size (size_t) the size in bytes of the new file
 */
size_t save_file(char* path, char* contents, size_t size);

#endif
