#include<iostream>
#include<string>
using namespace std;
class Student {
    private:
        string firstname;
        string lastname;
        string id;
        string gender;
        float age;
        float year;
    public:
        Student(string firstname,string lastname,string id,string gender,float age,float year){
            this->firstname = firstname;
            this->lastname = lastname;
            this->id = id;
            this->gender = gender;
            this->age = age;
            this->year = year;

    }string getFirstname(){
        return firstname;
    }string getLastname(){
        return lastname;
    }string getId(){
        return id;
    }string getGender(){
        return gender;
    }float getAge(){
        return age;
    }float getYear(){
      return year;
    }
};
double gradePoint(string gradestudent){
    if(gradestudent == "A"){
        return 4;
    }else if(gradestudent == "B+"){
        return 3.5;
    }else if(gradestudent == "B"){
        return 3;
    }else if(gradestudent == "C+"){
        return 2.5;
    }else if(gradestudent == "C"){
        return 2;
    }else if(gradestudent == "D+"){
        return 1.5;
    }else if(gradestudent == "D"){
        return 1;
    }else if(gradestudent == "F"){
        return 0;
    }else {
        return 0;
    }
}
int main(){
        cout << "****************************************************" << endl;
        cout << "*           Welcome to Hogwarts School             *" << endl;
        cout << "*           of Witchcraff and Wizardry             *" << endl;
        cout << "****************************************************" << endl;
        string firstname;
        string lastname;
        string id;
        string gender;
        float age;
        float year;
        int subject;
        Student*student[4];
        int i;
        for(i=0;i<4;i++){
                cout << "Enter your firstname: ";
                cin >> firstname;
                cout << "Enter your lastname: ";
                cin >> lastname;
                cout << "Enter your ID: ";
                cin >> id;
                cout << "Enter your gender male/female: ";
                cin >> gender;
                cout << "Enter your age: ";
                cin >> age;
                cout << "Enter your year: ";
                cin >> year;
                cout << "Enter number of subject: ";
                cin >> subject;
                double totalPoint = 0;
                double totalCredits = 0;
                for(int i=0;i<subject;i++){
                    cout << "Enter your credits grade (Credit Grade, 3 A ): ";
                    double credits;
                    string gradestudent;
                    cin >> credits >> gradestudent;
                    totalCredits += credits;
                    totalPoint += credits*gradePoint(gradestudent);
                }
                cout << "====================================" << endl;
                cout << "Firstname: "<< firstname << endl;
                cout << "Lastname: "<< lastname << endl;
                cout << "ID: "<< id << endl;
                cout << "Gender: "<< gender << endl;
                cout << "Age: "<< age << endl;
                cout << "Year: "<< year << endl;
                cout << "total credits: " << totalCredits << endl;
                cout << "total point: " << totalPoint << endl;
                cout << "GPA: " << totalPoint/totalCredits << endl;
                    if(totalPoint/totalCredits == 4){
                      cout << "********************************" << endl;
                      cout << "*      You are Giffin Dorr     *" << endl;
                      cout << "*  Welcome to Hogwarts School  *" << endl;
                      cout << "********************************" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*                              *" << endl;
                      cout << "********************************" << endl;
                      cout << "* Let your courage be with you *" << endl;
                      cout << "*          Forever             *" << endl;
                      cout << "********************************" << endl;
                     
                    }else if(totalPoint/totalCredits >=3 && totalPoint/totalCredits <4){
                      cout << "********************************" << endl;
                      cout << "*      You are Hufflepuff      *" << endl;
                      cout << "*  Welcome to Hogwarts School  *" << endl;
                      cout << "********************************" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*                              *" << endl;
                      cout << "********************************" << endl;
                      cout << "* Let your honesty be with you *" << endl;
                      cout << "*          Forever             *" << endl;
                      cout << "********************************" << endl;
                    }else if(totalPoint/totalCredits >=2 && totalPoint/totalCredits <3){
                      cout << "********************************" << endl;
                      cout << "*      You are Ravenclaw       *" << endl;
                      cout << "*  Welcome to Hogwarts School  *" << endl;
                      cout << "********************************" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*                              *" << endl;
                      cout << "********************************" << endl;
                      cout << "* Let your indenuity be with you *" << endl;
                      cout << "*          Forever             *" << endl;
                      cout << "********************************" << endl;
                    }else if(totalPoint/totalCredits >=1 && totalPoint/totalCredits <2){
                      cout << "********************************" << endl;
                      cout << "*      You are Slytherin       *" << endl;
                      cout << "*  Welcome to Hogwarts School  *" << endl;
                      cout << "********************************" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$$$$$$$$$$$$$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*   $$$$$$$          $$$$$$$   *" << endl;
                      cout << "*                              *" << endl;
                      cout << "********************************" << endl;
                      cout << "* Let your leadership be with you *" << endl;
                      cout << "*          Forever             *" << endl;
                      cout << "********************************" << endl;
                    }else{
                      cout << "*******************************************" << endl;
                      cout << "*       You were fired form Hogwarts      *" << endl;
                      cout << "*******************************************" << endl;
                      cout << "*         $$$$$$$$$$$$$$$$$$$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$$$$$$$$$$$$$$$$$       *" << endl;
                      cout << "*         $$$$    $$$$$$$$$    $$$$       *" << endl;
                      cout << "*         $$$$    $$$$$$$$$    $$$$       *" << endl;
                      cout << "*         $$$$$$$$$$$$$$$$$$$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$$$$$$$$$$$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$$$$$$$$$$$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$        $$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$        $$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$        $$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$        $$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$        $$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$$$$$$$$$$$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$$$$$$$$$$$$$$$$$       *" << endl;
                      cout << "*         $$$$$$$$$$$$$$$$$$$$$$$$$       *" << endl;
                      cout << "*******************************************" << endl;
                    }
                cout << "====================================" << endl;
                student[i] = new Student(firstname,lastname,id,gender,age,year);

        }
        
}