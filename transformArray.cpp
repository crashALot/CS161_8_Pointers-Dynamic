/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/23/2018
** Description: This program takes two parameters - a reference to a
*               pointer to a dynamically allocated array of ints, and 
*               the size of that array. The program dynamically 
*               allocates an array that is twice as long, filled with 
*               the values from the original array followed by each of 
*               those values plus one.     
*********************************************************************/
#include <iostream>
#include <memory> // Needed for dynamic arrays

void transformArray(int* &, int); // Function prototype

/********************************************************************* 
** Description: void transformArray(int* &myArrayPtr, int arrayLength)
*               This function takes two parameters - a reference to a
*               pointer to a dynamically allocated array of ints, and 
*               the size of that array. The function dynamically 
*               allocates an array that is twice as long, filled with 
*               the values from the original array followed by each of 
*               those values plus one.           
*********************************************************************/
void transformArray(int* &myArrayPtr, int arrayLength)
{
    int *newArray = new int[arrayLength*2]; // Decalre dynamic array
    for (int i=0; i<arrayLength*2; i++)
    {
            if (i<arrayLength)
            {
                newArray[i]=myArrayPtr[i]; // Fill first half of newArray
            }
            else if (i>=arrayLength)
            {
                newArray[i]=myArrayPtr[i-arrayLength]+1; // Fill second half of newArray
            }
    }
    myArrayPtr=newArray; // Assign newArray location to original myArray from main
    newArray=NULL;       // Prevent memory leaks
    delete [] newArray;
}

int main()
{
    int* myArray = new int[3];
    myArray[0]=-10;
    myArray[1]=-100;
    myArray[2]=-10090;
    transformArray(myArray, 3);
    for (int i=0; i<6; i++)
        std::cout << myArray[i] << std::endl;
        
    delete [] myArray;
    myArray=NULL;
	return 0;
}

