#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	int favorite;
	int z;
	int end;
	cout << "Podaj ulubioną liczbę ...\n";
	cin >> favorite;
	do {
		cout << "--------------------MENU----------------------\n";
		cout << "1-Wyświetl liczby od 1 do ulubionej \n";
		cout << "2-Wyświetl liczby od 1 do ulubionej \n";
		cout << "3-Wyświetl tylko modulo 5 dla liczby od 1 do ulubionej \n";
		cout << "4-Wyświetl liczby większe niż 5 ale mniejsze niż 10.\n";
		cout << "0 -Zakończ program.\n";
		cin >> z;


		if (z == 1)
		{
			int x1 = 5;
			while (x1 <= favorite)
			{
				cout << x1 << endl;
				x1++;
			}
		}
		else if (z == 2)
		{
			int x2 = 1;
			do
			{
				cout << x2 << endl;
				x2++;
			} while (x2 < favorite);
		}
		else if (z == 0)
		{
			cout << "Miłego dnia :)\n";
			z = 0;
		}
		else if(z == 3)
		{
			for (int i = 1; i <= favorite; i++)
			{
				cout << i % 5<<endl;
			}
		}
		else if (z == 4)
		{
			for (int i = 5; i <= favorite; i++)
			{
				if (favorite < 5)
				{
					cout << "Ulubiona liczba, mniejsza niż 5\n";
					break;
				}
				if (i > 10)
				{
					cout << "Ulubiona liczba, wieksza niż 10\n";
					break;
				}
				cout << i << endl;
			}
		}
		else 
		{
			cout << "Wybierz cyfrę od 0 do 4 ...\n";
		}

	} while (z != 0);
	
		return 0;
}
   

