#include<iostream>
using namespace std;
int main(){
    
    int x;  //product of X and y.
    int y;

    cout<<"enter X: "<<endl;
    cout<<"Enter Y: "<<endl;
    cin>>x>>y;
    
    cout<<"The product of X and Y is: "<<x*y<<endl;



    cout<<"ASCII value of U is: "<<(int)'U'<<endl;    //ASCII value of U.



    int length;    //finding the  Area of the rectangle.
    int breath; 

    cout<<"Enter the length: "<<endl;  
    cin>>length;
    cout<<"Enter the breadth: "<<endl;
    cin>>breath;

    cout<<"Area of Rectangular is: "<<length*breath<<endl;



    int cube;   //to find cube of the number.
    cout<<"Enter the number to find cube: "<<endl; 
    cin>>cube;

    cout<<"cube of the number is: "<<cube*cube*cube<<endl;



    cout<<"integer: "<<sizeof(int)<<endl;  //4       //basic build in data types.
    cout<<"boolean: "<<sizeof(bool)<<endl;  //1
    cout<<"character: "<<sizeof(char)<<endl;  //1
    cout<<"Wcharacter: "<<sizeof(wchar_t)<<endl;  //2
    cout<<"float: "<<sizeof(float)<<endl;  //4
    cout<<"double: "<<sizeof(double)<<endl;   //8

   

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