#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    char ch;
    public:
    void input(){
        cout<<"Enter Any Charecter :";
        cin>>ch;


    }
    void output(){
        cout<<"ASCII Values of "<<ch<<" is  : "<<(int)ch<<endl;


    }
};
int main(){
    A obj;
    obj.input();
    obj.output();
}