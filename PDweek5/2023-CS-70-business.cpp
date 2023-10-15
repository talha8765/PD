/*Creating a cloth management system that view four products in the store to the user, each product has its own specifications (e.g Cloth ID ,Brand )
. User can buy product whatever he likes by typing those specifications and automatically his bill will be generated and displayed in tabular form */
#include<iostream>
#include<conio.h>
using namespace std;

void Header();
void viewing(int choice,int quantity);
void buying(int choice);
main(){
    Header();
    int choice;
    int quantity;
while(true)
   {
    cout<<"Enter your choice: ";
    cin>>choice;
    if (choice==1){
        viewing(choice,quantity);
	    getch();
    }
    if(choice==2){
        buying(choice);
    }
    }
    
}


void Header()
{
    cout<<"*******************************************************************************"<<endl;            
    cout<<"*                                                                             *"<<endl;
    cout<<"*                    CLOTHING    MANAGEMENT    SYSTEM                         *"<<endl;
    cout<<"*                          1. View Products                                   *"<<endl;
    cout<<"*                          2. Buy Products                                    *"<<endl;
    cout<<"*                          3. Update Products                                 *"<<endl;
    cout<<"*                          4. Delete Products                                 *"<<endl;
    cout<<"*                                                                             *"<<endl;
    cout<<"*******************************************************************************"<<endl;
    cout<<endl;
    cout<<"Hello! We have Following four available items in our store."<<endl;
    cout<<"      -> Jeans"<<endl;
    cout<<"      -> Jacket"<<endl;
    cout<<"      -> Shorts"<<endl;
    cout<<"      -> TShirts"<<endl;
    cout<<endl;
        
}
void viewing(int choice,int quantity)
{
        string item;
        cout<<"Enter name of the item you want to add: ";
        cin>>item;
        int buy;
        if(item=="Jeans")
           {
            cout<<"             RECORD FOUND            "<<endl;
            cout<<"ITEM'S NAME                   "<<item<<endl;
            cout<<"ITEM'S BRAND                    Gucci"<<endl;
            cout<<"ITEM'S COST                     $2000"<<endl;
            cout<<"ITEM'S ID                         2  "<<endl; 
            cout<<"ITEM'S AVAILABILITY                 4"<<endl;
           if(buy==3 || buy==2 || buy==1)
           {buy=4-buy;
           cout<<"ITEM'S AVAILABILITY          "<<buy<<endl;}

        

            }
            cout<<endl;
        if(item=="Shorts")
           {quantity=2;
            cout<<"              RECORD FOUND             "<<endl;
            cout<<"ITEM'S NAME                    "<<item<<endl;
            cout<<"ITEM'S BRAND                      Zara "<<endl;
            cout<<"ITEM'S COST                       $988 "<<endl;
            cout<<"ITEM'S ID                           6  "<<endl; 
            cout<<"ITEM'S AVAILABILITY             "<<quantity<<endl;
            }
            cout<<endl;
        if(item=="Jacket")
          {quantity=9;
            cout<<"              RECORD FOUND             "<<endl;
             cout<<"ITEM'S NAME                    "<<item<<endl;
            cout<<"ITEM'S BRAND                      Levis"<<endl;
            cout<<"ITEM'S COST                       $1600"<<endl;
            cout<<"ITEM'S ID                           9  "<<endl; 
            cout<<"ITEM'S AVAILABILITY              "<<quantity<<endl;
            }
            cout<<endl;
        if(item=="TShirts")
           {quantity=9;
            cout<<"              RECORD FOUND              "<<endl;
            cout<<"ITEM'S NAME                      Tshirts"<<endl;
            cout<<"ITEM'S BRAND                      Prada "<<endl;
            cout<<"ITEM'S COST                       $1120 "<<endl;
            cout<<"ITEM'S ID                           14  "<<endl; 
            cout<<"ITEM'S AVAILABILITY              "<<quantity<<endl;
            }
            cout<<endl;
        
}
void buying(int choice)
{
    string name;
    cout<<"Enter name of the item you want to buy: ";
    cin>>name;
    if(name=="Jeans")
    {
        cout<<"The ID Code of your item is: 2"<<endl;
        cout<<"The Brand of your item is: Gucci"<<endl;
    }
    if(name=="Shorts")
    {
        cout<<"The ID Code of your item is: 6"<<endl;
        cout<<"The Brand of your item is: Zara"<<endl;
    }
    if(name=="Jacket")
    {
        cout<<"The ID Code of your item is: 9"<<endl;
        cout<<"The Brand of your item: Levis"<<endl;
    }
    if(name=="TShirts")
    {
        cout<<"The ID Code of your item is: 14"<<endl;
        cout<<"The Brand of your item is: Prada"<<endl;
    }
    int buy;
    cout<<"Enter the quantity of the item: ";
    cin>>buy;
    int bill;
    if(name=="Jeans"){
        bill=2000*buy;
        cout<<"Your Total Bill is: $"<<bill<<endl;
        cout<<" ITEM NAME      ITEM ID        ITEM BRAND        ITEM QUANTITY      TOTAL BILL"<<endl;
        cout<<"   "<<name<<"        2 "<<"        Gucci "<<"               "<<buy<<"               $"<<  bill     <<endl;
        

    }
    else if(name=="Shorts"){
        bill=988*buy;
        cout<<"Your Total Bill is: $"<<bill<<endl;
        cout<<" ITEM NAME      ITEM ID        ITEM BRAND        ITEM QUANTITY      TOTAL BILL"<<endl;
        cout<<"   "<<name<<"     6 "<<"         Zara "<<"               "<<buy<<"               $"<<  bill     <<endl;
       
    
    }
    else if(name=="Jacket"){
        bill=1600*buy;
        cout<<"Your Total Bill is: $"<<bill<<endl;
        cout<<" ITEM NAME      ITEM ID        ITEM BRAND        ITEM QUANTITY      TOTAL BILL"<<endl;
        cout<<"   "<<name<<"     9       "<<"     Levis        "<<"               "<<buy<<"               $"<<  bill     <<endl;
        

    }
    else if(name=="Tshirts"){
        bill=1120*buy;
        cout<<"Your Total Bill is: $"<<bill<<endl;
        cout<<" ITEM NAME      ITEM ID        ITEM BRAND        ITEM QUANTITY      TOTAL BILL"<<endl;
        cout<<"   "<<name<<"      14   "<<"      Prada    "<<"                 "<<buy<<"                $"<<  bill    <<endl;
        
    }
   

    
   
}


