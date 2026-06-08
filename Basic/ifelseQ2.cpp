#include <iostream>
using namespace std;
int main() 
{
    int n;

    cout<<"enter n:";
     cin>>n;
    if(n>0)
    {
        cout<<"the value is positive";
    }
    else if (n<0)
    {
        cout<<"the vlue is nagative";
    }
    else
    {
        cout<<"the vlue is 0";
    }
    return 0;
}