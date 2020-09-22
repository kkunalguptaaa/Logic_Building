//5.	WAP to accept a string and count number of Words Present in it.(eq- Amar  Singh-- 2)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str,str_cpy;
    int i=0,count=0;
    getline(cin, str);
    str_cpy=str;
    reverse(str_cpy.begin(),str_cpy.end());
    if(str_cpy==str){
        cout << str << " is palindrome!";
    }
    else{
        cout << str << " is not a palindrome!";
    }
    return 0;
}
