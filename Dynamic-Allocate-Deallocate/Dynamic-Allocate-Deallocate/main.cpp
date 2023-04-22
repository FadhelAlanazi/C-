//
//  main.cpp
//  Dynamic-Allocate-Deallocate
//
//  Created by Fadhel Alanazi on 29/05/1444 AH.
//

#include <iostream>

int main(int argc, const char * argv[]) {
   
    // allocate space for object on heap memory حجز ديناميكي
    int* p = new int;
    *p = 123;
    std::cout<<"pointer value: "<<*p<<"\n";
    std::cout<<"pointer address: "<<p<<"\n";
    
    // deallocate space for object on heap memory الغاء الحجز الديناميكي
    delete p;

    return 0;
}
