//
//  main.cpp
//  Enumeration
//
//  Created by Fadhel Alanazi on 15/12/1444 AH.
//

#include <iostream>
using namespace std;

/* There are two kinds of enums:
* 1.unscoped enums - leak value into an outside scope
* 2.scoped enums - do not leak value into an outer scope
*/

  // 1. unscoped enums
enum WeekDays{
    Saturday,
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main(int argc, const char * argv[]) {
  
    WeekDays day = Monday;
    cout<< day <<endl;
    
    return 0;
}
