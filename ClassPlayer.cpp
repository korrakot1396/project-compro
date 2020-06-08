#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class PlayerCharacter{
private:
    string nameClub;
    string namePlayer;
    string namePosition;
    string nameNationality;
    string birtdatePlayer;
    double agePlayer;
    double shirtNumber;
public:
    PlayerCharacter(string namePlayer, string namePosition, string nameNationality, string birtdatePlayer, int agePlayer, int shirtNumber){
        this -> namePlayer = namePlayer;
        this -> namePosition = namePosition;
        this -> nameNationality = nameNationality;
        this -> birtdatePlayer = birtdatePlayer;
        this -> agePlayer = agePlayer;
        this -> shirtNumber = shirtNumber;
        nameClub = "Manchester United";
    }

    string getNameClub(){
        return nameClub;
    }
    string getNamePlayer(){
        return namePlayer;
    }
    string getNamePosition(){
        return namePosition;
    }
    string getNameNationality(){
        return nameNationality;
    }
    string getBirthdatePlayer(){
        return birtdatePlayer;
    }
    double getAgePlayer(){
        return agePlayer;
    }
    double getShirtNumber(){
        return shirtNumber;
    }
};
int main(){
    int choice;

    PlayerCharacter* player[25];
    player[0] = new PlayerCharacter("Paul Pogba","Midfield(MF)","France","15 March 1993",25,6);
    player[1] = new PlayerCharacter("David De Gea","Goal Keeper(GK)","Spain","7 November 1990",28,1);
    player[2] = new PlayerCharacter("Alexis Sanchez","Striker(ST)","Spain","19 December 1998",29,7);
    player[3] = new PlayerCharacter("Romelu Lukaku","Striker(ST)","Belgium","13 May 1993",25,9);
    player[4] = new PlayerCharacter("Anthony Martial","Striker(ST)","France","5 December 1995",22,11);
    player[5] = new PlayerCharacter("Marcus Rashford","Striker(ST)","England","31 October 1997",21,10);
    player[6] = new PlayerCharacter("Nemanja Matic","Center Back(CB)","Serbian","1 August 1988",30,31);
    player[7] = new PlayerCharacter("Marouane Fellaini","Midfield(MF)","Belgium","22 November 1987",31,27);
    player[8] = new PlayerCharacter("Ander Herrera","Midfield(MF)","Spain","14 August 1989",29,21);
    player[9] = new PlayerCharacter("Juan Mata","Midfield(MF)","Spain","28 April 1988",30,8);
    player[10] = new PlayerCharacter("Fred","Midfield(MF)","Brazil","5 March 1993",25,17);
    player[11] = new PlayerCharacter("Jesse Lingard","Midfield(MF)","England","15 December 1992",25,14);
    player[12] = new PlayerCharacter("Scott McTominay","Midfield(MF)","England","8 December 1996",21,39);
    player[13] = new PlayerCharacter("Matteo Darmian","Right Back(RB)","Italy","2 December 1989",29,36);
    player[14] = new PlayerCharacter("Antonio Valencia","Left Back(LB)","Ecuador","4 August 1985",33,25);
    player[15] = new PlayerCharacter("Luke Shaw","Left Back(LB)","England","12 July 1995",23,23);
    player[16] = new PlayerCharacter("Marcos Rojo","Center Back(CB)","Argentina","20 March 1990",28,16);
    player[17] = new PlayerCharacter("Chris Smalling","Center Back(CB)","England","22 November 1989",29,12);
    player[18] = new PlayerCharacter("Ashley Young","Right Back(RB)","England","9 July 1985",33,18);
    player[19] = new PlayerCharacter("Diogo Dalot","Center Back(CB)","Portugal","18 March 1999",19,20);
    player[20] = new PlayerCharacter("Phil Jones","Center Back(CB)","England","21 February 1992",26,4);
    player[21] = new PlayerCharacter("Eric Bailly","Center Back(CB)","Ivory Coast","12 April 1994",24,3);
    player[22] = new PlayerCharacter("Victor Lindelof","Center Back(CB)","Sweden","17 July 1994",24,2);
    player[23] = new PlayerCharacter("Fosu-Mensah","Midfield(MF)","Holland","2 January 1998",20,24);
    player[24] = new PlayerCharacter("Axel Tuanzebe","Midfield(MF)","Congo","14 November 1997",21,38);
    
    
    cout << " ======================================" << endl;
    cout << "|  Manchester United list Player 2019  |" << endl;
    cout << " ======================================" << endl;
    cout << "| Select Player 1  | Paul Pogba        |" << endl;
    cout << "| Select Player 2  | David De Gea      |" << endl;
    cout << "| Select Player 3  | Alexis Sanchez    |" << endl;
    cout << "| Select Player 4  | Romelu Lukaku     |" << endl;
    cout << "| Select Player 5  | Anthony Martial   |" << endl;
    cout << "| Select Player 6  | Marcus Rashford   |" << endl;
    cout << "| Select Player 7  | Nemanja Matic     |" << endl;
    cout << "| Select Player 8  | Marouane Fellaini |" << endl;
    cout << "| Select Player 9  | Ander Herrera     |" << endl;
    cout << "| Select Player 10 | Juan Mata         |" << endl;
    cout << "| Select Player 11 | Fred              |" << endl;
    cout << "| Select Player 12 | Jesse Lingard     |" << endl;
    cout << "| Select Player 13 | Scott McTominay   |" << endl;
    cout << "| Select Player 14 | Matteo Darmian    |" << endl;
    cout << "| Select Player 15 | Antonio Valencia  |" << endl;
    cout << "| Select Player 16 | Luke Shaw         |" << endl;
    cout << "| Select Player 17 | Marcos Rojo       |" << endl;
    cout << "| Select Player 18 | Chris Smalling    |" << endl;
    cout << "| Select Player 19 | Ashley Young      |" << endl;
    cout << "| Select Player 20 | Diogo Dalot       |" << endl;
    cout << "| Select Player 21 | Phil Jones        |" << endl;
    cout << "| Select Player 22 | Eric Bailly       |" << endl;
    cout << "| Select Player 23 | Victor Lindelof   |" << endl;
    cout << "| Select Player 24 | Fosu-Mensah       |" << endl;
    cout << "| Select Player 25 | Axel Tuanzebe     |" << endl;
    cout << " ======================================" << endl;



    cout << "Enter your Select Player: " ;
    cin >> choice;

    cout << endl;
    cout << "==========================="<<endl;
    cout << "Club: " << player[choice-1]->getNameClub() << endl;
    cout << "Name : " << player[choice-1]->getNamePlayer() << endl;
    cout << "Position: " << player[choice-1]->getNamePosition() << endl;
    cout << "Nationality: " << player[choice-1]->getNameNationality() << endl;
    cout << "Birthdate: " << player[choice-1]->getBirthdatePlayer() << endl;
    cout << "Age: " << player[choice-1]->getAgePlayer() <<" year old"  << endl;
    cout << "Shirt No.: " << player[choice-1]->getShirtNumber() << endl;
    cout << "==========================="<<endl;

}





