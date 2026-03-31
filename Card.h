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

    //Звичайні методи
    void showInfo();
};


#endif //PV511_T20_BANK_CARD_H