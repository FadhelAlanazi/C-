//
//  main.cpp
//  Classes
//
//  Created by Fadhel Alanazi on 29/05/1444 AH.
//
#include <iostream>

// by default struct access specifier is public
struct Mystruct {
    int x;
    std::string name;
};

// by default class access specifier is paivate
class Myclass{
    
    // data members
    char c;
    int x;
    double d;
    
    // member functions
    void doSomthing();
    
public:
    void doSomthing2(){
        doSomthing();
    }

};

void Myclass::doSomthing(){
    std::cout << "do" << "\n";
}

int main(int argc, const char * argv[]) {
    
    Myclass o;
   // o.x = 3;
   // o.c = 's';
    o.doSomthing2();
    
    Mystruct s;
    s.name = "f";
    return 0;
}


