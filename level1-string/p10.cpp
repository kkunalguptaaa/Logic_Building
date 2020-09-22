//2.	WAP to accept the First name , Middle Name and Last Name of a person and display full name  and 
//Short Name (eq- Amar Kumar Singh-   A.K.S).
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    int index,lastWordIndex;
    getline(cin, str);
    cout << str+"-";
    for(index=0;index<str.length();index++){
        index=str.find(" ",index);
        if (index!= string::npos) {
             cout <<str[index-1] << ".";
             lastWordIndex=index;
        }
        else{
            break;
        }
    }
    cout << str.substr(lastWordIndex+1,str.length());
    return 0;
}