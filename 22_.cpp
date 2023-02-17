#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    private:
    float radious,area,PI=3.14;
    public:
    void circle(){
        cout<<"Enter Radious :";
        cin>>radious;
        area=PI*(radious*radious);
        cout<<"Area of circle :"<<area;

    }
};
int main(){
    A obj;
    obj.circle();
    
}