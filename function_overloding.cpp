#include<iostream>
using namespace std;
class A{
    public:
    int add (int a , int b)
    {
        return(a+b);

    }
    float add (float a, float b)
    {
        return(a+b);
    }
};
int main()
{
A obj;
int x,y,z;
float a,b,r;
cout<<"\nenter any two integer values\n";
cin>>x>>y;
z=obj.add(x,y);
cout<<"addition is : "<<z;

cout<<"\nenter any two desimal values\n";
cin>>a>>b;
r=obj.add(a,b);
cout<<"addition is : "<<r;
return 0;
}
