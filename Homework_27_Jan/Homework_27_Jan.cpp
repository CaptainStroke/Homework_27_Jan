//1. Загадать случайно 100 целых чисел в диапазоне от - 100 до 100. 
//Вычислить процент положительных чисел, процент отрицательных чисел и процент нулей.
//Вычислить процент чётных чисел и процент нечётных.

//#include <iostream> // positive, negative, zero
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	int n = rand() % 201 - 100;
//	int m = 0;
//	int p = 0;
//	int z = 0;
//	for (int x = 1; x <= 100; x++)
//	{
//		int n = rand() % 201 - 100;
//		if (n == 0) z = z + 1;
//		if (n > 0) p = p + 1;
//		if (n < 0) m = m + 1;
//		cout << n << "\n";
//	}
//	cout << "\nZero's - " << z << "%\n";
//	cout << "Positive - " << p << "%\n";
//	cout << "Negative - " << m << "%\n";
//}

//#include <iostream>  // odd, even
//#include <ctime>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	int n = rand() % 201 - 100;
//	int m = 0;
//	int p = 0;
//	int z = 0;
//	int i = 1;
//	for (int x = 1; x <= 100; x++)
//	{
//		
//		int n = rand() % 201 - 100;
//		if (n == 0) z++;
//		else if (n % 2 == 0) p++;
//		if (n % 2 != 0) m++;
//		cout << i++ << " - " << n << "\n";
//	}
//	cout << "\nZero's - " << z << "%\n";
//	cout << "Positive - " << p << "%\n";
//	cout << "Negative - " << m << "%\n";
//}
// 
//2. Вывести на экран таблицу умножения(таблицу Пифагора).

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	cout << "\t\tTable of PIFAGARA\n";
//	for (int x = 2; x < 10; x++)
//	{
//		for (int y = 2; y < 6 ; y++)
//		{
//			cout << y << "X" << x << "=" << y*x << "\t";
//			if (y == 5) cout << "\n";	
//		}
//	}
//	cout << "\n";
//	for (int x = 2; x < 10; x++)
//	{
//		for (int y = 6; y < 10; y++)
//		{
//			cout << y << "X" << x << "=" << y * x << "\t";
//			if (y == 9) cout << "\n";
//		}
//	}
//}

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	for (int x = 1; x <= 10; x++)
//	{
//		for (int y = 1; y <= 10; y++)
//		{
//			cout << x * y << "\t";;
//			if (y == 10) cout << "\n\n";
//		}
//	}
//}

//3. Ежемесячная стипендия студента составляет N гривен, а расходы на проживание превышают стипендию и составляют M
//гривен в месяц. Рост цен ежемесячно увеличивает расходы на 3 % .
//Составьте программу расчёта суммы денег, которую необходимо единовременно попросить у родителей,
//чтобы можно было прожить учебный год(10 месяцев), используя только эти деньги и стипендию.

//4. Осуществить циклический сдвиг влево введённого числа на N разрядов(например, при сдвиге числа 12345 влево
//на 3 разряда получится число 45123).

//5. Написать программу, которая выводит на экран все простые числа в диапазоне от 2 до 10.000.000.


#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int i;
    int num = 0; // counting simple numbers
    int x = 2;
    do
{
        for (i = 2; i <= x; i++)
            if (!(x % i)) break;
        if (i == x)
            cout << ++num << " - " << x << endl;
           x++;
    } while (x <= 10000000);
}

//6. Показать на экране все числа Армстронга в диапазоне от 0 до 10.000.000.

//7. Показать на экране все совершенные числа в диапазоне от 0 до 10.000.000.

//8. Показать на экране все числа Фибоначчи в диапазоне от 0 до 10.000.000.

//9. ФЛАГИ:
//-УКРАИНА
//- ФРАНЦИИ
//- США

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	int x;
//	int y;
//	int height = 25;
//	int width = 25;
//	char symbol = 178;
//	{
//		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//		for (x = 0; x < height; x++)
//		{
//			SetConsoleTextAttribute(h, 1);
//			cout << symbol;
//		}
//		
//	} 
//
//}

//#include <iostream> //Ukrainian flag
//#include <Windows.h>
//using namespace std;
//int main()
//{
//
//    int width = 29;
//    int height = 20;
//    char symbol = 178;
//    for(int y = 0; y < height/2; y++)
//    {
//        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//        for (int x = 0; x < width; x++)
//        {
//            if (y == 0 || x == 0 )
//            {
//                SetConsoleTextAttribute(h, 16);
//            }
//            cout << symbol << symbol;
//        }
//        cout << "\n";
//    }
//    for (int y = height / 2; y < height; y++)
//    {
//        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//        for (int x = 0; x < width; x++)
//        {
//            if (y == 0 || x == 0)
//            {
//                SetConsoleTextAttribute(h, 6);
//            }
//            cout << symbol << symbol;
//        }
//        cout << "\n";
//     }
//}

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//
//    int width = 29;
//    int height = 20;
//    char symbol = 178;
//    for (int y = 0; y < height; y++)
//    {
//        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//        for (int x = 0; x < width; x++)
//        {
//            if (x < width / 3)//Frenche blue
//            {
//                SetConsoleTextAttribute(h, 16);
//            }
//            else if ( x >= width / 3 && x < width * 2 / 3)//white
//            {
//                SetConsoleTextAttribute(h, 7);
//            }
//            else if (x >= width * 2 / 3)//Red
//            {
//                SetConsoleTextAttribute(h, 4);
//            }
//            cout << symbol << symbol;
//        }
//        cout << "\n";
//    }
//}

//#include <iostream>//USA
//#include <Windows.h>
//using namespace std;
//int main()
//{
//
//    int width = 26;
//    int height = 13;
//    char symbol = 178;
//    char star = 42;
//    for (int y = 0; y < height; y++)
//    {
//        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//        for (int x = 0; x < width; x++)
//        {
//            if
//                (y < 7 && x == 0 || y < 7 && x == 11)//stars
//            {
//                SetConsoleTextAttribute(h, 16);
//                cout << symbol << symbol;
//            }
//            else if(y < 7 && x <= 10 && y % 2 !=0 && x % 2 !=0)//stars
//            {
//                SetConsoleTextAttribute(h, 7);
//                cout << star;
//                SetConsoleTextAttribute(h, 16);
//                cout << symbol;
//            }
//            else if (y < 7 && x <= 10 && y % 2 == 0 && x % 2 == 0 )
//            {
//                SetConsoleTextAttribute(h, 7);
//                cout << star;
//                SetConsoleTextAttribute(h, 16);
//                cout << symbol;
//            }
//            else if (y < 7 && x <= 10)//Frenche blue
//            {
//                SetConsoleTextAttribute(h, 16);
//                cout << symbol << symbol;
//            }
//            else if (y % 2 != 0)//white
//            {
//                SetConsoleTextAttribute(h, 7);
//                cout << symbol << symbol;
//            }
//            else if (y %2 == 0)//Red
//            {
//                SetConsoleTextAttribute(h, 4);
//                cout << symbol << symbol;
//            }
//        }
//        cout << "\n";
//    }
//}
