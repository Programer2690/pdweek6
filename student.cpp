#include <iostream>
using namespace std;
float time(int, int, int, int);
main()
{
    int shour, smin, ahour, amin;
    cout << "exam starting time (hours):";
    cin >> shour;
    cout << "exam starting time (minutes):";
    cin >> smin;
    cout << "hour of arrival: ";
    cin >> ahour;
    cout << "minutes of arrival: ";
    cin >> amin;
    time(shour, smin, ahour, amin);
}
float time(int shour, int smin, int ahour, int amin)
{
    float stm, atm, l, m, e;
    int h;
    stm = (shour * 60) + smin;
    atm = (ahour * 60) + amin;
    e = stm - atm;
    if (atm > stm)
    {

        l = (atm - stm) / 60;
        h = l;
        if (l >= 1.0)
        {
            m = (l - h) * 60;

            cout << "Late!" << endl
                 << h << "hours" << m << "minutes after exam";
        }
        if (l < 1.0)
        {
            m = (l - h) * 60;
            cout << "Late!" << endl
                 << m << "minutes after exam";
        }
    }
    if (e > 0 && e <= 30)
    {
        cout << "on time" << endl
             << e << "minutes before start";
    }
    if (e == 0)
    {
        cout << "on time";
    }
    if (e > 30)
    {

        l = e / 60;
        h = l;
        if (l >= 1.0)
        {
            m = (l - h) * 60;

            cout << "early!" << endl
                 << h << "hours" << m << "minutes before exam";
        }
        if (l < 1.0)
        {
            m = (l - h) * 60;
            cout << "early!" << endl
                 << m << "minutes before exam";
        }
    }
}