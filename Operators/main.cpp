//
//  main.cpp
//  Operators
//
//  Created by Fadhel Alanazi on 07/09/1444 AH.
//

#include <iostream>


class Stack{
public:
    int var;
    
    void operator<<(int v){
        std::cout<<v;
    }
};

int main() {
    Stack stk;
    int a = 0;
    stk << a;
    
    return 0;
}
