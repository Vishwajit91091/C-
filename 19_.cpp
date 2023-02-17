#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int a,c,s=0,r;
    public:
    void palindrom(){
        cout<<"Enter a Number :";
        cin>>a;
        
    }
    void show(){
        c=a;
        while(a>0){
            r=a%10;
            s=(s*10)+r;
            a=a/10;




        }
        if(c==s){
            cout<<"Number is Pallindrom :";
        }else{
            cout<<"Number is Not pallindrm :";
        }
    }
};
int main(){
    A obj;
    obj.palindrom();
    obj.show();

}