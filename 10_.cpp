#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int a,b,temp;
    public:
    void input(){
        cout<<"Enter Two Number :\n";
        cin>>a>>b;
        cout<<"\n Before Swap :"<<"A= "<<a<<"  B= "<<b;

    }
    void show(){
        temp=a;
        a=b;
        b=temp;
        cout<<"\n After Swaping :";
        cout<<"A= "<<a<<" B= "<<b;
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}