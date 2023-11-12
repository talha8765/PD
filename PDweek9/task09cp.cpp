#include <iostream>
using namespace std;

string longestWord(int size, string words[]);
main(){
    int size;
    cout<<"Enter the number of words: ";
    cin>>size;
    string words[size];
    cout<<"Enter the words, one by one:"<<endl;
    for(int i = 0 ; i < size ; i=i+1)
    {
      cin>>words[i];
    }
    string result = longestWord(size,words);
    cout<<"Longest 7-segment word: "<<result;
}
string longestWord(int size, string words[])
{
  string biggest[size];
  int m = 0;
  for(int x = 0 ; x < size ; x++)
  {
  int lenght=words[x].length();
    for(int y = 0 ; y < lenght ; y++)
    {
        if(words[x][y]=='k'||words[x][y]=='m'||words[x][y]=='v'
        ||words[x][y]=='w'||words[x][y]=='x')
        {
          break;
        }
        if(y==lenght-1)
        {
          biggest[m]=words[x];
          m=m+1;
        }
    }
  }
  int biggestIndex = 0 ;
  for(int z = 1 ; z < m ; z++ )
  {
    if(biggest[z].length()>biggest[biggestIndex].length())
    {
      biggestIndex=z;
    }
  }
 return biggest[biggestIndex];
}
