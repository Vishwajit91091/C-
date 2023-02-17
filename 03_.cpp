#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int n,i,r;
    public:
    void Table(){
        cout<<"Enter Any Number :";
        cin>>n;
        for(i=1;i<=10;i++){
            r=n*i;
            cout<<n<<"*"<<i<<" ="<<r<<endl;

        }
    }
};
int main(){
    A obj;
    obj.Table();

}