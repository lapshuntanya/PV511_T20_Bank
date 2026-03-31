//
// Created by Tetiana Perederii on 31.03.2026.
//

#include "Card.h"


Card::Card() {
    number = rand();
    name = new char[7]{"Noname"};

}

Card::Card(const char *name) {
}

Card::~Card() {
}

void Card::showInfo() {
}
