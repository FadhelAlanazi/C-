//
//  main.cpp
//  Templates
//
//  Created by Fadhel Alanazi on 08/12/1444 AH.
//

#include <iostream>
using namespace std;

// create function accept any type

template <typename T>
void myFunc(T anything){
    cout<<"You are welcome We accept any value: " << anything <<endl;
}

int main(int argc, const char * argv[]) {
    
    myFunc("Ali");
    myFunc(15);
    myFunc(true);
    myFunc('B');
    
    return 0;
}
