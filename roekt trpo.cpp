#include <iostream>
#include <time.h>
using namespace std;

void modyl()
{
	int N;
	cout << "Vvedite dlinu parolia:\n";  //выводим сообщение
	cin >> N; //считываем длину пароля
	srand(time(NULL)); //инициализируем генератор случайных чисел
	char* pass = new char[N + 1]; //выделяем память для строки пароля
	for (int i = 0; i < N; ++i)
	{
		switch (rand() % 3) //генерируем случайное число от 0 до 2
		{
		case 0: //если ноль
			pass[i] = rand() % 10 + '0'; //вставляем в пароль случайную цифру
			break;
		case 1: //если единица
			pass[i] = rand() % 26 + 'A'; //вставляем случайную большую букву
			break;
		case 2: //если двойка
			pass[i] = rand() % 26 + 'a'; //вставляем случайную маленькую букву
		}
	}
	pass[N] = 0; //записываем в конец строки признак конца строки
	cout << pass; //выводим пароль на экран
}