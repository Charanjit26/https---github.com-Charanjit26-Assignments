#include<iostream>
using namespace std;
int main(){

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