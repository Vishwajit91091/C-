#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int num,rem,sum=0;
    public:
    void input(){
        cout<<"Enter Any Number :";
        cin>>num;
    }
    void show(){
        for(int i=1;i<num;i++){
            rem=num%i;
            if(rem==0){
                sum=sum+i;
            }
        }
        if(num==sum){
            cout<<"Number Is Perfect :";
        }
        else{
            cout<<"Number Is Not Perfect :";
        }
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}