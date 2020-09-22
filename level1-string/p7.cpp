//5.	WAP to accept a string and count number of Words Present in it.(eq- Amar  Singh-- 2)
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i=0,count=0;
    cin >> str;
    if(str=="monday")
        cout << 1;
    else if(str=="tuesday")
        cout << 2;
    else if(str=="wednesday")
        cout << 3;
    else if(str=="thursday")
        cout << 4;
    else if(str=="friday") 
        cout << 5;
    else if(str=="saturday")
        cout << 6;
    else if(str=="sunday") 
        cout << 7;
    else
        cout << "Invalid!";
    return 0;
}
