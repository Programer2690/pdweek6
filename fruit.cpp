#include<iostream>
using namespace std;
float price(string,string,float);
main()
{
    string fruit,day;
    float quantity,b;
    cout<<"enter fruit you want: ";
    cin>>fruit;
    cout<<"enter day: ";
    cin>>day;
    cout<<"enter quantity: ";
    cin>>quantity;
    b=price(fruit,day,quantity);
    cout<<"amount= "<<b;

}
float price(string fruit,string day,float quantity)
{
    float a;
    if(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"||day=="friday")
    {
        if(fruit=="banana")
        {
            a=quantity*2.50;
        }
        else if(fruit=="apple")
        {
            a=quantity*1.20;
        }
        else if(fruit=="orange")
        {
            a=quantity*0.85;
        }
        else if(fruit=="grapefruit")
        {
            a=quantity*1.45;
        }
         else if(fruit=="kiwi")
        {
            a=quantity*2.70;
        }
         else if(fruit=="pineapple")
        {
            a=quantity*5.50;
        }
        else if(fruit=="grapes")
        {
            a=quantity*3.85;
        }
        else
        {
            cout<<"error invalid fruit";
        }
        return a;
    }
    else if(day=="saturday"||day=="sunday")
    {
        if(fruit=="banana")
        {
            a=quantity*2.70;
        }
        else if(fruit=="apple")
        {
            a=quantity*1.25;
        }
        else if(fruit=="orange")
        {
            a=quantity*0.90;
        }
        else if(fruit=="grapefruit")
        {
            a=quantity*1.60;
        }
         else if(fruit=="kiwi")
        {
            a=quantity*3.0;
        }
         else if(fruit=="pineapple")
        {
            a=quantity*5.60;
        }
        else if(fruit=="grapes")
        {
            a=quantity*4.20;
        }
        else
        {
            cout<<"error invalid fruit";
        }
        return a;
    }
    else
    {
        cout<<"error invalid day";
    }
}