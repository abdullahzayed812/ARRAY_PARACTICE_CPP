#include <iostream>
#include <assert.h>
using namespace std;

void convertToNumber(string str)
{
  bool numberFound = false;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if ((int)str[i] >= 48 && (int)str[i] <= 57)
    {
      if ((int)str[i] != 48)
        numberFound = true;

      if (numberFound)
        cout << (int)str[i] - 48 << " ";
    }
    else
      assert(false);
  }
}

int main()
{
  convertToNumber("00123405");

  return 0;
}