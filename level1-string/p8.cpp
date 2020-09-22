//5.	WAP to accept a string and count number of Words Present in it.(eq- Amar  Singh-- 2)
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i=0,count=0;
    getline(cin, str);
    while(i < str.length()){
        if('a'<=str[i]&&str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if('A'<=str[i]&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
        i++;
    }
    cout << str << endl;
    return 0;
}
