#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class GameCharacter{
private:
    string nameGame;
    string nameCharacter;
    string careersGame;
    string skillgame;
    double hpgame;
    
public:
    GameCharacter(string nameCharacter,string careersGame,string skillgame,int hpgame) {
        this->nameCharacter = nameCharacter;
        this->careersGame = careersGame;
        this->skillgame = skillgame;
        this->hpgame = hpgame;
        nameGame = "ASURA ONLINE";
    }

    string getNameGame() {
        return nameGame;
    }
    string getNameCha() {
        return nameCharacter;
    }
    string getCareer() {
        return careersGame;
    }
    double getHpGame(){
        return hpgame;
    }

};
int main() {
    string name;
    int choice;

    GameCharacter* game[5];
    cout << "Enter name: " ;
    cin >> name;
    game[0] = new GameCharacter(name,"Blade master","Double sword",1000);
    game[1] = new GameCharacter(name,"Wizards","Natural Power",400);
    game[2] = new GameCharacter(name,"Priest","Revive",200);
    game[3] = new GameCharacter(name,"Assasins","Ambush",600);
    game[4] = new GameCharacter(name,"Shapshooter","Pointing Dead",700);
    cout << "Press 1 | Blade master |" << endl;
    cout << "Press 2 | Wizards      |" << endl;
    cout << "Press 3 | Priest       |" << endl;
    cout << "Press 4 | Assasins     |" << endl;
    cout << "Press 5 | Shapshooter  |" << endl;
    cout << "Enter Class: " ;
    cin >> choice;
    cout << "<><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout << "Game: " << game[choice-1]->getNameGame() << endl;
    cout << "Name : " << game[choice-1]->getNameCha() << endl;
    cout << "Class: " << game[choice-1]->getCareer() << endl;
    cout << "HP: " << game[choice-1]->getHpGame() << endl;
    cout << "<><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
}
