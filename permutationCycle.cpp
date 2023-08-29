#include <iostream>
using namespace std;

void permutationCycle(int arr[], int arrSize)
{
  short found[arrSize] = {0};
  short maxIndex = 0;

  for (int i = 0; i < arrSize; i++)
  {
    cout << i << " => " << arr[i] << "\n";
    found[i] = 1;

    if (i > maxIndex)
      maxIndex = i;

    if (found[i] == 1)
    {
      i = maxIndex - 1;
      continue;
    }
    else
      i = arr[i] - 1;
  }
}

int main()
{
  const int size = 6;
  int arr[size] = {2, 0, 1, 4, 3, 5};
  // 0, 1, 2, 3, 4, 5

  permutationCycle(arr, size);

  return 0;
}