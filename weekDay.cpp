#include <iostream>
using namespace std;

int getWeekday()
{
	setlocale(LC_ALL, "ru");
    
    string month;
    int day, time;

    cout << "Введите число месяца:" << endl;
    cin >> day;
    cout << "Введите месяц:" << endl;
    cin >> month;

    time =  (month == "января")?   day: 
            (month == "февраля")?  31 + day:
            (month == "марта")?    31 + 28 + day: 
            (month == "апреля")?   31 + 28 + 31 + day: 
            (month == "мая")?      31 + 28 + 31 + 30 +day:
            (month == "июня")?     31 + 28 + 31 + 30 + 31 + day: 
            (month == "июля")?     31 + 28 + 31 + 30 + 31 + 30 + day: 
            (month == "августа")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + day:
            (month == "сентября")? 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day : 
            (month == "октября")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day : 
            (month == "ноября")?   31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day:
            (month == "декабря")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day: day += 0;

    if (month == "января" && day == 1) cout << "пятница" << endl;
    if (month == "января" && day == 2) cout << "суббота" << endl;
    if (month == "января" && day == 3) cout << "воскресенье" << endl;       

    time -= 3;
    int weekday = time % 7;

    cout << "День недели:" << endl;

    switch (weekday) 
    {
        case 1: cout << "понедельник" << endl; break;
        case 2: cout << "вторник" << endl; break;
        case 3: cout << "среда" << endl; break;
        case 4: cout << "четверг" << endl; break;
        case 5: cout << "пятница" << endl; break;
        case 6: cout << "суббота" << endl; break;
        case 0: cout << "воскресенье" << endl; 
    }    
	
    return 0;
}