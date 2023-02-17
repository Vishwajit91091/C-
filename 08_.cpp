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
        if(n%2==0){
            cout<<"Even ";

        }
        else{
            cout<<"Odd";
        }
    }

};
int main(){
    A obj;
    obj.input();
    obj.show();
    
}