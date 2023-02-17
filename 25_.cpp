#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int n,r,sum=0;
    public:
    void input(){
        cout<<"Enter any number :";
        cin>>n;
    }
    void show(){
        while(n>0){
            r=n%10;
            sum=sum+r;
            n=n/10;

        }
        cout<<"Sum of Digit :"<<sum;
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}