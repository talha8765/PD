#include<iostream>
using namespace std;

string reverseWords(string sentence);

int main(){
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    string result = reverseWords(sentence);
    cout << "Reversed string: " << result;
}

string reverseWords(string sentence)
{
    string result = "";
    string word = "";
    for (int i = sentence.length() - 1; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {
            result += word + " ";
            word = "";
        }
        else
        {
            word = sentence[i] + word;
        }
    }
    result += word;
    return result;
}