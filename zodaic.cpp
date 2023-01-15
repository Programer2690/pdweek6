#include<iostream>
using namespace std;
void zodaic(int  day,string month);


main()
{ 
    string month,result;
    int day;
    cout<<"enter day: ";
    cin>>day;
    cout<<"Enter month: ";
    cin>>month;
    zodaic(day,month);
    

}
void zodaic(int day,string month)
{
    if((month=="march")&&(day>=21||day<=31))
    {
        cout<<"Aries";
    }
    else if(month=="april"&&(day>=1||day<=19))
    {
        cout<<"Aries";
    }
    else if(month=="april"&&(day>=20||day<=30))
    {
        cout<<"Taurus";
    }
    else if(month=="may"&&(day>=1||day<=20))
    {
        cout<<"Taurus";
    }
    else if(month=="may"&&(day>=21||day<=31))
    {
        cout<<"Gemini";
    }
    else if(month=="june"&&(day>=1||day<=20))
    {
        cout<<"Gemini";
    }
    else if(month=="june"&&(day>=21||day<=30))
    {
        cout<<"Cancer";
    }
    else if(month=="july"&&(day>=1||day<=22))
    {
        cout<<"Cancer";
    }
    else if(month=="july"&&(day>=23||day<=31))
    {
        cout<<"Leo";
    }
    else if(month=="august"&&(day>=1||day<=22))
    {
        cout<<"Leo";
    }
    else if(month=="august"&&(day>=23||day<=30))
    {
        cout<<"virgo";
    }
    else if(month=="september"&&(day>=1||day<=22))
    {
        cout<<"virgo";
    }
    else if(month=="september"&&(day>=23||day<=31))
    {
        cout<<"Libra";
    }
    else if(month=="october"&&(day>=1||day<=22))
    {
        cout<<"Libra";
    }
    else if(month=="october"&&(day>=23||day<=30))
    {
        cout<<"Scorpio";
    }
    else if(month=="november"&&(day>=1||day<=21))
    {
        cout<<"Scorpio";
    }
    else if(month=="november"&&(day>=22||day<=31))
    {
        cout<<"Sagittarius";
    }
    else if(month=="december"&&(day>=1||day<=21))
    {
        cout<<"Sagitterius";
    }
    else if(month=="december"&&(day>=22||day<=31))
    {
        cout<<"Capricon";
    }
    else if(month=="january"&&(day>=1||day<=19))
    {
        cout<<"Capricon";
    }
    else  if(month=="january"&&(day>=20||day<=31))
    {
        cout<<"Aquarius";
    }
    else if(month=="february"&&(day>=1||day<=18))
    {
        cout<<"Aquarius";
    }
    else  if(month=="february"&&(day>=19||day<=28))
    {
        cout<<"Piscis";
    }
    else if(month=="march"&&(day>=1||day<=20))
    {
        cout<<"Piscis";
    }
}