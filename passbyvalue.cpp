#include<bits/stdc++.h>
using namespace std;

void something(int num)
{
   cout<<num<<endl;
   num+=5;
   cout<<num<<endl;
   num+=5;
   cout<<num<<endl;

}

void somestring(string s)
{
   s[0]='t';
   cout<<s<<endl;
}
//a copy of original number was used in the function although the original number was present in the previous memory location.
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

