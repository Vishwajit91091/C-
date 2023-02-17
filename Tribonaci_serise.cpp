#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int n,a,b,c,d;
    public:
    void tribo(){
        a=0; b=1; c=2;
        cout<<"Enter Number Of Term :";
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<a<<ends<<" ";
            d=a+b+c;
            a=b;
            b=c;
            c=d;


        }

    }
};
int main(){
    A obj;
    obj.tribo();
}