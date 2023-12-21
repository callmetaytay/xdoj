#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    if(s.find(t)!=-1)cout<<s.find(t);
    else cout<<"-1";

}
