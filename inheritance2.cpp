#include<iostream>
using namespace std;

class student
{
public:
int a;
     string b; 
     void get1()
     
     {
        cout << "Enter your roll number: ";
        cin >> a;
        cout << "Enter your name: ";
        cin >> b;
    }
    

};
class subject
{
    public:
    string c;
    void get2()
{
        cout << "Enter your subject: ";
        cin >> c;
        
    }
};
class inheritance:public subject, public student
{
    public: 
    void show()
    {
        cout<<"hello\n"<<b<<"congratulations! you are selected in "<<c<<"   subject"<<endl;
    }

};
int main()
{
    inheritance obj;
    obj.get1();
    obj.get2();
    obj.show();
    return 0;
}
