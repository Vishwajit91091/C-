#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    float a,b,c,d;
    a=1.23456789;
    b=34.56;
    c=1.34E2;
    d=-123.5677;
     
    cout.setf(ios::showpoint);
    cout.precision(5);
     
    cout<<"a= "<<a<<"\n";
    cout<<"b= "<<b<<"\n";
    cout<<"c= "<<c<<"\n";
    cout<<"d= "<<d<<"\n";
}
