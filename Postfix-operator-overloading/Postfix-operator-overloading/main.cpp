//
//  main.cpp
//  Postfix-operator-overloading
//
//  Created by Fadhel Alanazi on 11/06/1444 AH.
//

#include <iostream>

class Myclass {
public:
    int x,y;
    Myclass(int xx = 0,int yy = 0): x(xx),y(yy){
        std::cout<<x<<"\n"<<y<<"\n";
    }
    
    Myclass& operator++(){
        ++x;
        ++y;
        std::cout<<"Prefix operator invoked \n";
        return *this;
    }
    
    Myclass operator++(int){
        Myclass tmp(*this); // create a copy
        operator++(); // invoke prefix operator overload
        std::cout<<"Postfix operator invoked \n";
        return  tmp; //return old value
    }
};

int main(int argc, const char * argv[]) {
    
    Myclass myobject;
    myobject++;
    std::cout<<myobject.x<<"\n"<<myobject.y<<"\n";
    return 0;
}
