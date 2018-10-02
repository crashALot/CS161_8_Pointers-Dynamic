/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/23/2018
** Description: This program takes as parameters the addresses of 
*               three int variables and sorts the ints at those 
*               addresses into ascending order.
*********************************************************************/
#include <iostream>

void smallSort2(int*, int*, int*); // Function prototype of three pointers

/********************************************************************* 
** Description: void smallSort2(int* firstPtrIn, int* secondPtrIn, int* thirdPtrIn)
*               This function uses three addresses of three int 
*               variables and sorts the ints at those addresses into
*               ascending order.
*********************************************************************/
void smallSort2(int* firstPtrIn, int* secondPtrIn, int* thirdPtrIn)
{
    if (*firstPtrIn>*thirdPtrIn) // Is first value greater than third? 
        {            
            int tempThirdNum=*thirdPtrIn; // Swap first and third values
            *thirdPtrIn=*firstPtrIn;
            *firstPtrIn=tempThirdNum;
            if (*firstPtrIn>*secondPtrIn) // Is first value greater than second now?
                    {
                        int tempSecondNum=*secondPtrIn; // Swap first and second values
                        *secondPtrIn=*firstPtrIn;
                        *firstPtrIn=tempSecondNum;
                    }
            if(*secondPtrIn>*thirdPtrIn) // Is second value now greater than third?
                    {
                        int tempThirdNum=*thirdPtrIn; // Swap second and third variables
                        *thirdPtrIn=*secondPtrIn;
                        *secondPtrIn=tempThirdNum;
                    }        
        }
        
    else if (*firstPtrIn>*secondPtrIn) // Is first value greater than second?
        {
            int tempSecondNum=*secondPtrIn; // Swap first and second values
            *secondPtrIn=*firstPtrIn;
            *firstPtrIn=tempSecondNum;
            if(*secondPtrIn>*thirdPtrIn) // Is second value now greater than third?
                {
                    int tempThirdNum=*thirdPtrIn; // Swap second and third variables
                    *thirdPtrIn=*secondPtrIn;
                    *secondPtrIn=tempThirdNum;
                }
        }
        
    else if(*secondPtrIn>*thirdPtrIn) // Is second value greater than third?
        {
            int tempThirdNum=*thirdPtrIn; // Swap second and third values
            *thirdPtrIn=*secondPtrIn;
            *secondPtrIn=tempThirdNum;
             if (*firstPtrIn>*secondPtrIn) // Is first value greater than second now?
                    {
                        int tempSecondNum=*secondPtrIn; // Swap first and second values
                        *secondPtrIn=*firstPtrIn;
                        *firstPtrIn=tempSecondNum;
                    }
        }
}

int main()
{
    int first=0;
    int second=5;
    int third=-1;
    smallSort2(&first, &second, &third);
    std::cout << first << ", " << second << ", " << third << ", " << std::endl;
	return 0;
}




