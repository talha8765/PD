#include <iostream>
using namespace std;

string findBrokenKeys(string correctPhrase, string actuallyTyped);
bool duplication(string brokenKeys, char letter);
main() {
  string correctPhrase, actuallyTyped;
  cout << "Enter the correct phrase: ";
  getline(cin,correctPhrase);
  cout << "Enter what you actually typed: ";
  getline(cin,actuallyTyped);
  string brokenKeys = findBrokenKeys(correctPhrase, actuallyTyped);   // Find the broken keys.
  cout<<"Broken keys: "<<brokenKeys;
  return 0;
}

string findBrokenKeys(string correctPhrase, string actuallyTyped) {
  string brokenKeys="";
  for (int i = 0; i < correctPhrase.length(); i++)
  {
    if(correctPhrase[i]!=actuallyTyped[i])
    {
      if(!duplication(brokenKeys,correctPhrase[i]))
      {
      brokenKeys+=correctPhrase[i];
      }
    }
  }
  return brokenKeys;
}
bool duplication(string brokenKeys , char letter) 
{
  int comp = brokenKeys.length();
  for(int i = 0 ; i < comp ; i++)
  {
    if(brokenKeys[i]==letter)
    {
      return true;
    }
  }
  return false;
}

