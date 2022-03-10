#include <iostream>
using namespace std; 

int main() {
   int row;
  cin>>row;
  for(int i=1;i<=row;i++)
    {
      // p=i;
      int s=1;
      while(s<=row-i)
        {
          cout<<" ";
          s=s+1;
        }
      
      for(int j=1;j<=i;j++)
        {
          
          cout<<"*";
          
            
        }
      cout<<endl;
    }
  return 0;
}