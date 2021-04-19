#include "file_lib.h"
#include "sorter.h"
#include <stdio.h>
	
/*
 * Read the file from the command-line.
 * Usage:
 * ./a.out FILE_TO_READ FILE_TO_WRITE
 *
 */

int main(int argc, char** argv){

	//initializing variables
	int numLines = 0;
	char* contents;

	// Read the original file.
	size_t  numOfBytes = load_file(argv[1], &contents);

	//find the amout of lines in contents
	
	//loop through the contents and stop after the last byte 
	for (int i =0; i<numOfBytes; i++){
		
		//if the character is a newline add 1 to numLines
		if(contents[i]=='\n'){
			numLines++;
		}	
	}	
	 
	
	// Call the sort file function to sort contents
	sort(&contents, numLines);	

	// Write out the new file that contains the sorted contents
	save_file(argv[2], contents, numOfBytes);	

	return 0;
}

// You can see if your file worked correctly by using the
// command:
//
// diff ORIGINAL_FILE NEW_FILE
//
// If the command returns ANYTHING the files are different.
