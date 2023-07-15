//
//  main.cpp
//  Enumeration-Scoped
//
//  Created by Fadhel Alanazi on 19/12/1444 AH.
//
// 2.scoped enums - do not leak value into an outer scope

#include <iostream>
using namespace std;
enum class Weekdays{
    Saturday,
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main(int argc, const char * argv[]) {
    Weekdays day = Weekdays::Saturday;
    return 0;
}
