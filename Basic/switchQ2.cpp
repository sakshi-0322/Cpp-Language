#include <iostream>
using namespace std;
int main()
{

int num;
cout<<"enter a num";
cin>>num;
switch(num){

    case 1:
    cout<<"Red=Stop"<<endl;
    break;

    case 2:
    cout<<"yellow=wait";
    break;

    case 3:
    cout<<"greean=go";
    break;

    default: 
    cout<<"invalid value";
} 
return 0;
}