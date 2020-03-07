#include <iostream>

int main()
{
	int num1;
	int num2;
	int num3;
	std::cout << "Zadaniye 1" << std::endl << std::endl;
//1 Задание
   std::cout << "*     *" << std::endl
             << "**   **" << std::endl
             << "* * * *" << std::endl
             << "*  *  *" << std::endl
             << "*     *" << std::endl
             << "*     *" << std::endl
             << "*     *" << std::endl << std::endl;
   std::cout << "Zadaniye 2" << std::endl << std::endl;
//2с Задание    
   std::cout << "Storona: ";
   std::cin >>  num1;

   std::cout << "Ploshad: " << num1 * num1 << std::endl;
   std::cout << "Peremiter: " << num1 * 4 << std::endl<< std::endl;

   

   std::cout << "Zadaniye 6" << std::endl << std::endl;
   //6 Задание  Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а также
   //разность удвоенной суммы первого и третьего чисел и утроенного второго числа.
   std::cout << "1 Chislo: ";
   std::cin >>  num1;
   std::cout << "2 Chislo: ";
   std::cin >>  num2;
   std::cout << "3 Chislo: ";
   std::cin >>  num3;
   std::cout << std::endl;
   std::cout << "Srednyee Arifmeticheskoe: " << (num1 + num2 + num3)/3 << std::endl<< std::endl;
   std::cout << "Raznost: " << (num1 + num3)*2-num2*3 << std::endl<< std::endl;

   std::cout << "Zadaniye 8C" << std::endl << std::endl;
   //Вычислите значение выражения: (x+1)^2+3(x+1) при а) x=1.7; б) x=3. Ответ: а) 15.39 б) 28
   std::cout << "a: " << (1.7+1)*(1.7+1)+3*(1.7+1) << std::endl;
   std::cout << "b: " << (3+1)*(3+1)+3*(3+1) << std::endl << std::endl;
   
   std::cout << "Zadaniye 9C" << std::endl << std::endl;
   //Сделать конвертер величин. Формат ввода: НаправлениеПеревода Величина.
   //Площадь (метры, гектар, акры)

   std::cout << "Velichina v kilometrah: ";
   std::cin >>  num2;
   std::cout << "1-Metri,2-Gectar,3-Akri: ";
   std::cin >>  num1;
   std::cout << std::endl;
   if(num1 == 1) {std::cout << "Iscomaya Velichina: " << num2*1000 << std::endl<< std::endl;}
   if(num1 == 2) {std::cout << "Iscomaya Velichina: " << num2*0.4 << std::endl<< std::endl;}
   if(num1 == 3) {std::cout << "Iscomaya Velichina: " << num2*0.004 << std::endl<< std::endl;}

   std::cout << "Zadaniye 12" << std::endl << std::endl;
   //Вводятся два целых числа. Проверить делится ли первое на второе. 
   //Вывести на экран сообщение об этом, а также остаток (если он есть) и частное (в любом случае).
   std::cout << "1 Chislo: ";
   std::cin >>  num1;
   std::cout << "2 Chislo: ";
   std::cin >>  num2;
   std::cout << std::endl;
   if(num1%num2 == 0) { std::cout << "Delitsya"<< std::endl; } else { std::cout << "Ne Delitsya"<< std::endl;  std::cout << "Ostatok " << num1%num2 << std::endl; }
   std::cout << std::endl;
   std::cout << "Raznost = " << num1-num2 << std::endl;

   std::getchar();
   std::getchar();
   return 0;
}

