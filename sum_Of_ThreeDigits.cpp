#include<iostream>
using namespace std;
int main(){

   int Digit = 123;
   int Sum = 0;  
   int First,Second,Third;

   Third = Digit%10;  
   Digit/=10;       //123   //3

   Second = Digit%10;  
   Digit/=10;      //12    //2

   First = Digit%10;// 1 

   Sum+=First+Second+Third;

   cout<<"Sum of three digits: "<<Sum<<endl;

    return 0;
}