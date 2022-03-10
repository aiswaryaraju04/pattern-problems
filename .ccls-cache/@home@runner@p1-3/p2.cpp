#include <iostream>
using namespace std; 

int main() {
   int row;
  cin>>row;
  int p=1;
  int i=1;
  
  for(int i=1;i<=row;i++)
    {
      // p=i;
      char ch= 65+row-i;
      for(int j=1;j<=i;j++)
        {
          
          cout<<ch<<" ";
          // p=p+1;
          ch++;
            
        }
      cout<<endl;
    }
  return 0;
}