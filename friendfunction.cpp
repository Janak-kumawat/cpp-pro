#include<iostream>
using namespace std;
class f1{
    public:
    void B()
    {
        cout<<"helol bca";

    }
    friend void A();

};
void A (){
    cout<<"hello bba";

}
int main(){
    f1 obj;
    A();
    obj.B();
    return 0;
}