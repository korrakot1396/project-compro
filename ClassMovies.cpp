#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class MoviesTicket {
private:
    string moviesCineplex;
    string moviesName;
    string moviesShowtime;
    string moviesTheatre;
    string seatNo;
    string type;
    double price;
public:
    MoviesTicket(string cineplex, string name, string showtime, string theatre){
        moviesCineplex = cineplex;
        moviesName = name;
        moviesShowtime = showtime;
        moviesTheatre = theatre;
        seatNo = "";
        this ->type = "";
        price = 0;
    }
    void setType(string type){
        
        if(type == "Normal"){
            price += 20;
        }else if(type == "Honeymoon"){
            price += 80;
        }
        this->type = type;
    } 
    void setSeatNumber(string row, int number) {
        if (row == "A" || row == "B" || row == "C" || row == "D" || row == "E" || row == "F") {
            price += 200;
        }
        stringstream ss;
        ss << row << number;
        seatNo = ss.str();
    }
    double getPrice() {
        return price;
    }
    string info() {
        stringstream ss;
        ss << "----------------------------------"<<endl;
        ss << "       "<<moviesCineplex<<"       "<<endl;
        ss << "          "<<moviesName<<"        "<<endl;
        ss << "        Showtime:"<<moviesShowtime<<"      "<<endl;
        ss << "  Seat No."<<seatNo<<"     "<<moviesTheatre<<"  "<<endl;
        ss << "          Price:"<<price<<" Baht          "<<endl;
        ss << "----------------------------------"<<endl;
          return ss.str();
    }
};

int main() {



    MoviesTicket* tickets[5];


    
    cout << "Please your enter name (5 Seat) "<<endl;
    for (int i = 0; i < 5; i++) {
        string name,type,row;
        int number;
        cout << "Name: "<<name;
        cin >> name;
        tickets[i] = new MoviesTicket("Major Ratchayothin","Robin Hood","22.30","Theatre 1");
        cout << "Please you choose Normal/Honeymoon: ";
        cin >> type;
        tickets[i]->setType(type);
        cout << "Please you choose Row(A-F): ";
        cin >> row;
        cout << "Please you choose Number: ";
        cin >> number ;
        tickets[i]->setSeatNumber(row, number);
    }


    double total = 0;
    for (int i = 0; i < 5; i++) {
        cout << tickets[i]->info() << endl;
        total += tickets[i]->getPrice();
    }
    cout << "Total Cost: " << total << " Baht" << endl;
}
