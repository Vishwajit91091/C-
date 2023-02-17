#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class A{
    private:
    int a,b,c,s,area;
    public:
    void trangle(){
        cout<<"Enter Side of trangle :";
        cin>>a>>b>>c;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of Trangle :"<<area;



    }
};
int main(){
    A obj;
    obj.trangle();
}