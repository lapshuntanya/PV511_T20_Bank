#include "Card.h"

int main() {

   /* Card a; // Card();
    a.showInfo();
    cout << endl;

    Card b("Bardar Pavlo"); //Card(const char* name);
    b.showInfo();

    cout << endl << endl;*/


    Card* pObj = nullptr;

    int menu =0;
    char tmp[100] = "";

    cout << "1. Create a STANDART card.\n";
    cout << "2. Create a VIP card.\n";
    cin >> menu;
    if (menu == 1) {
        pObj = new Card(); //Конструктор за замовчуванням
    }else if (menu == 2) {
        cout << "Input your name: ";
        cin.getline(tmp, 100);
        pObj = new Card(tmp); //Конструктор з параметрами
    }
    else {
        return 0;
    }

 //==============================================================

    do {
        cout << "\t\t MENU: \n";
        cout << "0. Exit\n";
        cout << "1. Show balance\n";
        cout << "2. Change pin\n";
        cout << "3. Topup\n";
        cout << "4. Withdraw\n";
        cout << "5. Show all info\n";
        cin >> menu;

        switch (menu) {

        }
    }while (menu!=0);


    return 0;
}