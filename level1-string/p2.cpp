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
    int index;
    getline(cin, str);
    cout << str+"-"+str[0];
    for(index=0;index<str.length();index++){
        index=str.find(" ",index);
        if (index!= string::npos) {
             cout <<"."<< str[index+1];
        }
        else{
            break;
        }
    }
    return 0;
}