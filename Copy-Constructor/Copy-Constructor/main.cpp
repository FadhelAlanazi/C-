//
//  main.cpp
//  Copy-Constructor
//
//  Created by Fadhel Alanazi on 30/05/1444 AH.
//

#include <iostream>
using namespace std;

class Myclass{
public:
    int x,y;
    Myclass(int xx,int yy): x{xx},y{yy}{
        std::cout<<x<<"\n"<<y<<"\n";
    }
};

int main(int argc, const char * argv[]) {
   
    Myclass obj1(2,3);
    Myclass obj2 = obj1; // default copy constructor invoked


    return 0;
}
