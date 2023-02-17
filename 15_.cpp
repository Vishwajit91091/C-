#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    char ch;
    public:
    void input(){
        cout<<"Enter Chatrecter :";
        cin>>ch;
    }
    void show(){
        if(ch>='a' && ch<='z'){
            ch=ch-32;
            cout<<ch;

        }
        else{
            ch=ch+32;
            cout<<ch;
        }
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}