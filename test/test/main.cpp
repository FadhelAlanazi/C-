//
//  main.cpp
//  test
//
//  Created by Fadhel Alanazi on 22/05/1444 AH.
//

#include <iostream>
#include "string"

int main() {
    
    std::cout<<"Question:1\n";
    //Array definition - difines and initializes an array of five double values change first & last elements
    
    double array[5] = {2.2,4.1,5.7,4.2,6.70};
    array[0] = 2.1;
    array[4] = 998.0;
    for (int i = 0; i < 5; i++) {
        std::cout<<array[i]<<"\n";
    }
    
    std::cout<<"Question:2\n";
    //Pointer object - defines object of type double and define a pointer thats point to the object
    
    double myDouble = 4.5;
    double* ptrDouble = &myDouble;
    std::cout<<*ptrDouble<<"\n";

    std::cout<<"Question:3\n";
    //defines an object of type double and defines an object of reference and initializes with the object , change the value by the reference
    
    double d1 = 1.1;
    double& ref = d1;
    std::cout<<ref<<"\n";
    ref = 4.3;
    std::cout<<ref<<"\n"<<d1<<"\n";

    return 0;
}
