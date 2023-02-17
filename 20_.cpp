#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int l,b,area;
    public:
    void input(){
        cout<<"Enter Length and Bridth of Rectangale :";
        cin>>l>>b;
        area=l*b;
        cout<<"Area of rectangale :"<<area;
    }


};
int main(){
    A obj;
    obj.input();
    
}

