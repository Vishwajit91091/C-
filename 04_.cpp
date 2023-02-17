#include<iostream>
#include<stdio.h>
using namespace std;
class A{
    private:
    int i;
    public:
    void ASCII(){
        for(i=0;i<=255;i++){
            cout<<" "<<(char)i<<i;

        }
    }
};
int main(){
    A obj;
    obj.ASCII();
    
}