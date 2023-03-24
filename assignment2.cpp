#include<iostream>
using namespace std;
int main(){
    
    int num1;    //first question.   //Write a program to check whether two numbers (entered by user) are equal or not.
    int num2;
    cout<<"enter numers: "<<endl;  //tried to solve with two ways.
    cin>>num1>>num2;

    bool flag;

    num1==num2? flag=true : flag=false;   //first way.
    cout<<flag<<endl;

   num1==num2? cout<<"numbers are equal: "<<flag<<endl : cout<<"numbers are not equal: "<<flag<<endl;  //second way.



   /*second Question:    Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 
   'a < 50' and 'a < b' are true.*/
   
   int a;
   int b;
   cout<<"enter a and b: "<<endl;
   cin>>a>>b;
 
   
   (a<50 & a<b)? cout<<"both conditions are true."<<endl : cout<<"conditions aren't true."<<endl;

   
   //Question 3:
   /*There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys
   made up 80% of the students that received grades "A".*/
   

   int boys;     //this question was a little difficult for me, thus, i saw the soluction of this question and then i did it.
   int total;
   int girls;

   total = (80*45)/100;
   boys = 17;
   girls = total-boys;

   cout<<"total girls who received grade A: "<<girls<<endl;



   //question 4: 
   //Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

    int digit = 12345;
    int sum=0;
    int first,second,third,forth,fifth;
    
    fifth= digit%10;  
    digit/=10;    //1234   //5

    forth = digit%10; 
    digit/=10;   //1234    //4

    third = digit%10; 
    digit/=10;  //123      //3

    second= digit%10;
    digit/=10;  //12      //2

    first = digit%10;     //1  

    sum+=first+forth;   //1+5 = 6.
    cout<<"sum of the first and the second last digit: "<<sum<<endl;
   

    
   //Question 5:
   //  Write a program to calculate the sum of digits of a 3 digit number.

   int Digit = 123;
   int Sum = 0;  
   int First,Second,Third;

   Third = Digit%10;  
   Digit/=10;       //123   //3

   Second = Digit%10;  
   Digit/=10;      //12    //2

   First = Digit%10;// 1 

   Sum+=First+Second+Third;   //1+2+3 = 6.

   cout<<"Sum of three digits: "<<Sum<<endl;




   //Question 6:
   //  Design a calculator to perform basic arithmetic operations (+,-,/,*,%).

   int num_1;
   int num_2;

   cout<<"Enter num_1: "<<endl;
   cout<<"Enter num_2: "<<endl;
   
   cin>>num_1>>num_2;

   cout<<"Addition: "<<(num_1+num_2)<<endl;
   cout<<"Subtraction: "<<(num_1-num_2)<<endl;
   cout<<"Division: "<<(num_1/num_2)<<endl;
   cout<<"Multiplication: "<<(num_1*num_2)<<endl; 
   cout<<"Modulo: "<<(num_1%num_2)<<endl;


    return 0;
}