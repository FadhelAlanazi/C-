//
//  main.cpp
//  Inheritance - Protected data
//
//  Created by Fadhel Alanazi on 16/06/1444 AH.
//

#include <iostream>

class Baseclass{
    protected:
    char c;
    int x;
    
    public:
    void access(){
        std::cout<<"base class\n"<<x<<"\n"<<c<<"\n";
    }
};
     // inheritance
class DerivedClass: public Baseclass {
    // c and x accessible here
public:
    void access(){
        std::cout<<"derived class\n"<<x<<"\n"<<c<<"\n";
    }
};

int main(int argc, const char * argv[]) {
   
    Baseclass baseObj;
    DerivedClass derivedObj;
    
    baseObj.access();
    derivedObj.access();
    
//    baseObj.c = 'v';
//    derivedObj.x = 5;

    return 0;
}
