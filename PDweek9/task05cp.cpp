#include <iostream>
#include <unordered_map>

using namespace std;
int countCommonCharacters(string s1, string s2);
main() {
  string s1;
  cout << "Enter the first string: ";
  cin >> s1;

  string s2;
  cout << "Enter the second string: ";
  cin >> s2;

  int commonCharacterCount = countCommonCharacters(s1, s2);
  cout << "Number of common characters: " << commonCharacterCount << endl;

  return 0;
}

int countCommonCharacters(string s1, string s2) {
  unordered_map<char, int> s1FrequencyMap;
  for (char c : s1) {
    s1FrequencyMap[c]++;
  }
  int commonCharacterCount = 0;
  for (char c : s2) {
    if (s1FrequencyMap.count(c) > 0) {
      
      commonCharacterCount++;

      s1FrequencyMap[c]--;

      if (s1FrequencyMap[c] == 0) {
        s1FrequencyMap.erase(c);
      }
    }
  }
  return commonCharacterCount;
}

