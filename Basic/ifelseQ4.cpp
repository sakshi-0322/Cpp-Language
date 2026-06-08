#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int marks;
    string sub;

    cout<<"enter the marks:";
    cin>>marks;

    cout<<"enter the sub";
    cin>>sub;

    if (sub == "science" && marks >= 90) //use of && mtlv dono condition true hona chhiye
    {
    cout<<"student is eligible for engineering";
    }
        else if (sub == "commerce" && marks >=80)//dono cindition true
    {
        cout<<"student is eligible for Bcom";
    }
     else 
     {
        cout<<"student is eligible for arts";
    }
    return 0;
}
    
    
    
    
    
    
    
    
    
        