//1. Загадать случайно 100 целых чисел в диапазоне от - 100 до 100. 
//Вычислить процент положительных чисел, процент отрицательных чисел и процент нулей.
//Вычислить процент чётных чисел и процент нечётных.

//2. Вывести на экран таблицу умножения(таблицу Пифагора).

//3. Ежемесячная стипендия студента составляет N гривен, а расходы на проживание превышают стипендию и составляют M
//гривен в месяц. Рост цен ежемесячно увеличивает расходы на 3 % .
//Составьте программу расчёта суммы денег, которую необходимо единовременно попросить у родителей,
//чтобы можно было прожить учебный год(10 месяцев), используя только эти деньги и стипендию.

//4. Осуществить циклический сдвиг влево введённого числа на N разрядов(например, при сдвиге числа 12345 влево
//на 3 разряда получится число 45123).

//5. Написать программу, которая выводит на экран все простые числа в диапазоне от 2 до 10.000.000.

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
//    for (int y = 0; y < height/2; y++)
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

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{

    int width = 29;
    int height = 20;
    char symbol = 178;
    for (int y = 0; y < height; y++)
    {
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        for (int x = 0; x < width; x++)
        {
            if (y == 0 || x >= width / 3 && x <= width * 2 / 3)
            {
                SetConsoleTextAttribute(h, 7);
            }
            else if (y == 0 || x > width * 2 / 3)
            {
                SetConsoleTextAttribute(h, 4);
            }
            else if (y == 0 || x <= width/3)
            {
                SetConsoleTextAttribute(h, 16);
            }
           
            
            
            cout << symbol << symbol;
        }
        cout << "\n";
    }
}


