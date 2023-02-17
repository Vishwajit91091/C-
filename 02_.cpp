#include<iostream>
#include<conio.h>
using namespace std;
class B
{
    private:
    int a,b,c;
    public:
    void input(){
        cout<<"Enter two Number :";
        cin>>a>>b;

    }
    void prosess(){
        c=a*b;
    }
    void show(){
        cout<<"Multiplication is :";
        cout<<c;
    }


};
int main(){
    B obj;
    obj.input();
    obj.prosess();
    obj.show();

}