// Find total number of Squares in a N*N chessboard
#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    cout<<n*(n+1)*(2*n+1)/6<<"\n";
  }
  return 0;
}