//
//  main.cpp
//  CalculateAVG-Vector
//
//  Created by Fadhel Alanazi on 27/11/1444 AH.
//

/*
 Write a program that takes one floating-point number, creates vector with 5 float values:

 given number,
 given number + 5,
 given number + 0.5,
 given number + 2.3,
 given number + 4.7.
 After this, print sum of vector elements, and average value (sum/vector size).
 */

#include <vector>
#include <iostream>

using namespace std;
int
main ()
{
  vector <float> v1(5);
  float result = 0;
  float a;
  cin>>a;
  
      v1[0] = a ;
      v1[1] = a + 5;
      v1[2] = a + 0.5;
      v1[3] = a + 2.3;
      v1[4] = a + 4.7;
      
      for(int i = 0; i < v1.size(); i++){
        result += v1[i];
      }
    cout<<"Sum of given number + vector: " << result<< endl;
    cout<<"Average value: " << result / v1.size()<<endl;

  
  return 0;
}
