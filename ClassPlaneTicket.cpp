#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class PlaneTicket {
private:
    string passengerName;
    string sourcePlace;
    string destinationPlace;
    string departureTime;
    string seatNo;
    string type;
    double price;
public:
    PlaneTicket(string source, string destination, string departure) {
        sourcePlace = source;
        destinationPlace = destination;
        this->type = "";
        departureTime = departure;
        passengerName = "";
        seatNo = "";
        price = 0;
    }

    void setPassengerName(string name) {
        passengerName = name;
    }

    void setType(string type) {
        
        if (type == "Business") {
            price += 1000;
        } else if (type == "Normal") {
            price += 400;
        }

        this->type = type;
    }

    void setSeatNumber(string row, int number) {
        if (row == "A" || row == "B" || row == "C") {
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
        ss << "===============================================================" << endl;
        ss << "      From                   To                     Time    " << endl;
        ss << "   " << sourcePlace << "                "<<destinationPlace << "         " << departureTime << endl;
        ss << "---------------------------------------------------------------" << endl;
        ss << "   Passenger: " << passengerName << endl;
        ss << "   Price: " << price << " Baht                   seat number: " << seatNo << endl;
        ss << "===============================================================";
        return ss.str();
    }
};

int main() {



    PlaneTicket* tickets[5];


    // loop i
    cout << "Please your enter name (5 passenger) "<<endl;
    for (int i = 0; i < 5; i++) {
        string name,type,row;
        int number;
        cout << "Name: "<<name;
        cin >> name;
        tickets[i] = new PlaneTicket("Bangkok", "Chiangmai","11.00 AM - 13.00 PM");
        tickets[i]->setPassengerName(name);
        cout << "Please you choose Business/Normal: ";
        cin >> type;
        tickets[i]->setType(type);
        cout << "Please you choose Row(A-C): ";
        cin >> row;
        cout << "Please you choose Number: ";
        cin >> number ;
        tickets[i]->setSeatNumber(row, number);
    }


    // -------------------------------------------
    double total = 0;
    for (int i = 0; i < 5; i++) {
        cout << tickets[i]->info() << endl;
        total += tickets[i]->getPrice();
    }
    cout << "Total Cost: " << total << " Baht" << endl;
}