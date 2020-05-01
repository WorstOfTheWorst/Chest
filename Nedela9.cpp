#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;
const int string_len = 3;

std::string arrvideocard[10] = {"GeForce_GTX1660_Super","GeForce_GTX1660_Ti", "GeForce_RTX_2060", "GeForce_RTX2060_Super", "GeForce_RTX_2070", "GeForce_RTX_2070_Super", "GeForce_RTX_2080", "GeForce_RTX_2080_Super", "GeForce_RTX_2080_Ti"};
std::string arrprocesser[5] = {"Intel_Core_i9", "Intel_Core_M", "Intel_Core_i3", "Intel_Core_i5", "Intel_Core_i7"};
int arrbit[4] = {16,32,64,128};

struct HardDrive
{
	string name;
	int speed;
	int memory;
};

struct PC
{
	string name;
	string videocard;
	int bit;
	string processer;
	HardDrive hardrive;
};

void randString(string &str, const int len){
	static const char alphabet[] =
        	"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// очищаем и заносим данные
	str.clear();
	str.append(len, ' ');

	for(int i=0; i < str.length(); i++){
    	int r = rand() % (sizeof(alphabet)-1);
    	str[i] = alphabet[r];
	}
	str[str.length()] = 0;  // последний символ сообщает о том, что строка закончилась
}

void showPC(const PC p){
    cout << p.name<< "\t"
		 << p.videocard << "\t"
         << p.bit << "\t"
		 << p.processer << "\t"
		 << p.hardrive.name << "\t"
		 << p.hardrive.speed << "\t"
		 << p.hardrive.memory << endl;
}

void showCharacteristick(const PC pc[], const int len){
	cout << "name \t"
     	<< "videocard          \t"
     	<< "bit \t"
     	<< "processer"
     	<< "       h.name"
		<< "  h.speed"
		<< " h.memory" << endl;

	for(int i=0; i<len; i++){
    	showPC(pc[i]);
	}

	cout << endl;
}


void showHardDrive(const HardDrive h){
    cout << h.name << "\t"
		 << h.memory << "\t"
		 << h.speed << endl;
}

void initPC(PC pc[], const int len){
	for(int i=0; i<len; i++){
    	// PC
		randString(pc[i].name, string_len);
    	pc[i].videocard = arrvideocard[rand() % 9];
    	pc[i].bit = arrbit[rand() % 3];
		pc[i].processer = arrprocesser[rand() % 4];

    	// HardDrive
    	randString(pc[i].hardrive.name, string_len);
		pc[i].hardrive.speed = rand() % 10000;
		pc[i].hardrive.memory = rand() % 1000000;
	}
}

void writeTextFile(const PC pc[], const int l){
	ofstream f;

	f.open("Nedela9_Storage.txt");
	for(int i = 0; i < l; i++)  // Все атрибуты struct  в одной строке
    	  f << pc[i].name<< " "
		    << pc[i].videocard << "  "
      		<< pc[i].bit << "  "
			<< pc[i].processer << "  "
			<< pc[i].hardrive.name << "  "
      		<< pc[i].hardrive.speed << "  "
			<< pc[i].hardrive.memory << endl;
	f.close();
}

void openTextFile(PC pc[], const int l){
	ifstream f;

	f.open("Nedela9_Storage.txt");
	for(int i = 0; i < l; i++)
    	f   >> pc[i].name
		    >> pc[i].videocard
      		>> pc[i].bit
			>> pc[i].processer
			>> pc[i].hardrive.name
      		>> pc[i].hardrive.speed
			>> pc[i].hardrive.memory;
	f.close();
}

void writeBinFile(PC pc[], const int l){
	// in-function WRITE code
	fstream f;
	f.open("Nedela9_Storage.bin.txt", ios::out | ios::binary);
	f.write((char*)pc, sizeof(PC)*l);
	f.close();
}

void openBinFile(PC pc[], const int l){
	fstream f;
	f.open("Nedela9_Storage.bin.txt", ios::in | ios::binary);
	f.read((char*)pc, sizeof(PC)*l);
	f.close();
}


int main()
{
	//Задание 1+
	//Объявить сущности 1 и 2. Описать их свойства. Включить одну сущность в другую. Объявить массив сущностей 1. +
	//Заполнить атрибуты числовыми и текстовыми значениями (диапазон значений определить самостоятельно). +
	//компьютер, жёсткий диск +
	//Задание 2 +
	//Реализовать чтение и запись данных в текстовый файл +

	const int len = 20;
	const int Showmassive = 5;
	PC arrPC[len];

	cout << "First massive PC:\n";
	initPC(arrPC, len);
	writeTextFile(arrPC, len);
	showCharacteristick(arrPC, Showmassive);

	cout << "New massive PC:\n";
	initPC(arrPC, len);
	showCharacteristick(arrPC, Showmassive);

	cout << "Read massive PC:\n";
	openTextFile(arrPC, len);
	showCharacteristick(arrPC, Showmassive);


	std::getchar();
	std::getchar();
	return 0;
}


