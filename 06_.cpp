#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    int y;
    public:
    void leep()
    {
        cout<<"Enter Year :";
        cin>>y;

        if(y%400==0 && y%100==0 || y%4==0 && y%100!=0)
        {


            cout<<"Leep Year !";
        }
        else{
            cout<<"Not Leep Year ";
        }
    }
};
int main(){
    A obj;
    obj.leep();
}