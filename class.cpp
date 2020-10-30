#include<bits/stdc++.h>
using namespace std;
class person{
    public:
        int id;
        string name;
        void aboutme();
};
void person :: aboutme()
{
    cout<<person::name<<" I am person  "<<name<<endl;
}
int main()
{   person *pers=new person();//heap
    pers->aboutme();
    person anil;//stack
    anil.name="anil";
    anil.aboutme();
    person *bunty=new person();
    bunty->aboutme();
    delete pers;
    return 0;
}