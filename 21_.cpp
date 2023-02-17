#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int n;
    public:
    void input(){
        cout<<"Enter a number :";
        cin>>n;

    }
    void show(){
        if(n%7==0||n%10==7){
            cout<<"Number is Buzz :";
        }
        else{
            cout<<"Number is Not Buzz :";
        }
    }

};
int main(){
    A obj;
    obj.input();
    obj.show();

}