#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
    
    int n = 7;
    
    cout<<__builtin_popcount(n)<<endl;;

    long long s = 77777777777777;
    
    cout<<__builtin_popcountll(s);
    
    return 0;
}