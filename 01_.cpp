#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    private:
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter The Values :";
        cin>>a>>b;

    }
    void sum(){
        c=a+b;

    }
    void show(){
        cout<<c;
    }
};
int main(){
    A obj;
    obj.input();
    obj.sum();
    obj.show();
    
}