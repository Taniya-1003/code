#include<iostream>
using namespace std;
int main()
{
int num;
int i , print = 0;
cin>>num;
if(num%2==0)
{
   for(i=0;i<num;i++)
      cout<<print<<" ";
      print = print + 2;
}
else
{
print = 1;
   for(i=0;i<num;i++)
      cout<<print<<" ";
      print = print+2;
}
return 0;
}
