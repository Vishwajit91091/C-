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
        int count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2){
            cout<<"Number Is Prime :";
        }
        else
        {
            cout<<"Number Is NOT Prime :";
        }
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}