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
        cin.ignore();
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
            case 1: {
                //cout << "Current balance: " << (*pObj).getCash() << endl;
                cout << "Current balance: " << pObj->getCash() << endl;
                break;
            }
            case 2: {
                int a, b;
                cout << "Input old PIN: "; cin >> a;
                cout << "Input new PIN: "; cin >> b;
                pObj->setPin(a, b);
                cout << "Current PIN: " << pObj->getPin() << endl;
                break;
            }
            case 3: {
                cout << "Current balance: " << pObj->getCash() << endl;
                int a = 0;
                cout << "Input money: "; cin >> a;
                pObj->topupBalance(a);
                cout << "Current balance: " << pObj->getCash() << endl;
                break;
            }
            case 4: {
                cout << "Current balance: " << pObj->getCash() << endl;
                int a = 0;
                cout << "Input money: "; cin >> a;
                pObj->withdrawBalance(a);
                cout << "Current balance: " << pObj->getCash() << endl;
                break;
            }
            case 5: pObj->showInfo(); break;
            case 0: delete pObj; break;
        }
    }while (menu!=0);


    return 0;
}