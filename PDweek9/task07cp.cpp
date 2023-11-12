#include <iostream>
using namespace std;

void convertPINToDance(string pin);
bool isDigit(char c);
main() {
  string pin;
  cout << "Enter your PIN (4 digits): ";
  cin >> pin;
  convertPINToDance(pin);
  return 0;
}
bool isDigit(char c) 
{
  return c >= '0' && c <= '9';
}
void convertPINToDance(string pin) 
{
  string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
  if(pin.length()!=4)
  {
    cout<<"Invalid input."<<endl;
    return;
  }
  for(int i = 0 ; i < 4 ; i++)
  {
    if(!isDigit (pin[i]))
    {
      cout<<"Invalid input."<<endl;
      return;
    }
  }
string dance_moves;
  for (int i = 0; i < 4; i++) 
  {
    int digit = pin[i] - '0';
    int index = digit + i;
    if (index >= sizeof(MOVES) / sizeof(MOVES[0])) 
    {
      index %= sizeof(MOVES) / sizeof(MOVES[0]);
    }
    if(i<3)
    {dance_moves += MOVES[index] + ", ";}
    else
    {dance_moves += MOVES[index] + " ";}

  }
  cout<<dance_moves;
} 
