//
//  main.cpp
//  Arrays
//
//  Created by Fadhel Alanazi on 11/03/1445 AH.
//
// Arrays are sequences of objects of the same type.
// Arrays index start form 0 and ending with number of elements -1.


#include <iostream>

int main(int argc, const char * argv[]) {
    
    //Declare an array integer type of size 5 elements:
    int intArray[5];
    
    //Declare an array char type of size 4 elements with values:
    char charArray[4] = {'a','D','C','N'};
    
    //Accessing array elements using subscript[] operator
    int arr[5] = {1,2,3,4,5};
    int index = arr[0];
    
    //Update array elements:
    arr[4] = 10;
    
    return 0;
}
