//2.	WAP to accept the First name , Middle Name and Last Name of a person and display full name  and 
//Short Name (eq- Amar Kumar Singh-   A.K.S).
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    string s1,s2;
    int index;
    cin >> s1 >> s2;
    if(s1==s2){
        cout << "Both are same!";
    }
    if(lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end())){
        cout << s1 << " is lexicographical less than " <<s2;
    }
    else if(lexicographical_compare(s2.begin(),s2.end(),s1.begin(),s1.end())){
          cout << s2 << " is lexicographical less than " <<s1;
    }
    return 0;
}