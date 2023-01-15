#include <iostream>
using namespace std;
float studi(string, int);
float apart(string, int);
main()
{
    string month;
    int stay;
    cout << "enter month[may,june,september,july,august]: ";
    cin >> month;
    cout << "enter no. of stays: ";
    cin >> stay;
    cout << "studio: " << studi(month, stay)<<"$"<<endl;
    cout << "apartment: " << apart(month, stay)<<"$";
}
float studi(string month, int stay)
{
    float studio,a;
    if (month == "may" || month == "october")
    {

        studio = stay * 50;
        if (stay > 7 && stay <= 14)
        {
            a = studio - .05 * studio;
        }
        if (stay > 14)
        {
            a = studio - .30 * studio;
        }
    }
    if (month == "june" || month == "september")
    {
        studio = stay * 75.20;

        if (stay > 14)
        {
            a = studio - .20 * studio;
        }
    }
    if (month == "july" || month == "august")
    {
        studio = stay * 76;
    }
    return a;
}
float apart(string month, int stay)
{
    float apart,b;
    if (month == "may" || month == "october")
    {

        apart=stay*65;
        
        if (stay > 14)
        {
            b = apart - .10 * apart;
        }
    }
    if (month == "june" || month == "september")
    {
        apart = stay * 68.70;

        if (stay > 14)
        {
            b = apart - .10 * apart;
        }
    }
    if (month == "july" || month == "august")
    {
        apart = stay * 77;
        if (stay > 14)
        {
            b = apart - .10 * apart;
        }
    }
    return b;
}

