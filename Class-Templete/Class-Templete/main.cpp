//
//  main.cpp
//  Class-Templete
//
//  Created by Fadhel Alanazi on 08/12/1444 AH.
//

#include <iostream>
using namespace std;

template <typename T>
class Student{
    T x;
public:
    Student(T x){
        this->x = x;
    }
    
    void print(){
        cout<< "x value: "<<x<<endl;
    }
};


int main(int argc, const char * argv[]) {
    
    Student s("Ahmad");
    s.print();
  
    Student s2(34.55);
    s2.print();
    return 0;
}
