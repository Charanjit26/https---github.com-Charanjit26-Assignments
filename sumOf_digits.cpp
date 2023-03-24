#include<iostream>
using namespace std;
int main(){
 
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

    sum+=first+forth;
    cout<<sum<<endl;

    return 0;
}