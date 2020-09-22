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
    index=str.find(" ");
    if(str.substr(0,index)=="mr."){
        cout << str << " is male!";
    }
    else if(str.substr(0,index)=="miss"){
        cout << str << " is female!";
    }
    else if(str.substr(0,index)=="mrs"){
        cout << str << " is female!";
    }
    else if(str.substr(0,index)=="kumari"){
        cout << str << " is female!";
    }
    else{
        cout << str << " your gender can not be determined!";
    }
    return 0;
}