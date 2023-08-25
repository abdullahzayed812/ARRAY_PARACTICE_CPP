#include <iostream>
#include <assert.h>
using namespace std;

short int binarySearch(int arr[], int left, int right, int target)
{
  int middle = left + (right - left) / 2;

  while (left <= right)
  {
    if (arr[middle] == target)
      return middle;

    if (arr[middle] < target)
      left = middle + 1;

    else
      right = middle - 1;
  }

  return -1;
}

int main()
{
  const int SIZE = 5;
  int arr[SIZE] = {1, 12, 28, 40, 50};

  short int result = binarySearch(arr, 0, 4, 2);

  (result != -1) ? cout << "Target is found in index: " << result << "\n" : cout << "Number not found."
                                                                                 << "\n";

  return 0;
}