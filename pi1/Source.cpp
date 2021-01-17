#include <iostream>
#include <time.h>
	using namespace std;
	int main()
	{
		int ilosc_liczb;
		float N, sr;
		float sum = 0;
		cout << "Ilosc liczb:";
		cin >> ilosc_liczb;
		for (int i = 0; i < ilosc_liczb; i++)
		{
			/*cot << "Liczba: ";
			cin >> N;
			*/
			N = (rand() % 100 + 1)/100;

			sum += N;
		}

		sr = sum / ilosc_liczb;
		cout << "Srednia:" << sr;














	}