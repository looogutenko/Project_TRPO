#include <iostream>
using namespace std;

void getWeekday()
{
    string month;
    int day, time;

    cout << "¬ведите число мес€ца:" << endl;
    cin >> day;
    cout << "¬ведите мес€ц:" << endl;
    cin >> month;

    time =  (month == "€нвар€")?   day: 
            (month == "феврал€")?  31 + day:
            (month == "марта")?    31 + 28 + day: 
            (month == "апрел€")?   31 + 28 + 31 + day: 
            (month == "ма€")?      31 + 28 + 31 + 30 +day:
            (month == "июн€")?     31 + 28 + 31 + 30 + 31 + day: 
            (month == "июл€")?     31 + 28 + 31 + 30 + 31 + 30 + day: 
            (month == "августа")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + day:
            (month == "сент€бр€")? 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day : 
            (month == "окт€бр€")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day : 
            (month == "но€бр€")?   31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day:
            (month == "декабр€")?  31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day: day += 0;

    if (month == "€нвар€" && day == 1) cout << "п€тница" << endl;
    if (month == "€нвар€" && day == 2) cout << "суббота" << endl;
    if (month == "€нвар€" && day == 3) cout << "воскресенье" << endl;       

    time -= 3;
    int weekday = time % 7;

    cout << "ƒень недели:" << endl;

    switch (weekday) 
    {
        case 1: cout << "понедельник" << endl; break;
        case 2: cout << "вторник" << endl; break;
        case 3: cout << "среда" << endl; break;
        case 4: cout << "четверг" << endl; break;
        case 5: cout << "п€тница" << endl; break;
        case 6: cout << "суббота" << endl; break;
        case 0: cout << "воскресенье" << endl; 
    }    
	
}