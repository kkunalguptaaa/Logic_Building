#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
int a[]{10,20,30,40,50,60};
int *p[]{a,a+1,a+2,a+3,a+4,a+5};
int **pp=p;
cout << pp << " "<< *pp << " " << **pp << endl;
cout << ++*pp <<endl;
cout << pp << " "<< *pp << " " << **pp << endl;
}
