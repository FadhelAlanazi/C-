//
//  main.cpp
//  Operators
//
//  Created by Fadhel Alanazi on 08/03/1445 AH.
//

#include <iostream>
using namespace std;

int main() {
    int x = 10,y = 5;
    
    //Arithmetic Operators (+ - * / %)
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    cout<<x%y<<endl;

    //Comparison Operators (> < >= <= == !=)
    if(x > y){
        cout<<"x is greater than y"<<endl;
    }else{
        cout<<"y is greater than x"<<endl;
    }
    
    //Logical Operators (&& || !)
    bool isPlaying = true,isNotPlaying = false;
    cout<<(isPlaying && isNotPlaying)<<endl;
    cout<< !isPlaying<<endl;
    
    //Increment/Decrement Operators
    cout<<"Increment/Decrement Operators begin:"<<endl;
    int counter = 0;
    
    cout<< counter++<<endl;
    cout<< ++counter<<endl;
    cout<< counter--<<endl;
    cout<< --counter<<endl;

    return 0;
}
