//
//  main.cpp
//  Passing-by-ref
//
//  Created by Fadhel Alanazi on 29/05/1444 AH.
//

#include <iostream>

void myFunc(int& num){
    num ++;
    std::cout<<num<<std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 123;
    
    myFunc(x);
    std::cout<<x<<std::endl;

    
    return 0;
}
