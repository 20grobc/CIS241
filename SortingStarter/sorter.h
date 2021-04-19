#ifndef 	SORTER_C
#define 	SORTER_C
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/** 
 * Sorts the original text's context to be alphabetical in order
 *
 * - contents (char**) the pointer to the memory holding the original
 *   file's contents
 * - size (int) the number of lines in the unsorted text
 * - does not return anything as the method is void
 */
void sort(char** contents, int size);

#endif
