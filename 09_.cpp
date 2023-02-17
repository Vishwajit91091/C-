#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int a,b;
    public:
    void input(){
        cout<<"Enter Two Number :\n";
        cin>>a>>b;
        cout<<"Before Swap :"<<" a= "<<a<<" b=  "  <<b;
    }
    void show(){
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"\n After swaping :";
        cout<<"a= "<<a<<"b= "<<b;
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();

}