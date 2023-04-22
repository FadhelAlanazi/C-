//
//  main.cpp
//  Member-Initialization
//
//  Created by Fadhel Alanazi on 30/05/1444 AH.
//

#include <iostream>

class MyClass{
    
    int x,y;
public:
    MyClass(int xx ,int yy): x(xx),y(yy){
        std::cout<<x<<"\n"<<y<<"\n";
    }
};

int main(int argc, const char * argv[]) {
    MyClass obj1(2,4);
    
    return 0;
}
