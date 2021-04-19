#include "sorter.h"
#include <stdio.h>
#include <string.h>
#include "file_lib.h"

void sort(char** contents, int size){

	//tokenizing the contents string into an array of strings
	int k =0;
	char *p = strtok(*contents, "\n");
	char** arr = malloc(size*sizeof(char*));
	
	//looping throup the array and assigning the tokenized string
	while (p!= NULL){
		arr[k] = p;
		k++;
		p = strtok(NULL, "\n");	
	}
	
	//Sorting the array using insertion sort	
	int j;
	char* key;

	for (int i =1; i<size; ++i){
		key = arr[i];
		j = i-1;
	
		while(j >= 0 && strcasecmp(arr[j], key) > 0){
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = key;

	}
	
	//making a string to store the sorted contents
	char sorted [size *10];
	
	//concatinating the sorted strings from the array to sorted and
	//adding newlines between the words
	for(int i =0; i <size; i++){
		strcat(sorted, arr[i]);
		strcat(sorted, "\n");
	}

	//making the pointer of contents point to the sorted string
	*contents = sorted;
}
