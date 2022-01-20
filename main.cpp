#include <iostream>
using namespace std;
void min();
void getWeekday();
void numToString(int num = 0);


int main()
{	
    setlocale(LC_ALL, "Russian");
    
    //cout << "" << endl;
    //����� �������
    int alg;
    do{
        cout << "������� ����� ���������:" << endl;
        cin >> alg;

        switch (alg)
        {
            case 1: getWeekday(); break;
            case 2: numToString(); break;
            case 3: mit();  break;
            case 4:  break;
            case 5:  break;
            case 0: break;
            default: cout << "�� �������� � �������." << endl;
        }
    } while(alg != 0);
    
    return 0;
}