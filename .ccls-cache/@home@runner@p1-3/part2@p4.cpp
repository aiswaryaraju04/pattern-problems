#include <iostream>
using namespace std; 

int main()
{
   int row;
  cin>>row;
  int i=1;
  for(int i=1;i<=row;i++)
    {
    {
      int s=1;
      int j=1;
      while(s<=row-i)
        cout<<" ";
      s++;
    }
  for(int j=1;j<=i;j++)
        {
         cout<<"j"<<" ";
        }
  // j=i-1;
  // while(j>=1)
  //   {
  //     cout<<j<<" ";
  //     j=j-1;
  //   }
      for(int j=i-1;j>=1;j--)
        {
          cout<<j<<" ";
        }
      }
      cout<<endl;
    
  return 0;
}