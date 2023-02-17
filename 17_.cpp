#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class A{
    private:
    int n,i,s,p;
    public:
    void perfect(){
        cout<<"Enter a Number";
        cin>>n;
        for(i=1;i<=n;i++){
            s=sqrt(i*i);
            p=  s*i;
            cout<<"\n Perfect Sqire : "<<p;




        }
        
    }
};
int main(){
    A obj;
    obj.perfect();

}