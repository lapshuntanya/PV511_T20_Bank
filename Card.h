//
// Created by Tetiana Perederii on 31.03.2026.
//

#ifndef PV511_T20_BANK_CARD_H
#define PV511_T20_BANK_CARD_H

#include <iostream>
#include <cstring>
using namespace std;

class Card {
    /*---------------Властивості (private)--------------------*/
    int number;
    char* name;
    char date[11];
    int pin;
    float cash;


    /*--------------- Методи (public)--------------------*/
public:
    //Конструктори
    Card(); //Конструктор за замовчуванням
    Card(const char* name); //Конструктор за параметрами
    ~Card(); //Деструктор

    //Аксесори = Сетери+гетери
    int getNumber(); //-set, +get
    const char* getName(); //-set, +get
    const char* getDate(); //-set, +get
    void setPin(int oldPin, int newPin); //+set
    int getPin(); //+get
    float getCash();// -set, +get

    void topupBalance(float money); //Поповнити рахунок
    void withdrawBalance(float money); //Зняти з рахунку

    //Звичайні методи
    void showInfo();
};


#endif //PV511_T20_BANK_CARD_H