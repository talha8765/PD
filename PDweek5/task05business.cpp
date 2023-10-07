/*Creating a cloth management system that view four products in the store to the user, each product has its own specifications (e.g Cloth ID ,Brand )
. User can buy product whatever he likes by typing those specifications and automatically his bill will be generated and displayed in tabular form */
#include<iostream>
using namespace std;

void Header();
void viewing(int choice);
void buying();
main(){
    Header();
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    if (choice==1){
        viewing(choice);
    }
    if(choice==2){
        buying();
    }

}
void Header()
{
    cout<<"*******************************************************************************"<<endl;            
    cout<<"*                                                                             *"<<endl;
    cout<<"*                    CLOTHING    MANAGEMENT    SYSTEM                         *"<<endl;
    cout<<"*                          1. View Products                                   *"<<endl;
    cout<<"*                          2. Buy Products                                    *"<<endl;
    cout<<"*                                                                             *"<<endl;
    cout<<"*******************************************************************************"<<endl;
}
void viewing(int choice)
{
         cout<<"Hello! We have Following four available items in our store.";
         cout<<endl;

        
            cout<<"             RECORD FOUND            "<<endl;
            cout<<"ITEM'S NAME                     Jeans"<<endl;
            cout<<"ITEM'S BRAND                    Gucci"<<endl;
            cout<<"ITEM'S COST                     $2000"<<endl;
            cout<<"ITEM'S ID                         2  "<<endl; 
            cout<<"ITEM'S AVAILABILITY               4  "<<endl;;
            cout<<endl;
        
       
            cout<<"              RECORD FOUND             "<<endl;
            cout<<"ITEM'S NAME                      Shorts"<<endl;
            cout<<"ITEM'S BRAND                      Zara "<<endl;
            cout<<"ITEM'S COST                       $988 "<<endl;
            cout<<"ITEM'S ID                           6  "<<endl;; 
            cout<<"ITEM'S AVAILABILITY                 2  "<<endl;;
            cout<<endl;
        
            cout<<"              RECORD FOUND             "<<endl;
            cout<<"ITEM'S NAME                      Jacket"<<endl;
            cout<<"ITEM'S BRAND                      Levis"<<endl;
            cout<<"ITEM'S COST                       $1600"<<endl;
            cout<<"ITEM'S ID                           9  "<<endl; 
            cout<<"ITEM'S AVAILABILITY                 9  "<<endl;
            cout<<endl;
       
            cout<<"              RECORD FOUND              "<<endl;
            cout<<"ITEM'S NAME                      Tshirts"<<endl;
            cout<<"ITEM'S BRAND                      Prada "<<endl;
            cout<<"ITEM'S COST                       $1120 "<<endl;
            cout<<"ITEM'S ID                           14  "<<endl; 
            cout<<"ITEM'S AVAILABILITY                 8   "<<endl;
            cout<<endl;
        
}
void buying()
{
    string name;
    cout<<"Enter name of the item you want to buy: ";
    cin>>name;
    int ID;
    cout<<"Enter the ID Code of your item: ";
    cin>>ID;
    string brand;
    cout<<"Enter the brand of your item: ";
    cin>>brand;
    int quantity;
    cout<<"Enter the quantity of the item: ";
    cin>>quantity;
    int bill;
    if(quantity<=4 && name=="Jeans" && ID==2 && brand=="Gucci"){
         bill=2000*quantity;
        cout<<"Your Total Bill is: $"<<bill<<endl;
        cout<<" ITEM NAME      ITEM ID        ITEM BRAND        ITEM QUANTITY      TOTAL BILL"<<endl;
        cout<<"   "<<name<<"            "<<ID<<"             "<<brand<<"               "<<quantity<<"               $"<<  bill     ;

    }
    else if(quantity<=2 && name=="Shorts" && ID==6 && brand=="Zara"){
        bill=988*quantity;
        cout<<"Your Total Bill is: $"<<bill<<endl;
        cout<<" ITEM NAME      ITEM ID        ITEM BRAND        ITEM QUANTITY      TOTAL BILL"<<endl;
        cout<<"   "<<name<<"            "<<ID<<"             "<<brand<<"               "<<quantity<<"               $"<<  bill     ;

    
    }
    else if(quantity<=9 && name=="Jacket" && ID==9 && brand=="Levis"){
        bill=1600*quantity;
        cout<<"Your Total Bill is: $"<<bill<<endl;
        cout<<" ITEM NAME      ITEM ID        ITEM BRAND        ITEM QUANTITY      TOTAL BILL"<<endl;
        cout<<"   "<<name<<"            "<<ID<<"             "<<brand<<"               "<<quantity<<"               $"<<  bill     ;


    }
    else if(quantity<=8 && name=="Tshirts" && ID==14 && brand=="Prada"){
        bill=1120*quantity;
        cout<<"Your Total Bill is: $"<<bill<<endl;
        cout<<" ITEM NAME      ITEM ID        ITEM BRAND        ITEM QUANTITY      TOTAL BILL"<<endl;
        cout<<"   "<<name<<"         "<<ID<<"          "<<brand<<"                 "<<quantity<<"                $"<<  bill     ;

    }
    else{
        cout<<"The data provided is incorrect!"<<endl;
    }

    
   
}


