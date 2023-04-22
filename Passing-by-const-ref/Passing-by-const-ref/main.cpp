//
//  main.cpp
//  Passing-by-const-ref
//
//  Created by Fadhel Alanazi on 29/05/1444 AH.
//

#include <iostream>
#include <string>

void myFunc(const std::string& name){
    
    std::cout << "my name passed " << name <<"\n";

}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string n = "Fadhel";
    myFunc(n);
    std::cout << n <<"\n";
    return 0;
}
