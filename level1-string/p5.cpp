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
        if(str[i]==' '){
            count++;
        }
        i++;
    }
    cout << count+1 << endl;
    return 0;
}
