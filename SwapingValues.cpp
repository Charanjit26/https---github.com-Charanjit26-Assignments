#include<iostream>
using namespace std;
int main(){

    int Swap_a =80;   //exchanging the values of two variables using a third variable.
    int Swap_b =100;

    int swaper;

    swaper = Swap_a;
    Swap_a = Swap_b;
    Swap_b = swaper;

    cout<<"Swap_a: "<<Swap_a<<endl;    //100
    cout<<"Swap_b: "<<Swap_b<<endl;    //80


    return 0;
}