#include<iostream>
using namespace std;
int main()
{

    char a[100];
    int i;
    cout<<"enter the string";
    cin>>a;
    cout<<a<<endl;
    for(i=0;a[i]!='\0';i++)
        cout<<i<<endl;
}
