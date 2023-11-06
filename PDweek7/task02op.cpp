#include<iostream>
using namespace std;

void upperpart(int desired);
void lowerpart(int desired);

main(){
    int desired;
    cout<<"Enter desired number of rows: ";
    cin>>desired;
    upperpart(desired);
    lowerpart(desired);
   
}
void upperpart(int desired)
{
    desired=desired/2;
    for(int row = 0; row<=desired ; row++){
        for(int col = (desired-row)-1 ; col>=0 ; col--){
            cout<<" ";
        }
        for(int col2 = (desired-row) ;col2<=desired ; col2++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void lowerpart(int desired)
{
    desired=desired/2;
    for(int row = 1 ; row<=desired-1; row++){
        for(int col = 1 ; col <= row ; col++){
            cout<<" ";
        }
        
        for(int col2=desired-row ; col2>=1 ; col2--){
            cout<<"*";
        }
        
        cout<<endl;
        }

}

