#include <iostream>
#include <cstring>
#include "class.h"
using namespace std;

int main()
{
    cout << "Please write your first name : " ;
    hash_name a;
    cin>>a.name;
    cout<<endl<<"Please write the max size of the integer that the hash can return (>0 & <1.000.000.000): ";
    cin>>a.msize;

    a.EraseLetters();
    cout<<endl<<"The hash of the name "<<"'"<<a.name<<"'"<<" that is smaller than: "<<a.msize<<" is : "<<a.Hash()<<endl<<endl;


    return 0;
}
