#include<iostream>
using namespace std;
class test{
public:
int a ,b;
test()
{a=10;
b=20;

}
void display()
{int c= a+b;
    cout<<"the value of a is :"<<a<<endl;
    cout<<"the value of b is :"<<b<<endl;
    cout<<"total is :"<<c ;
}

};
int main(){
    test t1;
    t1.display();
    return 0;
}