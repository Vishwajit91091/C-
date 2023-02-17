#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int side,area;
    public:
    void sqire(){
        cout<<"Enter Side of squire :";
        cin>>side;
        area=side*side;
        cout<<"Area of sqire :"<<area;
    }
};
int main(){
    A obj;
    obj.sqire();
    
}
