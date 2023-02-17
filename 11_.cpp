#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    char ch;
    public:
    void input(){
        cout<<"Plese Enter Charecter And Cheek  Vowel Or Consonant :";
        cin>>ch;

    }
    void show(){
        if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'){
            cout<<"Letter Is Vowel :";
        }
        else{
            cout<<"Letter Is CONSONANT :";
        }
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
}