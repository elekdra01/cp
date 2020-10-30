#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int a=5;
        A(){
            cout<<"constructor of A"<<endl;
        }
};
class B{
    public:
        int b=50;
        B(){
            cout<<"constructor of B"<<endl;
        }
};
class C:public B,public A{
    public:
        int c=5;
        C(){
            cout<<"constructor of C"<<endl;
            cout<<"constructor of C is inherited from A and B"<<endl;
        }
};
int main()
{
    C first;
    cout<<first.a<<endl;
    cout<<first.b<<endl;
    cout<<first.c<<endl;
}