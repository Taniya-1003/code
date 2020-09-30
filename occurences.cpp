#include<iostream>
using namespace std;
int main()
{
int value , n;
int i = 0 , count = 0;
cin>>n; 
int arr[n];
for(int j=0;j<n;j++)
{ 
    cin>>arr[j];
}
cout<<"Enter value ";
cin>>value;
while(i<n)
{
   if(arr[i]==value)
   {
   count = count + 1;
   }
}
cout<<"Number of occurences = "<<count;
return 0;
}
