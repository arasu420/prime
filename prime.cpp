#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,count=0;
    cout << "Enter the= number";
    cin>>n;
    if(n==0 || n==1)
    {
        cout<<"not determine";
    }
    else
    {
    for(int i = 2; i <= n / 2; ++i)
    {
      if(n % i == 0)
      {
          count++;
          break;
      }
    }
  if (count==0)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";
         return 0;
    }
}