#include<iostream>
#include<string>
using namespace std;

void letterCount(int number,string word,char letter);
int result=0;
main(){
    int number;
    cout<<"Enter how many words you want to enter: ";
    cin>>number;
    string word[number];
    for(int i = 0 ; i < number ; i++)
    {
        cout<<"Enter word "<<i+1<<": ";
        cin>>word[i];
    }
    char letter;
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
    for(int i = 0 ; i<number ; i++)
    {
    letterCount(number,word[i],letter);}
    cout<<letter<<" shows up "<<result<<" times in the data.";
}
void letterCount(int number,string word,char letter)
{
    for(int idx = 0 ; idx < word.length() ; idx++)
    {
        if(word[idx] == letter)
        {
            result++;
        }
    }

}
