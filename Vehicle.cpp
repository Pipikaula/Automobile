#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Vehicle {
    private:
       int year;
       int length;
       string make;
       string model;
       static const int currentYear = 2015;
  
    public:
       int setYear(int userYear);            //Mutator Functions
       int setLength(int userLength);
       void setMake(string userMake);
       void setModel(string userModel);
       int getYear();                    //Accessor Functions
       int getLength();
       void getMake();
       void getModel();
       int getCurrentYear();
       int getWarranty();
       void displayInfo();
};

int Vehicle::setYear(int userYear) {
    
    year = userYear;  
}

int Vehicle::setLength(int userLength) {
    
    length = userLength;
}

void Vehicle::setMake(string userMake) {
    
    make = userMake;
}

void Vehicle::setModel(string userModel) {
    
    model = userModel;
}   

int Vehicle::getYear() {
    
    return year;
}

int Vehicle::getLength() {
    
    return length;
}

void Vehicle::getMake() {
    
    return;
}

void Vehicle::getModel() {
    
    return;
}    

int Vehicle::getCurrentYear() {
    
    return currentYear;
}
  
int Vehicle::getWarranty() {
   
    if (year + length - currentYear > 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void Vehicle::displayInfo() {
    
   cout << "Make: " << make << "\n";
   cout << "Model: " << model << "\n";
   cout << "Year: " << year << "\n";
   cout << "Length of Warranty: " << length << "\n"; 
   
}

int main(void) {
    Vehicle car;
    
    int i, year, length;
    string make, model;
    
    do {
        
        cout << "1 for warranty check, 2 to quit: ";
        cin >> i; 
        if (i == 1) {
            
            cout << "What is the make of your vehicle: ";
            cin >> make;
            car.setMake(make);
            
            cout << "What is model of your vehicle: ";
            cin >> model;
            car.setModel(model);
            
            cout << "What is the year manufactured of your vehicle: ";
            cin >> year;
            car.setYear(year);
            
            cout << "What is length of the warranty of your vehicle: ";
            cin >> length;
            car.setLength(length);
            
            car.displayInfo();
            
            car.getWarranty();
            if (car.getWarranty() == 1) {
                cout << "You Have A Good Warranty" << "\n" << endl;
            }
            else {
                cout << "You Have A Bad Warranty" << "\n" << endl;
            }
        }
    } while (i != 2);
        
    return 0;
}
