//
//  main.cpp
//  Scope-life
//
//  Created by Fadhel Alanazi on 28/05/1444 AH.
//

#include <iostream>


/**
 * This is my function
 */
void myFunction(){
    int x = 123;  // x start scope
} // x end scope

int main(int argc, const char * argv[]) {


    int x = 123; // first x scope begins here
    
    {
        int x = 1; //second x scope begins here
        std::cout << x << "\n";
    } // second x scope ends here

    std::cout << x << "\n";
    return 0;
    
    // first x scope resumes here
    
} // first x scope ends here
