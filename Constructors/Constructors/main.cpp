//
//  main.cpp
//  Constructors
//
//  Created by Fadhel Alanazi on 30/05/1444 AH.
//

#include <iostream>

class Myclass{
   
public:
    int x;
    int y;
    // default constructor
//    Myclass(){
//        std::cout<<"default constructor invoked \n";
//    }
    
    // default constructor with default arguments
//    Myclass(int xx = 8, int yy = 7){
//        x = xx;
//        y = yy;
//    }
    
    // not default constructor user-provided constructor
    Myclass(int xx,int yy){
        x = xx;
        y = yy;
    }
    
};


int main(int argc, const char * argv[]) {
    
    Myclass obj1(7,7);
    std::cout<<obj1.x<<obj1.y<<"\n";
    Myclass obj2(4,5);
    std::cout<<obj2.x<<obj2.y<<"\n";
    
    Myclass obj3{ 2,3 };
    std::cout<<obj3.x<<obj3.y<<"\n";

    return 0;
}
