//
//  main.cpp
//  Inheritance-Private-Members-BaseClass
//
//  Created by Fadhel Alanazi on 16/06/1444 AH.
//

#include <iostream>

class Baseclass{
    private:
    char c = 'A';
    int x = 5;
    
    public:
    void access(){
        std::cout<<c<<"\n"<<x<<"\n";
}
};

class Derivedclass: public Baseclass{
    // c and x not accessible here
    public:
    void access(){
        // std::cout<<c<<x<<"\n";
    }
};

int main(int argc, const char * argv[]) {
    
    Derivedclass derivedObj;
    Baseclass baseObj;
    
    baseObj.access();
    derivedObj.access();
    return 0;
}
