//******************************************************************************
// File:       main.cpp
// Author:     CS, Pacific University
// Date:       12/5/23
// Class:      CS 150-XX
// Assignment: Lab11 Arrays and Functions
// Purpose:    Gain more experience with functions, arrays, and passing
//						 arrays to functions 
// Hours:
//******************************************************************************
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayTitle (string title, char ch, int numCharacters);
void displayArray (const int anArray[], int count, int fieldWidth);
int  sumOfArray (const int anArray[], int count);
void insertLastArray (int anArray[], int &size, 
											int maxSize, int insertValue);
void insertFirstArray (int anArray[], int &size, 
											int maxSize, int insertValue);
void reverseArray (int anArray[], int size);
void appendArray (int destinationArray[], int &sizeDestination, 
									int maxDestinationSize,
									const int sourceArray[], int sizeSource);

/*******************************************************************************
Function:     main

Description:  Performs some calculations on points as described in the
							program's purpose.

Parameters:   None

Returned:     Exit Status
*******************************************************************************/
int main () {
  const int MAX = 20;
  const int CHARS_TO_PRINT = 3;
	const char MAIN_TITLE_CHAR = '#';
	const char TODO_TITLE_CHAR = '*';
	const char FIELD_WIDTH = 3;

	int arrayA[MAX] = {1, 2, 3, 4, 5}, countA = 5;
	int arrayB[MAX] = {11, 10, 9, 8, 7}, countB = 5;

  cout << endl << endl;
	displayTitle ("Arrays and Functions", MAIN_TITLE_CHAR, CHARS_TO_PRINT);

  // TODO #1: Implement displayArray and uncomment to TODO #2
	// cout << endl << endl;
	// displayTitle (" Printing Array A ", TODO_TITLE_CHAR, CHARS_TO_PRINT);
	// displayArray (arrayA, countA, FIELD_WIDTH);
	// cout << endl << endl;

	// displayTitle (" Printing Array B ", TODO_TITLE_CHAR, CHARS_TO_PRINT);
	// displayArray (arrayB, countB, FIELD_WIDTH);
	// cout << endl << endl;

  // TODO #2: Implement sumOfArray and uncomment to TODO #3
	// displayTitle (" Sum Of Array A ", TODO_TITLE_CHAR, CHARS_TO_PRINT);
	// cout << "  " << sumOfArray (arrayA, countA) << endl << endl;

	// displayTitle (" Sum Of Array B ", TODO_TITLE_CHAR, CHARS_TO_PRINT);
	// cout << "  " << sumOfArray (arrayB, countB) << endl << endl;

  // TODO #3: Implement insertLastArray and uncomment to TODO #4
	// displayTitle (" Array A after adding 6 at the end ", TODO_TITLE_CHAR, 
	// 							CHARS_TO_PRINT);
	// insertLastArray (arrayA, countA, MAX, 6);
	// displayArray (arrayA, countA, FIELD_WIDTH);
	// cout << endl << endl;
	
    // TODO #4: Implement insertFirstArray and uncomment to TODO #5
	// displayTitle (" Array B after adding 12 at the front ", TODO_TITLE_CHAR, 
	// 							CHARS_TO_PRINT);
	// insertFirstArray (arrayB, countB, MAX, 12);
	// displayArray (arrayB, countB, FIELD_WIDTH);
	// cout << endl << endl;

  // TODO #5: Implement reverseArray and uncomment to TODO #6
	// displayTitle (" Array B after reversing ", TODO_TITLE_CHAR, CHARS_TO_PRINT);
	// reverseArray (arrayB, countB);
	// displayArray (arrayB, countB, FIELD_WIDTH);
	// cout << endl << endl;

  // TODO #6: Implement appendArray and uncomment to TODO #2
	// displayTitle (" Append Array B to Array A ", TODO_TITLE_CHAR, CHARS_TO_PRINT);
	// appendArray (arrayA, countA, MAX, arrayB, countB);
	// displayArray (arrayA, countA, FIELD_WIDTH);
	// cout << endl << endl;

	return EXIT_SUCCESS;
}

/*******************************************************************************
Function:     printTitle

Description:  Prints a title such as ***Title***. the character, *,
              will be passed in as will the number of character to
              print on both ends of the title.

Parameters:   title         - the title to be printed
              ch            - character used to output pattern
              numCharacters - number of ch charcters to output

Returned:     none
*******************************************************************************/
void displayTitle (string title, char ch, int numCharacters) {
	cout << setfill (ch) << setw (numCharacters) << ch << title
       << setfill (ch) << setw (numCharacters) << ch;
}

/*******************************************************************************
Function:     printArray

Description:  prints each element of an array justified in a field of fieldWidth

Parameters:   anArray    - the array to be printed
							count      - the size of the array
              fieldWidth - width each array element is to be displayed in

Returned:     none
*******************************************************************************/
void displayArray (const int anArray[], int count, int fieldWidth) {

}

/*******************************************************************************
Function:     sumOfArray

Description:  returns the sum of all elements in an array

Parameters:   anArray  - the array to be added together
							count    - the size of the array

Returned:     sum of all elements in array
*******************************************************************************/
int	sumOfArray (const int anArray[], int count) {

  return 0; // replace with the summed up value
}

/*******************************************************************************
Function:     insertLastArray

Description:  adds a value at the end of the array if there is space
							available. If there is not enough space to insert the new value,
              output an error message and exit the program.

Parameters:   anArray			  - the array to be modified
							size				  - the size of the array
							maxSize		    - the maximum value the array can be
							insertValue	  - the value to input into the array

Returned:     none
*******************************************************************************/
void insertLastArray (int anArray[], int &size,
	int maxSize, int insertValue) {

}

/*******************************************************************************
Function:     insertFirstArray

Description:  adds a value at the beginning of the array if there is space
							available. If there is not enough space to insert the new value,
              output an error message and exit the program.

Parameters:   anArray			  - the array to be modified
							size				  - the size of the array
							maxSize		    - the maximum value the array can be
							insertValue	  - the value to input into the array

Returned:     none
*******************************************************************************/
void insertFirstArray (int anArray[], int &size, 
											int maxSize, int insertValue) {

}

/*******************************************************************************
Function:     reverseArry

Description:  returns the array with elements reversed

Parameters:   anArray   - the array to be reversed
							size	    - the size of the array

Returned:     none
*******************************************************************************/
void reverseArray (int anArray[], int size) {

}

/*******************************************************************************
Function:     appendArray

Description:  appends the elements of sourceArray to the end of the 
							array destinationArray.  If there is not enough space to insert 
              the new values, output an error message and exit the program.

Parameters:   destinationArray - array values are added to
							sizeDestination  - number of elements in destinationArray
							sourceArray 		 - array values are copied from
							sizeSource  		 - number of elements in sourceArray

Returned:     none
*******************************************************************************/
void appendArray (int destinationArray[], int &sizeDestination, 
									int maxDestinationSize,
									const int sourceArray[], int sizeSource) {

}