#include<iostream>
using namespace std;
int main(){

    //Question 1:
    //Write a program which takes the values of length and breadth from user and check if it is a square or not.

    int length,breadth;
    cout<<"enter the length and breadth: "<<endl;
    cin>>length>>breadth;

    if(length==breadth){
        cout<<"it is a square"<<endl;
    }
    else{
        cout<<"it is not a square"<<endl;
    }


    //Question 2:
    //Write a program to print absolute value of a number entered by the user.

    int x;
    cout<<"enter the x: ";
    cin>>x;

    if(x<0){
        cout<<-x<<endl;
    }
    else{
        cout<<x<<endl;
    }

    

    //Question 3:
    // Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.
    
    int CP,SP;
    cout<<"enter selling price: ";
    cin>>SP;
    cout<<"enter cost price: ";
    cin>>CP;

    if(SP>CP){
        cout<<"Profit: "<<SP-CP<<endl;
    }
    else if(CP>SP){
        cout<<"Loss: "<<SP-CP<<endl;
    }
    else{
        cout<<"enter valid number"<<endl;
    }


    //Question 4:
    //Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.


    int num;
    cout<<"enter the number: ";
    cin>>num;

    if(num>0){
        cout<<num<<endl;
    }
    else{
        cout<<"skipped"<<endl;
    }


    //Question 5:
    //Create a calculator using switch statement to perform addition, subtraction, multiplication and division.


    int oprator;
    cout<<"enter the oprator: "<<endl;
    cin>>oprator;
   
    int num1;
    int num2;
    
    cout<<"enter num1: "<<endl;
    cin>>num1;
    cout<<"enter num2: "<<endl;
    cin>>num2;

    switch(oprator){
        case '+':
        cout<<"addition: "<<num1+num2<<endl;
        break;
        
         case '-':
        cout<<"subtraction: "<<num1-num2<<endl;
        break;
        
         case '/':
        cout<<"division: "<<num1/num2<<endl;
        break;

         case '*':
        cout<<"multiplication: "<<num1*num2<<endl;
        break;

    }



    //Question 6:
    //Write a program to calculate marks to grades . Follow the conversion rule as given below :


    int marks;
    cout<<"enter marks: ";
    cin>>marks;

    if((marks>0) & (marks<=30)){
        cout<<"your grade is F"<<endl;
    }
    else if((marks>30) & (marks<=40)){
        cout<<"your grade is E"<<endl;
    }
    else if((marks>40) & (marks<=50)){
        cout<<"your grade is D"<<endl;
    }
    else if((marks>50) & (marks<=60)){
        cout<<"your grade is C"<<endl;
    }
    else if((marks>60) & (marks<=70)){
        cout<<"your grade is B"<<endl;
    }
    else if((marks>70) & (marks<=80)){
        cout<<"your grade is B+"<<endl;
    }
    else if((marks>80) & (marks<=90)){
        cout<<"your grade is A"<<endl;
    }
    else if((marks>90) & (marks<=100)){
        cout<<"your grade is A+"<<endl;
    }
   


    return 0;
}