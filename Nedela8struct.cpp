#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;
    //Объявить сущность и описать её свойства (характеристики вроде роста, цвета, названия и прочего). +
	//Объявить массивы сущностей. Заполнить атрибуты числовыми и текстовыми значениями (диапазон значений определить самостоятельно).+
	// c. цветок +
	// a. автомобиль +

	//Для каждого из массивов реализовать поиск по ключу (атрибуту структуры). -
    //(В результате должны быть две отдельные функции). +
    //Для каждого из массивов реализовать сортировку по одному ключу.  +
    //(В результате должны быть две отдельные функции). +

int key;
int x;

struct Flowers
{
	string name;
	int live;
	int countLeavs;
	string color;
};

struct Car 
{
	string name;
	int speed;
	int wheels;
	int age;
	string color;
};

void randName(string &str){
    static const char alphabet[] =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
    str = "     ";


    for(int i=0; i < str.length(); i++){
        int r = rand() % (sizeof(alphabet)-1);
        str[i] = alphabet[r];
    }
    str[str.length()] = 0;
}

void showFlower(const Flowers f){
    cout << f.name<< "\t"
         << f.live << "\t"
         << f.countLeavs << "\t"
		 << f.color << endl;
}

void showCar(const Car c){
    cout << c.name<< "\t"
         << c.speed << "\t"
         << c.wheels << "\t"
		 << c.age << "\t"
		 << c.color << endl;
}

void write2File(const Flowers f[],const Car c[], const int l)
{
    ofstream file;
    file.open("Nedela8_Storage.txt");
		file << "Flowers_Live_Leavs_Color________________________________________________" << endl;
		for(int i = 0; i < l; i++){
        file << f[i].name<< "\t"
			 << f[i].live << "\t"
			 << f[i].countLeavs << "\t"
			 << f[i].color << endl;
		}
		file << "Cars_Speed_Wheels_Age_Color________________________________________" << endl;
		for(int i = 0; i < l; i++){
        file << c[i].name<< "\t"
			 << c[i].speed << "\t"
			 << c[i].wheels << "\t"
			 << c[i].age << "\t"
			 << c[i].color << endl;
		}
		file.close();
}

int findFlowersColor(const Flowers f[], const int l, string key){
    int count = 0;
    for(int i=0; i<l; i++){
        if(f[i].color == key){
            showFlower(f[i]);
            count++;
        }
    }
    return count;
}

int findFlowersKey(const Flowers f[], const int l, int key){
    int count = 0;
    for(int i=0; i<l; i++){
        if(f[i].live == key){
            showFlower(f[i]);
            count++;
        }
    }
    return count;
}

int findCarsAge(const Car c[], const int l, int key){
    int count = 0;
    for(int i=0; i<l; i++){
        if(c[i].age >= key){
            showCar(c[i]);
            count++;
        }
    }
    return count;
}

int findCarsKey(const Car c[], const int l, int key){
    int count = 0;
    for(int i=0; i<l; i++){
        if(c[i].age == key){
            showCar(c[i]);
            count++;
        }
    }
    return count;
}


void bubbleSortFlowers(Flowers flowers[], int len) {
    Flowers tmp;
    for(int i = 0; i<len; i++){
        for(int j = len-1; j >= i+1; j--){
            if(flowers[j].live < flowers[j-1].live){
                tmp = flowers[j];
                flowers[j] = flowers[j-1];
                flowers[j-1] = tmp;
            }
        }
    }
}

void bubbleSortCars(Car cars[], int len) {
    Car tmp;
    for(int i = 0; i<len; i++){
        for(int j = len-1; j >= i+1; j--){
            if(cars[j].speed < cars[j-1].speed){
                tmp = cars[j];
                cars[j] = cars[j-1];
                cars[j-1] = tmp;
            }
        }
    }
}

std::string mas[10] = {"Gay","Green", "Yellow", "Dark", "Violet", "Blue", "Purple", "Orange", "Pink"};

int main()
{
	const int len = 20;
    Flowers flowers[len];
	Car cars[len];
	//Цветочки
	//Определение и заполнение массива цветочков
	std::cout << "Flowers_Live____Leavs___Color________________________________________________" << endl;
    for(int i=0; i<len; i++){
        flowers[i].live = rand() % 25;
		flowers[i].countLeavs = rand() % 10;
		flowers[i].color = mas[rand() % 9];
        randName(flowers[i].name);
        showFlower(flowers[i]);
    }
	//Поиск цветочков по элементу
	string color = mas[rand() % 9];
    std::cout << endl << "Find all Flowers which Color is " << color << endl;
    int findFlowers = findFlowersColor(flowers, len, color);
    std::cout << "Total " << findFlowers << " elements" << endl;
	//Поиск цветочков по ключу 
	cout <<"Write find flower age ";
	key; cin >> key;
    std::cout << endl << "Find all Flowers which live is " << key << endl;
    findFlowers = findFlowersKey(flowers, len, key);
    std::cout << "Total " << findFlowers << " elements" << endl;
	//Сортировка цветочков по длительности жизни
	std::cout << endl << "Sorted by live" << endl;
	bubbleSortFlowers(flowers, len);
	for(int i=0; i<len; i++)
			showFlower(flowers[i]);
	//Машинки
	//Определение и заполнение массива машинок
	std::cout << endl;
	std::cout << "Cars____Speed___Wheels__Age_____Color________________________________________" << endl;
    for(int i=0; i<len; i++){
        cars[i].speed = rand() % 1000;
		cars[i].wheels = 2*rand() % 50;
		cars[i].age = rand() % 100;
		cars[i].color = mas[rand() % 9];
        randName(cars[i].name);
        showCar(cars[i]);
    }
	//Поиск машинок по элементу
	int age = rand() % 100;
    std::cout << endl << "Find all Car which age even " << age << endl;
    int findCars = findCarsAge(cars, len, age);
    std::cout << "Total " << findCars << " elements" << endl;
	//Поиск машинок по ключу
	cout <<"Write find сars age ";
	key; cin >> key;
    std::cout << endl << "Find all Car which age " << key << endl;
    findCars = findCarsKey(cars, len, key);
    std::cout << "Total " << findCars << " elements" << endl;
	//Сортировка машинок
	std::cout << endl << "Sorted by speed " << endl;
	bubbleSortCars(cars, len);
	for(int i=0; i<len; i++)
			showCar(cars[i]);
    
	write2File(flowers,cars, len);
	


	std::getchar();
	std::getchar();
    return 0;
}



