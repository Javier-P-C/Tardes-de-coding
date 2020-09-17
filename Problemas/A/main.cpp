#include <iostream>
#include <cmath>

using namespace std;

int formula(int num)
{
  int resp;
  resp=(pow(num,2)-num)/2;
  return resp;
}

int main()
{
  int m,n,min,max,x,sobra,aux;
  std::cin >> n;
  std::cin >> m;
  x=n-m+1;
  max=formula(x);
  sobra=n%m;
  aux=m-sobra;
  x=n/m;
  min=aux*formula(x)+sobra*formula(x+1);
  std::cout<<max<<" ";
  std::cout<<min;
  return 0;
}