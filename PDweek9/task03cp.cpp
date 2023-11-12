#include <iostream>

using namespace std;


bool areAllElementsIdentical(string array[], int size); 
main() {
  int size;
  cout << "Enter the size of Array: ";
  cin >> size;

  string array[size];
  for (int i = 0 ; i < size ; i++)
  {
    cout<<"Enter Element "<<i+1<<": ";
    cin >> array[i];
  }
  bool isIdentical = areAllElementsIdentical(array, size);
  if (isIdentical) {
    cout << "1" << endl;
  } else {
    cout << "0" << endl;
  }
}
bool areAllElementsIdentical(string array[], int size) {
  for (int i = 1; i < size; i++) {
    if (array[i] != array[0]) {
      return false;
    }
  }
  return true;
}