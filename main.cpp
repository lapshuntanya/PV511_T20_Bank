#include "Card.h"

int main() {

    Card a; // Card();
    a.showInfo();
    cout << endl;

    Card b("Bardar Pavlo"); //Card(const char* name);
    b.showInfo();

    cout << endl << endl;

    return 0;
}