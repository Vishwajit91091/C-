#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int n,c,rem,temp;
    public:
    void input(){
        cout<<"Enter a Number :";
        cin>>n;
    }
    void show(){
        c=n;
        temp=0;
        while(n>0){
            rem=n%10;
            temp+=(rem*rem*rem);
            n=n/10;


        }
        if(temp==c){
            cout<<"Armstrong";
        }
        else{
            cout<<"Not Armstrong";
        }

    }
};
int main(){
    A obj;
    obj.input();
    obj.show();

}