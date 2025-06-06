#include<iostream>
using namespace std;
class demo
{
public:
int roll;
int marks;
demo (int x,int y){
    roll = x;
    marks =y;
    cout<<"roll no is :"<<roll<<endl;
    cout<<"marks is :"<<marks<<endl;

}
};
int main()
{
    demo obj(102,333);
    return 0;
}
