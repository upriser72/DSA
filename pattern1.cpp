#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
    int sp=0;
        for(int i=0;i<2*n;i++)
        
        {
           
            for(int j=n-i;j>0;j--)
            {
                cout<<"*";
            }
            for(int k=0;k<sp;k++)
            {
                cout<<"h";
            }
            sp+=2;
            cout<<endl;
        }

   return 0;
}

