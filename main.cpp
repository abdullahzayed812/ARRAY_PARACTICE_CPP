#include <iostream>
#include <algorithm>
#include <assert.h>

using namespace std;

int getSecondMax(int arr[], int size);
void swapNumbers(int num1, int num2);
void testGetSecondMax();

void testGetSecondMax()
{
  const int SIZE = 10;
  int arr[SIZE];

  for (int i = 0; i < 1000; i++)
  {
    // Generate random array.
    for (int i = 0; i < SIZE; i++)
    {
      // rand() return random value [0 , RAND_MAX = 32767]
      arr[i] = rand() % 100; // Generate random numbers from 0 to 100.
      // cout << arr[i] << endl;
    }

    int myAnswer = getSecondMax(arr, SIZE);

    sort(arr, arr + SIZE);
    int correctAnswer = arr[SIZE - 2];

    if (myAnswer != correctAnswer)
    {
      cout << "Test Failed\n";
      cout << myAnswer << " " << correctAnswer << "\n";
      return;
    }
  }

  cout << "Test Success\n";
}

void swapNumbers(int num1, int num2)
{
  int temporary = num1;
  num1 = num2;
  num2 = temporary;
  return;
}

int getSecondMax(int arr[], int size)
{
  if (size < 2)
  {
    cout << "Array must be larger than 2 items\n";
    return -1;
  }

  // this crash program if condition is false => exists in assert.h.
  // assert(size < 2);

  int firstMax = arr[0], secondMax = arr[1];

  if (secondMax > firstMax)
  {
    swapNumbers(secondMax, firstMax);
  }

  for (int i = 2; i < size; i++)
  {
    if (arr[i] > firstMax)
    {
      secondMax = firstMax;
      firstMax = arr[i];
    }
    else if (arr[i] > secondMax)
    {
      secondMax = arr[i];
    }
    else
      ;
  }

  return secondMax;
}

int main()
{
  const int SIZE = 10;
  int arr[SIZE];

  testGetSecondMax();

  return 0;
}