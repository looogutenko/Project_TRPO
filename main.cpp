#include <iostream>
using namespace std;

int getWeekday();
void numToString(int num = 0);

int main()
{
    //cout << "" << endl;
    //вызов функции
    int alg;

    cout << "Введите номер алгоритма:" << endl;
    cin >> alg;

    switch (alg)
    {
        case 1: getWeekday(); break;
        case 2: numToString(); break;
        case 3: /*вызов модуля*/ break;
        case 4: /*вызов модуля*/ break;
        case 5: /*вызов модуля*/ break;
        default: cout << "Вы ошиблись с номером." << endl;
    }

    return 0;
}