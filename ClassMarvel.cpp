#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class HeroMarvel{
private:
    string mavelHero;
    string actoracHero;
    string moviesHero;
    double ageHero;
    
public:
    HeroMarvel(string mavelHero,string actoracHero,string moviesHero, int ageHero) {
        this->mavelHero = mavelHero;
        this->actoracHero = actoracHero;
        this->moviesHero = moviesHero;
        this->ageHero = ageHero;


    }

    string getMavelHero() {
        return mavelHero;
    }
    string getActoracHero() {
        return actoracHero;
    }
    string getMoviesHero() {
        return moviesHero;
    }
    double getAgeHero(){
        return ageHero;
    }

};
int main() {
    int choice;

    HeroMarvel* hero[5];

    hero[0] = new HeroMarvel("Iron Man","Robert Downey","Ironman(1-3),Avengers,Avengers(1-3)",54);
    hero[1] = new HeroMarvel("Captain America","Chris Evans","Captain America(1-3),Avengers(1-3)",78);
    hero[2] = new HeroMarvel("Thor","Chirs Hemsworth","Thor(1-3),Avengers(1-3)",1500);
    hero[3] = new HeroMarvel("Black Panther","Chadwick Boseman","Black Panther,Avengers 3",50);
    hero[4] = new HeroMarvel("Hulk","Mark Ruffalo","Avengers(1-3),Thor 3,Captain America 3",50);
    
    cout << "========|=== Select Heroes ===| ========" << endl;
    cout << "Press 1 | Iron Man            |" << endl;
    cout << "Press 2 | Captain America     |" << endl;
    cout << "Press 3 | Thor                |" << endl;
    cout << "Press 4 | Black Panther       |" << endl;
    cout << "Press 5 | Hulk                |" << endl;
    cout << "========|=====================|========="<< endl;
    cout << "Select Hero: " ;
    cin >> choice;
    cout << "<><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout << "Hreo: " << hero[choice-1]->getMavelHero() << endl;
    cout << "Actor: " << hero[choice-1]->getActoracHero() << endl;
    cout << "Movies: " << hero[choice-1]->getMoviesHero() << endl;
    cout << "AgeHero: " << hero[choice-1]->getAgeHero() <<" year old "<<endl;
    cout << "<><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
}
