//4.	WAP to accept a string and count number of Vowels present in it
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i=0,count=0;
    getline(cin, str);
    while(i < str.length()){
        if('a'==str[i]||'e'==str[i]||'i'==str[i]||'o'==str[i]||'u'==str[i]||'A'==str[i]||'E'==str[i]||'I'==str[i]||'O'==str[i]||'U'==str[i]){
            count++;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}
