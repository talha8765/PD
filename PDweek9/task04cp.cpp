#include <iostream>
using namespace std;

void evenOddTransform(int arr[], int size, int n); 
main() {
  int size;
  cout << "Enter the size of Array: ";
  cin >> size;

  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout<<"Enter Element "<<i+1<<": ";
    cin >> arr[i];
  }
  int n;
  cout << "Enter number of times even-odd transformation need to be done: ";
  cin >> n;
  evenOddTransform(arr, size, n);
  cout<<"["<<arr[0]<<", ";
  cout<<arr[1];
  cout << ", ";
  cout <<arr[2]<< "]"<<endl;

  return 0;
}
void evenOddTransform(int arr[], int size, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < size; j++) {
      if (arr[j] % 2 == 0)
      {
        arr[j] -= 2;
      }
      else
      {
        arr[j] += 2;
      }
    }
  }
}

