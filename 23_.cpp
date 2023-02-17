#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int n;int sum=0;
    public:
    void input(){
        cout<<"Enter any number :";
        cin>>n;
    }
    void show(){
        for(int i=1;i<n;i++){
            if(n%i==0){
               
                  sum=sum+i;
            }
        }
        if(sum==n){
            cout<<"Number Is perfect :";
        }
        else{
            cout<<"Number is Not Perfect :";
        }
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}