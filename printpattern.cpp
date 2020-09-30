#include<iostream>
using namespace std;
int main()
{
int num;
int i , print = 0;
cin>>num;
   /*IF NUM IS EVEN*/
if(num%2==0)
{
   for(i=0;i<num;i++)
   {
      
      cout<<print<<" ";
      print = print + 2;
}
   /*IF NUM IS ODD*/
else
{
print = 1;
   {
   for(i=0;i<num;i++)
      cout<<print<<" ";
      print = print+2;
}
return 0;
}
