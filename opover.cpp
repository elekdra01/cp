#include<bits/stdc++.h>
using namespace std;
class person{
    private:
        int id;
	public:
		string name;
        void aboutme();
		void setid(int value);
};
void person :: aboutme()
{
    cout<<person::name<<" I am person  "<<person::id<<endl;
}
void person :: setid(int value)
{
    id=value;
}
int main()
{   person *pers=new person();//heap
	pers->name="anil";
	pers->setid(15);
    pers->aboutme();
    
    delete pers;
    return 0;
}