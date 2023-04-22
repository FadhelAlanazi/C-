//
//  main.cpp
//  Polymorphism
//
//  Created by Fadhel Alanazi on 16/06/1444 AH.
//

#include <iostream>

class MybaseClass{
public:
        virtual void dowork(){
        std::cout<<"Hello from a base class."<<'\n';
    }
    
    virtual void doing() = 0;
};

class MyDerivedClass: public MybaseClass{
public:
    void dowork(){
        std::cout<<"Hello from a derived class."<<'\n';
    }
    
        void doing(){
        std::cout<<"Hello from a MyDerived Class."<<'\n';

    }
};

int main(int argc, const char * argv[]) {
    
    MybaseClass* ptr = new MyDerivedClass;
    ptr->dowork();
    ptr->doing();
    delete  ptr;
    
    return 0;
}
