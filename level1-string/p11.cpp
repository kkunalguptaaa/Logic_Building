//2.	WAP to accept the First name , Middle Name and Last Name of a person and display full name  and 
//Short Name (eq- Amar Kumar Singh-   A.K.S).
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    string str,s1;
    int index;
    getline(cin, str);
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            s1=str.substr(i);
            s1=s1+str.substr(0,i)+"ay";
            break;
        }
    }
    cout << s1;
    return 0;
}