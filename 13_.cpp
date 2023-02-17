#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int n;
    public:
    void input(){
        cout<<"Enter a Number :";
        cin>>n;

    }
    void show(){
        for(int i=1;i<=n;i++){
            cout<<"\nNatural Number : "<<i;
        }
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}