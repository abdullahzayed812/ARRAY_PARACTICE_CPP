#include <iostream>
#include <assert.h>
using namespace std;

string convertNumberToString(long long int result)
{
  string strRet = "";

  while (result % 10)
  {
    strRet += char(result % 10 + 48);
    result /= 10;
  }

  return strRet;
}

void reverseString(string &str)
{
  for (int i = 0; i < str.size() / 2; i++)
  {
    char &current = str[i];
    char &correspond = str[str.size() - i - 1];
    char temp = 'w';

    temp = current;
    current = correspond;
    correspond = temp;
  }
}

string add9999(string str)
{
  const int stringLength = str.size();

  if (stringLength < 5)
  {
    short int charIndex = 0;
    string res = "1";
    for (int i = 0; i < 3; i++)
    {
      if (i < 5 - stringLength - 1)
        res += char(48);
      else
        res += str[charIndex++];
    }
    res += char(int(str[stringLength - 1]) - 1);
    return res;
  }
  else
  {
    str[stringLength - 5] = char(int(str[stringLength - 5]) + 1);
    str[stringLength - 1] = char(int(str[stringLength - 1]) - 1);
    return str;
  }
}

int main()
{
  cout << add9999("123456789123456789123456");

  // const int SIZE = 5;
  // int arr[SIZE] = {1, 12, 28, 40, 50};

  // short int result = binarySearch(arr, 0, 4, 2);

  // (result != -1) ? cout << "Target is found in index: " << result << "\n" : cout << "Number not found."
  //                                                                                << "\n";

  return 0;
}