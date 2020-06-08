#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string first_name, last_name;
public:
    string getFullname();
    string getCountry(int);
};

string Person::getFullname()
{
    return first_name + " " + last_name;
}

string Person::getCountry(int n)
{
    if (n == 1)
        return "Thailand";
    else if (n == 2)
        return "France";
    else if (n == 3)
        return "Korea";
    else if (n == 4)
        return "England";
    else if (n == 5)
        return "USA";
    else if (n == 6)
        return "Spain";
    else 
        return "Unknown country";
}

int main()
{
    Person p1;
    p1.first_name = "Korrakot";
    p1.last_name = "Triwichein";

    Person p2;
    p2.first_name = "Nam Joo";
    p2.last_name = "Hyuk";

    Person p3;
    p3.first_name = "Obiwan";
    p3.last_name = "Knight";

    Person p4;
    p4.first_name = "Newt";
    p4.last_name = "Salamander";

    Person p5;
    p5.first_name = "Harry";
    p5.last_name = "Potter";

    Person p6;
    p6.first_name = "Her";
    p6.last_name = "Miony";

    Person p7;
    p7.first_name = "Lord";
    p7.last_name = "Vodomort";

    Person p8;
    p8.first_name = "David";
    p8.last_name = "De gea";

    Person p9;
    p9.first_name = "Naruto";
    p9.last_name = "Shippuden";

    Person p10;
    p10.first_name = "Barack";
    p10.last_name = " Obama";

    cout << "=========================================" << endl;
    cout << p1.getFullname() << " is in " << p1.getCountry(1) << endl;
    cout << p2.getFullname() << " is in " << p2.getCountry(3) << endl;
    cout << p3.getFullname() << " is in " << p3.getCountry(5) << endl;
    cout << p4.getFullname() << " is in " << p4.getCountry(4) << endl;
    cout << p5.getFullname() << " is in " << p5.getCountry(4) << endl;
    cout << p6.getFullname() << " is in " << p6.getCountry(4) << endl;
    cout << p7.getFullname() << " is in " << p7.getCountry(10) << endl;
    cout << p8.getFullname() << " is in " << p8.getCountry(6) << endl;
    cout << p9.getFullname() << " is in " << p9.getCountry(13) << endl;
    cout << p10.getFullname()<< " is in " << p10.getCountry(5) << endl;
    cout << "=========================================" << endl;

    return 0;
}