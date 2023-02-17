#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int num=71;
    cout.fill('*');
    cout.setf(ios::showpos);
    cout.setf(ios::left,ios::adjustfield);
    cout.width(6);
    cout<<num<<"\n";
    cout.setf(ios::right,ios::adjustfield);
    cout.width(6);
    cout<<num<<"\n";
    cout.setf(ios::internal,ios::adjustfield);
    cout.width(6);
    cout<<num<<"\n";

}