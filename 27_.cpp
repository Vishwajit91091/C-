#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int n,a=0,b=1,c;
    public:
    void input(){
        cout<<"Enter any number :";
        cin>>n;
    }
    void show(){
        for(int i=1;i<=n;i++){
            cout<<a<<endl;
            c=a+b;
            a=b;
            b=c;

        }


    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
    
}