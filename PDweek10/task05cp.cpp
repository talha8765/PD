#include<iostream>
using namespace std;

void ascending(int num, int weight[]);
main(){
    int num=10;
    int weight[num];
    cout<<"Enter the weights of the "<<num<<" packages:"<<endl;
    for(int i = 0 ; i < num ; i++)
    {
        cin>>weight[i];
    }
    ascending(num,weight);
}
void ascending(int num, int weight[])
{
for(int i = 0; i < num ; i++)
{
    for(int u = 0 ; u < num-1 ; u++)
    {
    if(weight[u]>weight[u+1])
    {
        int exchange = weight[u];
        weight[u] = weight[u+1];
        weight[u+1]  =exchange;
    }
    }
}
cout<<"Sorted array in ascending order: [";
    for(int x = 0 ; x < num ; x++)
    {
     cout<<weight[x];
        if(x<num-1)
        {
            cout<<", ";
        }
    }
    cout<<"]";
}
