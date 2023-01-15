#include <iostream>
using namespace std;
char rcall(int, char, char);
char pcall(int, char, char);
main()
{
    float num, result;
    char catagory, time;
    cout << "enter type of customer[regular/premium]: ";
    cin >> catagory;
    if (catagory == 'r' || catagory == 'R')
    {
        float c;
        cout << "enter no. of mins you used the service: ";
        cin >> num;
        result = rcall(num, catagory, time);
        cout << "charges are: " << result;
    }

    if (catagory == 'p' || catagory == 'P')
    {

        cout << "[press d for day and n for night]call:";
        cin >> time;

        result = pcall(num, catagory, time);
        cout << "enter no. of mins you used the service: ";
        cin >> num;
        cout << "charges are: " << result;
    }
}
char rcall(int num, char catagory, char time)
{
    float c;

    if (num <= 50)
    {
        c = 10;
    }
    if (num > 50)
    {
        c = ((num - 50) * 0.20) + 10;
    }

    return c;
    if (catagory != 'r' || catagory != 'R')
    {
        cout << "error";
    }
}

char pcall(int num, char catagory, char time)
{

    float c;
    if (time == 'd' || time == 'D')
    {

        if (num <= 75)
        {
            c = 25;
        }
        if (num > 75)
        {
            c = ((num - 75) * 0.10) + 25;
        }
        return c;
    }

    if (time == 'n' || time == 'N')
    {
        if (num <= 100)
        {
            c = 25;
        }
        if (num > 100)
        {
            c = ((num - 100) * 0.05) + 25;
        }
        return c;
    }

    if (time != 'n' || time != 'd' || time != 'N' || time != 'D')
    {
        cout << "error";
    }

    if (catagory != 'p' || catagory != 'P')
    {
        cout << "error";
    }
}
