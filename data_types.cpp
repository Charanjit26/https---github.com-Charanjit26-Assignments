#include<iostream>
using namespace std;
int main(){
   
    cout<<"integer: "<<sizeof(int)<<endl;  //4
    cout<<"boolean: "<<sizeof(bool)<<endl;  //1
    cout<<"character: "<<sizeof(char)<<endl;  //1
    cout<<"Wcharacter: "<<sizeof(wchar_t)<<endl;  //2
    cout<<"float: "<<sizeof(float)<<endl;  //4
    cout<<"double: "<<sizeof(double)<<endl;   //8

    return 0;
}