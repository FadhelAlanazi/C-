//
//  main.cpp
//  Static-Specifier
//
//  Created by Fadhel Alanazi on 17/06/1444 AH.

#include <iostream>

void myfunction(){
    
     // defined only first time static int x = 0,skipped other times when we call function
    static int x = 0;
    x++;
    std::cout << x << "\n";
}

int main(int argc, const char * argv[]) {
    
    myfunction();
    myfunction();
    myfunction();
    return 0;
}
