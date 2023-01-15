#include<iostream>
using namespace std;
string play(string,string);


main()
    {
        string temp,hum;
        cout<<"enter temperature condition[warm/cold]: ";
        cin>>temp;
        cout<<"enter weather condition[dry/humid]: ";
        cin>>hum;
        play(temp,hum);
    }
        string play(string temp,string hum)
    
        {
            if(temp=="warm"&&hum=="dry")
            {
                cout<<"play tenis";
            }
            if(temp=="cold"&&hum=="humid")
            {
                cout<<"watch tv";
            }
            if(temp=="warm"&&hum=="humid")
            {
                cout<<"swim";
            }
            if(temp=="cold"&&hum=="dry")
            {
                cout<<"play bascketball";
            }

        }


    