#include <iostream>
#include <assert.h>
using namespace std;

void stringSeries(string str)
{
  for (int i = 0; i < str.size(); i++)
  {
    for (int j = i; j < str.size(); j++)
    {
      for (int k = i; k <= j; k++)
        cout << str[k];

      if (j != str.size() - 1)
        cout << ", ";
    }
    cout << "\n";
  }
}

int main()
{
  stringSeries("123a");

  return 0;
}