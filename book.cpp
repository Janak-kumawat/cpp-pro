#include <iostream>
using namespace std;
struct book
{
    char tital [25];
    char author [25];
    float price;

};
int main(){
    book book1;
    cout<<"enter book tital\n";
     cout<<"enter book author\n";
      cout<<"enter book prise\n";
    cin>>book1.tital;
     cin>>book1.author;
      cin>>book1.price;

    cout<<"book tital is "<<book1.tital;
    cout<<"book author is "<<book1.author;
    cout<<"book.price is "<<book1.price;
     return 0;
}
