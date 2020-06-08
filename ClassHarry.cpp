#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class HarryCharacter{
private:
    string nameHome;
    string nameProfessor;
    string nameRoommate;
    string firstnameCharacter;
    string lastnameCharacter;

public:
    HarryCharacter(string nameHome, string nameProfessor, string nameRoommate,string firstnameCharacter,string lastnameCharacter){
        this->nameHome = nameHome;
        this->nameProfessor = nameProfessor;
        this->nameRoommate = nameRoommate;
        this->firstnameCharacter = firstnameCharacter;
        this->lastnameCharacter = lastnameCharacter;
    }

    string getNameHome(){
        return nameHome;
    }
    string getNameProfessor(){
        return nameProfessor;
    }
    string getNameRoommate(){
        return nameRoommate;
    }
    string getFullnameCharacter(){
        return firstnameCharacter+" "+lastnameCharacter;
    }
};
int main() {
    string firstname,lastname;
    int age;
    int choice;

    HarryCharacter* harry[10];
    cout << "Enter your fristname: ";
    cin >> firstname;
    cout << "Enter your lastname: ";
    cin >> lastname;
    harry[0] = new HarryCharacter("Giffin Dorr","","",firstname,lastname);
    harry[1] = new HarryCharacter("Huffle Puff","","",firstname,lastname);
    harry[2] = new HarryCharacter("Ravenclaw","","",firstname,lastname);
    harry[3] = new HarryCharacter("Slytherin","","",firstname,lastname);
    cout << "============================"<<endl;
    cout << "||Select 1 || Giffin Dorr ||"<<endl;
    cout << "||Select 2 || Huffle Puff ||"<<endl;
    cout << "||Select 3 || Ravenclaw   ||"<<endl;
    cout << "||Select 4 || Slytherin   ||"<<endl;
    cout << "============================"<<endl;
    cout << "Select your home for Hogwats School: ";
    cin >> choice;
    switch(choice)
    {
    case 1:
        cout << "Welcome to Giffin Dorr Home" << endl;
        HarryCharacter* giffin[10];
        giffin[0] = new HarryCharacter("Albus Dumbledore","","",firstname,lastname);
        giffin[1] = new HarryCharacter("Minneapolis's McGonagall","","",firstname,lastname);
        giffin[2] = new HarryCharacter("Goddard Griffindor","","",firstname,lastname);
        cout << "========================================="<<endl;
        cout << "||Select 1 || Albus Dumbledore         ||"<<endl;
        cout << "||Select 2 || Minneapolis's McGonagall ||"<<endl;
        cout << "||Select 3 || Goddard Griffindor       ||"<<endl;
        cout << "========================================="<<endl;
        cout << "Select your professor for Griffin Dorr: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout <<"==========================="<< endl;
                cout <<"Name: " << giffin[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Albus Dumbledore"<< endl;
                cout <<"Home: Giffin Dorr          "<< endl;
                cout <<"     **Is My Professor**   "<< endl;
                cout <<"==========================="<< endl;
                break;
            case 2:
                cout <<"==================================="<< endl;
                cout <<"Name: " << giffin[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Minneapolis's McGonagall"<< endl;
                cout <<"Home: Giffin Dorr                  "<< endl;
                cout <<"        **Is My Professor**        "<< endl;
                cout <<"==================================="<< endl;
                break;
            case 3:
                cout <<"==================================="<< endl;
                cout <<"Name: " << giffin[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Goddard Griffindor      "<< endl;
                cout <<"Home: Giffin Dorr                  "<< endl;
                cout <<"         **Is My Professor**       "<< endl;
                cout <<"==================================="<< endl;
            default:
                cout <<"----------HOGWARTS SCHOOL-----------"<<endl;
                break;
        }
        break;
    case 2:
        cout << "Welcome to Huffle Puff Home"<< endl;
        HarryCharacter* huffle[10];
        huffle[0] = new HarryCharacter("Pomona Sprout","","",firstname,lastname);
        huffle[1] = new HarryCharacter("Newt Scamander","","",firstname,lastname);
        huffle[2] = new HarryCharacter("Theseus Scamander","","",firstname,lastname);
        cout << "=================================="<<endl;
        cout << "||Select 1 || Pomona Sprout     ||"<<endl;
        cout << "||Select 2 || Newt Scamander    ||"<<endl;
        cout << "||Select 3 || Theseus Scamander ||"<<endl;
        cout << "=================================="<<endl;
        cout << "Select your professor for Huffle Puff: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout <<"==========================="<< endl;
                cout <<"Name: " <<huffle[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Pomona Sprout   "<< endl;
                cout <<"Home:  Huffle Puff         "<< endl;
                cout <<"     **Is My Professor**   "<< endl;
                cout <<"==========================="<< endl;
                break;
            case 2:
                cout <<"==================================="<< endl;
                cout <<"Name: " <<huffle[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Newt Scamander          "<< endl;
                cout <<"Home:  Huffle Puff                 "<< endl;
                cout <<"        **Is My Professor**        "<< endl;
                cout <<"==================================="<< endl;
                break;
            case 3:
                cout <<"==================================="<< endl;
                cout <<"Name: " <<huffle[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Theseus Scamander       "<< endl;
                cout <<"Home:  Huffle Puff                 "<< endl;
                cout <<"         **Is My Professor**       "<< endl;
                cout <<"==================================="<< endl;
            default:
                cout <<"----------HOGWARTS SCHOOL-----------"<<endl;
                break;
        }
        break;
    case 3:
         cout << "Welcome to Ravenclaw Home"<< endl;
         HarryCharacter* raven[10];
         raven[0] = new HarryCharacter("Filius Flitwig","","",firstname,lastname);
         raven[1] = new HarryCharacter("Dolores Umbridge","","",firstname,lastname);
         raven[2] = new HarryCharacter("Rowena Ravenclaw","","",firstname,lastname);
         cout << "================================="<<endl;
         cout << "||Select 1 || Filius Flitwig   ||"<<endl;
         cout << "||Select 2 || Dolores Umbridge ||"<<endl;
         cout << "||Select 3 || Rowena Ravenclaw ||"<<endl;
         cout << "================================="<<endl;
         cout << "Select your professor for Ravenclaw: ";
         cin >> choice;
         switch(choice)
         {
            case 1:
                cout <<"==========================="<< endl;
                cout <<"Name: " <<raven[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Filius Flitwig  "<< endl;
                cout <<"Home:  Ravenclaw           "<< endl;
                cout <<"     **Is My Professor**   "<< endl;
                cout <<"==========================="<< endl;
                break;
            case 2:
                cout <<"==================================="<< endl;
                cout <<"Name: " <<raven[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Dolores Umbridge        "<< endl;
                cout <<"Home:  Ravenclaw                   "<< endl;
                cout <<"        **Is My Professor**        "<< endl;
                cout <<"==================================="<< endl;
                break;
            case 3:
                cout <<"==================================="<< endl;
                cout <<"Name: " <<raven[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Rowena Ravenclaw        "<< endl;
                cout <<"Home:  Ravenclaw                   "<< endl;
                cout <<"         **Is My Professor**       "<< endl;
                cout <<"==================================="<< endl;
            default:
                cout <<"----------HOGWARTS SCHOOL-----------"<<endl;
                break;
        }
        break;
    case 4:
        cout << "Welcome to Slytherin Home"<< endl;
        HarryCharacter* sly[10];
        sly[0] = new HarryCharacter("Lord voldemort","","",firstname,lastname);
        sly[1] = new HarryCharacter("Severus Snape","","",firstname,lastname);
        sly[2] = new HarryCharacter("Salazar Slytherin","","",firstname,lastname);
        cout << "=================================="<<endl;
        cout << "||Select 1 || Lord voldemort    ||"<<endl;
        cout << "||Select 2 || Severus Snape     ||"<<endl;
        cout << "||Select 3 || Salazar Slytherin ||"<<endl;
        cout << "=================================="<<endl;
        cout << "Select your professor for Slytherin: ";
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout <<"==========================="<< endl;
                cout <<"Name: " <<sly[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Lord voldemort  "<< endl;
                cout <<"Home:  Slytherin           "<< endl;
                cout <<"     **Is My Professor**   "<< endl;
                cout <<"==========================="<< endl;
                break;
            case 2:
                cout <<"==================================="<< endl;
                cout <<"Name: " <<sly[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Severus Snape           "<< endl;
                cout <<"Home:  Slytherin                   "<< endl;
                cout <<"        **Is My Professor**        "<< endl;
                cout <<"==================================="<< endl;
                break;
            case 3:
                cout <<"==================================="<< endl;
                cout <<"Name: " <<sly[choice-1]->getFullnameCharacter() << endl;
                cout <<"Professor: Salazar Slytherin       "<< endl;
                cout <<"Home:  Slytherin                   "<< endl;
                cout <<"         **Is My Professor**       "<< endl;
                cout <<"==================================="<< endl;
            default:
                cout <<"----------HOGWARTS SCHOOL-----------"<<endl;
                break;  
        }
        break;
    default:
        cout << "--------HOGWATS SCHOOL----------"<< endl;
        break;

    }

}