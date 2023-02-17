#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int N1,N2,GCD;
    public:
    void input(){
        cout<<"Enter Two Number";
        cin>>N1>>N2;
    }
    void show(){
        for(int i=1 ;i<=N1 && i<=N2;++i){
            if(N1%i==0 && N2%i==0){
                GCD=i;
            }

        }
        cout<<"Greatest Common Divisior :"<<GCD;
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}