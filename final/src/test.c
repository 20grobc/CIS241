#include "test.h"
#include "math.h"
#include "student.h"
#include <stdlib.h>

/**
 * Example for demonstration at start of test.
 */

int example(){
	return 42;
}

/**
 * Warmup (but counts for credit!)
 * Square the value x points to.
 */
void easyPeasy(int* x){
	*x = pow(*x, 2); 
}

/**
 * Set a's first name to "Jigglypuff".
 * Set the last name to "Ketchum".
 * Set the g number to 10, the gpa to 1.16.
 */
void one(Student* a){
	a -> first_name = "Jigglypuff";
	a -> last_name = "Ketchum";
	a -> g_number = 10;
	a -> gpa = 1.16;
}

/**
 * Copy the information from Student b to Student a.
 * (pointer parameters).
 */
void two(Student* a, Student* b){
	a -> first_name = b -> first_name;
	a -> last_name = b -> last_name;
	a -> g_number = b -> g_number;
	a -> gpa = b -> gpa;
}

/**
 * Copy the information from Student a to Student b.
 * (mixed variable type parameters).
 */

void three(Student a, Student* b){
	b -> first_name = a.first_name;
	b -> last_name = a.last_name;
	b -> g_number = a.g_number;
	b -> gpa = a.gpa;
}

/**
 * Create and return a Student.  Give it the values
 * "T. Yoshisaur" (first_name)
 * "Munchakoopas" (last_name)
 * 1990		  (g_number)
 * 3.1		  (gpa)
 * Mario	  (roommate [defined above])
 * Remember: C is pass by copy ONLY.
 */
Student four(){
	Student a;
	a.first_name = "T. Yoshisaur";
	a.last_name = "Munchakoopas";
	a.g_number = 1990;
	a.gpa = 3.1;
	a.roommate = &Mario;
	return a;
}

/**
 * Create and return a Student*.  Give it the value
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 * Remember: C is pass by copy ONLY.
 */
Student* five(){
	Student* a = (Student*)malloc(sizeof(Student));
	a -> first_name = "Luigi";
	a -> last_name = "Mario";
	a -> g_number = 2;
	a -> gpa = 3.54;
	return a;
	free(a);
}

/**
 * Create a hunk of memory we can use as an array of 10
 * Students.  Set the 4th element (meaning use array
 * index 3) to
 *
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 */
Student* six(){
	Student* array = (Student*)malloc(sizeof(Student)*10);
	array[3].first_name = "Luigi";
	array[3].last_name = "Mario";
	array[3].g_number = 2;
	array[3].gpa = 3.54;
	return array;
	free(array);
}

/**
 * Seven will take a pointer to a pointer.  It should
 * create a hunk of memory that can be used as an array
 * of size 10, and will set the pointer correctly so
 * that the "array" is usable in main.
 * Set the 10th (index 9) element equal to
 *
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 */
void seven(Student** students){
	
	typedef Student* studPoint;
	Student** array;
	
	array = (Student**)malloc(10 * sizeof(studPoint));

	array[9] -> first_name = "Luigi";
	array[9] -> last_name = "Mario";
	array[9] -> g_number = 2;
	array[9] -> gpa = 3.54;	
	
}

/**
 * Given a, b, and c calculate the first solution for
 * the quadratic equation (given below).
 *
 * -b + sqrt(b^2 - 4ac) / (2a)
 */
double quadratic(double a, double b, double c){
	double answer;
	double discriminant;

	discriminant = b * b -4 * a * c;

	answer = ((b*-1) + sqrt(discriminant)) / (2 * a);
	return answer;
}

/**
 * Given a "string" (a character array) and a length,
 * replace each lower case character with its uppercase
 * equivalent.
 *
 * Do not use any string functions provided by the library.
 * Merely check to see if each character is between the
 * range of values for a lowercase letter.  If it is,
 * replace it with the uppercase value equivalent.
 *
 * If you are writing more than five lines you are doing it wrong.
 */
#include <stdio.h>
void capitalize(char* str, size_t len){

	for(int i =0; i < len; i++){ //loops through the string
		char letter = str[i];
		if(letter>= 97 && letter <= 122)//checks if char is lowercase (97-122)
		{
			//change it to its uppercase quivalent(subtract 32 from the ascii value)
			letter = letter - 32;	
			str[i] = letter; //assign that new character to that spot in the string	
		}
			
	}
}
