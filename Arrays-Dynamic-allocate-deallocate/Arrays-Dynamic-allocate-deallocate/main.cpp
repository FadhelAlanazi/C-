//
//  main.cpp
//  Arrays-Dynamic-allocate-deallocate
//
//  Created by Fadhel Alanazi on 29/05/1444 AH.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int* p = new int[5];
    
    p[0] = 10;
    p[1] = 11;
    p[2] = 12;
    p[3] = 13;
    p[4] = 14;
    
    for (int i = 0; i < 5; i++) {
        std::cout <<p[i]<<"\n";
    }
    
    delete[] p;
    
    return 0;
}
