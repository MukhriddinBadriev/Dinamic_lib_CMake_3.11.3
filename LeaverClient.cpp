#include <iostream>
#include "Leaver.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    string name;
    Leaver bye;
    cout << "Введите имя: ";
    cin >> name;
    cout << bye.leave(name);
    return 0;
}