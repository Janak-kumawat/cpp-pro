#include<iostream>
using namespace std;
int fun(){
   
    int num,digsum,lastdig;
    digsum=0;
    while (num>0)
    {
        lastdig=num%10;
        num=num/10;
        digsum=digsum+lastdig;

    }
    
        cout<<"enter a number:"<<endl;
        cin>>num;
         cout<<"sum is="<<digsum;
          return lastdig;

   
}
int main(){
    cout<<"sumis="<<fun()<<endl;
    return 0;
   
   
}