#include <iostream>
using namespace std;
string grad(string, float, float, float, float, float);

main()
{
    string name,result;
    float eng, math, chem, ss, bio;
    cout << "enter student name: ";
    cin >> name;
    cout << "english marks: ";
    cin >> eng;
    cout << "maths marks: ";
    cin >> math;
    cout << "chemistry marks: ";
    cin >> chem;
    cout << "social sciences marks: ";
    cin >> ss;
    cout << "biology marks: ";
    cin >> bio;
    cout << "student name: " << name << endl;
    result = grad(name, eng, math, chem, ss, bio);
}
string grad(string name, float eng, float math, float chem, float ss, float bio)
{
    float num = eng + math + chem + ss + bio;
    string grade;
    cout << " marks are " << num << endl;
    float per = (num / 500) * 100;
    cout << "percentage is " << per << endl;
    if (per >= 50 && per <= 59)
    {
        grade = "C";
    }
    if (per >= 60 && per <= 69)
    {
        grade = "B";
    }
    if (per >= 70 && per <= 79)
    {
        grade = "B+";
    }
    if (per >= 80 && per <= 89)
    {
        grade = "A";
    }
    if (per >= 90 && per <= 100)
    {
        grade = "A+";
    }
    if (per >= 40 && per <= 49)
    {
        grade = "D";
    }
    if (per < 40)
    {
        grade = "F";
    }
    return grade;
}