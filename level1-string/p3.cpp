//3.	WAP to accept a String and Count number of Capital letters present in it.(eq- ComPuter - 2)
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i=0,count=0;
    getline(cin, str);
    while(i < str.length()){
        if('A'<=str[i]&&str[i]<='Z'){
            count++;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}
