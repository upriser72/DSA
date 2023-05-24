#include<bits/stdc++.h>
using namespace std;
int main()
{
   int age;
   cin>>age;
   if (age<18)
   {
      cout<<"not eligible for job"<<endl;
   }
   else
   {
      cout<<"eligible for job"<<endl;
      if(age>=55 && age<=57)
      {
         cout<<"eligible for job but retirement soon"<<endl;

      }
      else if(age>57)
      {
         cout<<"retirement time"<<endl;
      }
   }
}