#include<bits/stdc++.h>
using namespace std;

void something(int &num)
{
   cout<<num<<endl;
   num+=5;
   cout<<num<<endl;
   num+=5;
   cout<<num<<endl;

}
sample 

void somestring(string &s)
{
   s[0]='t';
   cout<<s<<endl;
}
//instead of a copy,the & referred to fetch the original address and value of the datatype.
int main()
{
   int num;
   cin>>num;
   something(num);
   cout<<num<<endl;
   string s;
   cin>>s;
   somestring(s);
   cout<<s<<endl;
   return 0;
}

//IMPORTANT:arrays always pass with reference by default.

