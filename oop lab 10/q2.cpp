//2. WAP to display data of two different types of function template with multiple arguments
#include<iostream>
using namespace std;
template<class t1,class t2>
class xyz
{
    t1 x,y;
    t2 z;
    public:
    void get(t1 i,t1 j,t2 k)
    {
        x=i;
        y=j;
        z=k;
    }
    void display()
    {
        cout<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
};
int main()
{
    xyz<char,char>x1;
    xyz<int,char>x2;
    xyz<int,int>x3;
    x3.get(10,20,30);
    x3.display();
    return 0;
}