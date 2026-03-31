//
// Created by Tetiana Perederii on 31.03.2026.
//

#include "Card.h"


Card::Card() {
    number = rand();
    name = new char[7]{"Noname"};
    //date = "01.36";
   // strcpy_s(date, 11, "01.36"); //VS
    strcpy(date,"01.36"); //CLion, Online
    pin = rand()%8000+1000;
    cash = 0;

    cout << "Open STANDART card: " << number << endl;
}

Card::Card(const char *name) { // "Pupkin Anton"
    number = rand();

    int len_name = strlen(name) + 1; //12 + 1 = 13
    this->name = new char[len_name];
    strcpy(this->name, name); // Clion
    //strcpy_s(this->name,len_name,  name); // VS

    strcpy(date,"01.36"); //CLion, Online
    pin = rand()%8000+1000;
    cash = 0;

    cout << "Open VIP card: " << number << endl;
}

Card::~Card() {
    delete[] name;
    cout << "Closed card: " << number << endl;
}

int Card::getNumber() {
    return number;
}

const char * Card::getName() {
    return name;
}

const char * Card::getDate() {
    return date;
}

void Card::setPin(int oldPin, int newPin) {
    if (oldPin == pin ) {
        pin = newPin;
    }else {
        cout << "Error: incorrect pin!\n";
    }
}

int Card::getPin() {
    return pin;
}

float Card::getCash() {
    return cash;
}

void Card::topupBalance(float money) {
}

void Card::withdrawBalance(float money) {
}

void Card::showInfo() {
    cout << "+++++++++++++++++++++++++++++++++++++++\n";
    cout << "| Client: " << name << endl;
    cout << "| Number: " << number << endl;
    cout << "| Exp date: " << date << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++\n";
    cout << "| PIN: " << pin << endl;
    cout << "| Balance: " << cash << " UAH\n";
    cout << "+++++++++++++++++++++++++++++++++++++++\n";
}
