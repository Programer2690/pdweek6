#include<iostream>
using namespace std;
string coord(int,int,int);
main()
{
    int h,xcoord,ycoord;
    cout<<"enter height: ";
    cin>>h;
    cout<<"x coordinate: ";
    cin>>xcoord;
    cout<<"y coordinate: ";
    cin>>ycoord;
    coord(h,xcoord,ycoord);
}
string coord(int h,int xcoord, int ycoord)
{
    if((xcoord<3*h&&ycoord<h)||(xcoord<2*h&&xcoord>h&&ycoord<4*h))
    {
        cout<<"inside";
    }
    else if((xcoord==h||xcoord==2*h||xcoord==3*h)&&(ycoord==0*h||ycoord==h||ycoord==4*h||ycoord==h*2||ycoord==3*h))
    {
        cout<<"border";
    }
    else
    {
        cout<<"outside";
    }

}