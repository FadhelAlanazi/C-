//
//  main.cpp
//  Passing-byValue
//
//  Created by Fadhel Alanazi on 29/05/1444 AH.
//

#include <iostream>

void myfunc(int num){
    num += 1;
    std::cout<<num<<"\n";
}

int main(int argc, const char * argv[]) {
    int n = 123;
    // passing argument by a value/ or copy
    myfunc(n);
    std::cout<<n<<"\n";

    return 0;
}
