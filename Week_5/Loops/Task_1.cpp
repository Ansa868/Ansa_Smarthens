#include<iostream>
using namespace std;

void print(int r);
int main()
{
  int r;
  cout<<"Enter the number=";
  cin>>r;
  print(r);
  return 0;
}
void print(int r)
{
  for (int i = 1; i <=r; i++)
  {
    for (int j = i; j <=r ; j++)
    {
      cout<<"*";
    }
      cout<<endl;
  }
}
