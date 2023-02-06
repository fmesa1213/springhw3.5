/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: E3.5
Wrote a program  that reads three numbers and prints “increasing” if they are in increasing order, 
“decreasing” if they are in decreasing order, and “neither” otherwise. 
*/

#include <iostream>
using namespace std;

int main ()
{
  int first;
  int second;
  int third;
  
  cout << "Enter three numbers: " << endl;\
  cin >> first;
  cin >> second;
  cin >> third;
  
  if ((first < second) && (second < third))
  {
    cout << "increasing" << endl;
  }
  
  else if ((first > second) && (second > third))
  {
    cout << "decreasing" << endl;
  }
  
  else 
  {
        cout << "neither" << endl;
  }
  return 0;
}
