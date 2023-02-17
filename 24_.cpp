#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int n,fact=1;
    public:
    void input(){
        cout<<"Enter Any Number :";
        cin>>n;
    }
    void show(){
        for(int i=1;i<=n;i++){
            fact=fact*i;

        }
        cout<<"Factorial :"<<fact;
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
    
}