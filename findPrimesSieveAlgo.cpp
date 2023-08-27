#include <iostream>
#include <cmath>
using namespace std;

void findPrimesNumber(int n)
{
  bool primeStatus[n];
  primeStatus[0] = primeStatus[1] = false;

  for (int i = 2; i < n; i++)
  {
    primeStatus[i] = true;
  }

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (primeStatus[i])
    {
      for (int j = i + 1; j <= n; j++)
      {
        if (j % i == 0)
        {
          primeStatus[j] = false;
        }
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (primeStatus[i])
    {
      cout << i << " ";
    }
  }
}

int main()
{
  findPrimesNumber(25);

  return 0;
}