#include <iostream>
using namespace std;

#define MAX_SIZE 500

void factorial(int n);
int multiply(int currentIndex, int arr[], int arrSize);

void factorial(int n)
{
  int result[MAX_SIZE];
  result[0] = 1;
  int resultSize = 1;

  for (int i = 2; i <= n; i++)
    resultSize = multiply(i, result, resultSize);

  for (int i = resultSize - 1; i >= 0; i--)
    cout << result[i];

  cout << "\n"
       << resultSize;
}

int multiply(int currentIndex, int arr[], int arrSize)
{
  int carry = 0;

  for (int i = 0; i < arrSize; i++)
  {
    int currentArrItem = arr[i] * currentIndex + carry;

    arr[i] = currentArrItem % 10;

    carry = currentArrItem / 10;
  }

  while (carry)
  {
    arr[currentIndex++] = carry % 10;
    carry = carry / 10;
  }

  return currentIndex;
}

int main()
{
  factorial(20);

  return 0;
}