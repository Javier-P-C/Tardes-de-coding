#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int m,n,min,max,aux;
  std::cin >> n;
  std::cin >> m;
  aux=n-m;
  max=(pow(aux,2)-aux)/2;
  std::cout<<max;
  return 0;
}