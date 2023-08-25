#include <iostream>
#include <assert.h>
using namespace std;

void grouping(string str)
{
  for (int i = 1; i < str.size(); i++)
  {
    if (str[i] == str[i - 1])
      cout << str[i - 1];
    else
      cout << str[i - 1] << " ";

    if (i == str.size() - 1)
      cout << str[i];
  }
}

int main()
{
  grouping("aaabbbccc3331ddd*");

  return 0;
}
