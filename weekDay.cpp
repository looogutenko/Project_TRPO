#include <iostream>
using namespace std;

void getWeekday()
{
    string month;
    int day, time;

    cout << "������� ����� ������:" << endl;
    cin >> day;
    cout << "������� �����:" << endl;
    cin >> month;

    time =  (month == "������")?   day: 
            (month == "�������")?  31 + day:
            (month == "�����")?    31 + 28 + day: 
            (month == "������")?   31 + 28 + 31 + day: 
            (month == "���")?      31 + 28 + 31 + 30 +day:
            (month == "����")?     31 + 28 + 31 + 30 + 31 + day: 
            (month == "����")?     31 + 28 + 31 + 30 + 31 + 30 + day: 
            (month == "�������")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + day:
            (month == "��������")? 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day : 
            (month == "�������")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day : 
            (month == "������")?   31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day:
            (month == "�������")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day: day += 0;

    if (month == "������" && day == 1) cout << "�������" << endl;
    if (month == "������" && day == 2) cout << "�������" << endl;
    if (month == "������" && day == 3) cout << "�����������" << endl;       

    time -= 3;
    int weekday = time % 7;

    cout << "���� ������:" << endl;

    switch (weekday) 
    {
        case 1: cout << "�����������" << endl; break;
        case 2: cout << "�������" << endl; break;
        case 3: cout << "�����" << endl; break;
        case 4: cout << "�������" << endl; break;
        case 5: cout << "�������" << endl; break;
        case 6: cout << "�������" << endl; break;
        case 0: cout << "�����������" << endl; 
    }    
	
}