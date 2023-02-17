#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    cout.width(10);
    cout.fill('X');
    int num=6;
    cout<<num<<"\n";
    cout.width(15);
    cout.fill('b');
    num=12345;
    cout<<num<<endl;
    
}