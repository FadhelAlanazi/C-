//
//  main.cpp
//  operator-overloading - prefix
//
//  Created by Fadhel Alanazi on 10/06/1444 AH.
//

#include <iostream>

class Myclass {

    public:

    int x,y;
    
    Myclass(int x = 0, int y = 0): x(x),y(y) {
        std::cout<<"Constructor Initialized \n";
    }
    
    Myclass& operator++(){
        ++x;
        ++y;
        return *this;
    }
    
  
};

int main(int argc, const char * argv[]) {
   
    Myclass obj1;
    std::cout<<obj1.x<<"\n"<<obj1.y<<"\n";

    obj1.operator++();
    std::cout<<obj1.x<<"\n"<<obj1.y<<"\n";

    ++obj1;
    std::cout<<obj1.x<<"\n"<<obj1.y<<"\n";

    return 0;
}
