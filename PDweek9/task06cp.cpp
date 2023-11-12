#include <iostream>
using namespace std;

int coloringTime(string cols[], int size);
main() {
  int size;
  cout << "Enter the size of Array: ";
  cin >> size;
  string cols[size];
  for (int i = 0 ; i < size; i++) 
  {
    cout<<"Enter Element "<<i+1<<": ";
    cin >> cols[i];
  }
  int Time = coloringTime(cols, size);
  cout << "Time to color: " << Time << " seconds" << endl;

  return 0;
}
int coloringTime(string cols[], int size) {
  if(size<=0)
  {return 0;}
  if(size==1)
  {return 2;}
  int totalTime = 0;
  string currentColor = cols[0];
  for (int i = 1; i < size; i++)
  {
    if (currentColor != cols[i])
    {
      totalTime++;
      currentColor = cols[i];
    }
    totalTime += 2;
  }
  return (totalTime+2);
}


