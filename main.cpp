#include <iostream>
using namespace std;

int getWeekday();
void numToString(int num = 0);
void getMaxandMin();

int main()
{	
    setlocale(LC_ALL, "ru");
    
    //cout << "" << endl;
    //вызов функции
    int alg;
    do{
        cout << "Введите номер алгоритма:" << endl;
        cin >> alg;

        switch (alg)
        {
            case 1: getWeekday(); break;
            case 2: numToString(); break;
            case 3: getMaxandMin(); break;
            case 4: /*вызов модуля*/ break;
            case 5: /*вызов модуля*/ break;
            case 0: break;
            default: cout << "Вы ошиблись с номером." << endl;
        }
    }while(alg != 0);
    
    return 0;
}