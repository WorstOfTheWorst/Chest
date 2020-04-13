#include <iostream>
#include <math.h> 
#include <fstream>

using namespace std;

int main()
{
	std::fstream file; // создаем объект класса ifstream
	file.open("Nedela5-6_Storage.txt",std::ios::out); // открываем файл
	//file<<""<<std::endl;

	int arr[20]; //Инициализируем массив размером 20 ячеек 
	int Zadanie2c = 0; //Переменная для задания 2с.
	int Zadanie2g = 0; //Переменная для задания 2g.
	int Zadanie5max = 0; int Zadanie5indexmax = 0; //Переменные для задания 5 Максимальный элемент массива
	int Zadanie5min = 20; int Zadanie5indexmin = 0; 
	int Zadanie4ot = 1; int Zadanie4pol = 1; //Переменные для задания 4
	int ZadannoeChislo = 0; int Kolichestvo = 0; std::cin >> ZadannoeChislo; // Ввод заданного числа для задания 10
	int Zadanie14с = 0; //Задание 14

	for(int i=0; i<20; i++)//Работаем с каждым элементом массива
	{
       arr[i] = rand() % 20 -10; //Задание 1с. Заполняем каждый элемент массива случайными чисслами в диапазоне [-10;10] 
	   //Задание 2с. Вычислить сумму элементов массива больших 3.
	   if (arr[i] > 3) { Zadanie2c+=arr[i]; }; //Задание 2.
	   //Задание 2g. Вычислить сумму элементов массива меньших 5.
	   if (arr[i] > 3) { Zadanie2g+=arr[i]; }; //Задание 2g
	   //Задание 5. Найти наибольший/наименьший элемент массива и его номер по порядку
	   if (arr[i] > Zadanie5max) { Zadanie5max = arr[i]; Zadanie5indexmax=i; }; //Наибольший элемент массива и его индекс
	   if (arr[i] < Zadanie5min) { Zadanie5min = arr[i]; Zadanie5indexmin=i; }; //Наименьший элемент массива и его индекс
	   //Задание 4. Вычислить произведение отрицательных/положительных элементов массива
	   if (arr[i] < 0) { Zadanie4ot=Zadanie4ot*arr[i]; }; 
	   if (arr[i] > 0) { Zadanie4pol=Zadanie4pol*arr[i]; }; 
	   //Задание 10. Посчитать количество (и вывести на экран) элементов массива, больших заданного числа
	   if (arr[i] > ZadannoeChislo) { Kolichestvo++; }; 
	   //Задание 12. Увеличить все нечётные элементы массива на 3, а чётные в 2 раза
	   if (arr[i] % 2 == 0) {arr[i]=arr[i]*2;} else {arr[i]+=3;}//Находим нечетные числа по условию. Если число четное умножаем на 2, если нет, прибавляем 3.
	   //Задание 14с.Найти наибольший элемент массива среди элементов с нечётным индексами.
	   if (i % 2 != 0) {if (arr[i] > Zadanie14с) { Zadanie14с = arr[i];} }

	}
	std::cout << Kolichestvo << std::endl;//Вывод на экран числа для задания 10
	file<<"Zadanie2c "<<Zadanie2c<<std::endl;
	file<<"Zadanie2g "<<Zadanie2g<<std::endl;
	file<<"Zadanie5 "<<"Max "<<Zadanie5max<<" index "<<Zadanie5indexmax<<" Min "<<Zadanie5min<<" index "<<Zadanie5indexmax<<::endl;
	file<<"Zadanie4 "<<"ot "<<Zadanie4ot<<" pol "<<Zadanie4pol<<std::endl;
	file<<"Zadanie10 "<<Kolichestvo<<std::endl;
	file<<"Zadanie14c "<<Zadanie14с<<std::endl;
	std::getchar();
	std::getchar();
	return 0;
}


