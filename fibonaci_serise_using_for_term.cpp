#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int Num,a,b,c,d,e;
    public:
    void fiobo(){
        a=0; b=1; c=2; d=3;
        cout<<"Enter Number of Term :";
        cin>>Num;
        for(int i=1;i<=Num;i++){
            
            cout<<a<<" ";
            e=a+b+c+d;
            a=b;
            b=c;
            c=d;
            d=e;


        }
    }
};
int main(){
    A obj;
    obj.fiobo();

}