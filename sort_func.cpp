#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
    
   //ascending order
    int arr[] = {4,2,1};

    sort(arr, arr+3);
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

   vector<int> vec = {4,2,1};

    sort(vec.begin(), vec.end());
    
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<endl;

   //descending order
   sort(arr, arr+3, greater<int>());
    
   cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

   sort(vec.begin(), vec.end(), greater<int>());
    
   cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2];
    
    return 0;
}