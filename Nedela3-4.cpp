#include <iostream>
#include <math.h> 
#include <fstream>

using namespace std;

int main()
{
	std::fstream file; // ������� ������ ������ ifstream
	file.open("Nedela3-4_Storage.txt",std::ios::out); // ��������� ����
	//file<<""<<std::endl;

	int Zadanie1,y;
	std::cout << "Zadaniye 1" << std::endl << std::endl;
//1 ������� ������� �� ����� � ����� �� �����, ������ ���������� ����� � ������ ������ ����� ������ ������. 
//���������� ����� � ������ ������������ (����� �� �����).

	std::cin >>  Zadanie1;
    for(int i=1; i < Zadanie1+1; i++){
       for(int j=0; j < i; j++) 
		   std::cout << 0;
       std::cout << std::endl;
	}
   std::cout << std::endl; 

//2� ������� ��������������� ������� (��� � �������� ����� ������������):
    std::cout << "Zadaniye 2c" << std::endl << std::endl;
    file<<"Zadaniye 2c"<<std::endl;
    float dx, xs, xf;
    const float eps = 0.000001;  // ��, ��� ������ ����� ����� ������� ����

    std::cout << "Enter [xs, xf]: ";
    std::cin >> xs >> xf;
	file<< xs << xf <<std::endl;

    std::cout << "Enter dx: ";
    std::cin >> dx;
	file<< dx <<std::endl;

    // ��������� �������
    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    float f;
    float x = xs;  // �������� ������� � ������ ���� ���������
    while (x < xf){
       if(fabs(x - 2) < eps)
	   {
           std::cout << "\t"
                     << x
                     << "\t\t Divide on zero"
                     << std::endl;
			    file << "\t"
			         << x
			         << "\t\t Divide on zero"
			         << std::endl;
	   }
       else 
	   {
		   f = -x*(3+2*x)*(3+2*x)+3*x+sin(2*x);

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << f
                     << std::endl;
				file << "\t"
			         << x
			         << "\t\t"
			         << std::endl;
       }
       x += dx;
    }
//2k ������� ��������������� ������� (��� � �������� ����� ������������):
	std::cout << "Zadaniye 2k" << std::endl << std::endl;
    file<<"Zadaniye 2k"<<std::endl;
    std::cout << "Enter [xs, xf]: ";
    std::cin >> xs >> xf;

    std::cout << "Enter dx: ";
    std::cin >> dx;

    // ��������� �������
    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(5);
    x = xs;  // �������� ������� � ������ ���� ���������
    while (x < xf){
       if(fabs(x - 2) < eps)
	   {
           std::cout << "\t"
                     << x
                     << "\t\t Divide on zero"
                     << std::endl;
			    file << "\t"
			         << x
			         << "\t\t Divide on zero"
			         << std::endl;
	   }
       else 
	   {
		   f = -x*(3+2*x)*(3+2*x)+3*x+sin(2*x);

           std::cout << "\t"
                     << x
                     << "\t\t"
                     << f
                     << std::endl;
		        file << "\t"
			         << x
			         << "\t\t"
			         << std::endl;
       }
       x += dx;
    }
//4f ������� ���� ������� y=f(x). ����� �������� ������� �� x:
	std::cout << "Zadaniye 4f" << std::endl << std::endl;
    file<<"Zadaniye 4f"<<std::endl;

	std::cout << "X";
	std::cin >> x;
	if (x>5) { std::cout<<"y = " << 2*(x*x)+10 << std::endl; file<<"y = "<< 2*(x*x)+10 <<std::endl;}
	else {std::cout << "X !>5,Function does not exist"; file<< "X !>5,Function does not exist" <<std::endl;}
	std::cout<<"y = " << 0 << std::endl; file<<"y = " << 0 << std::endl;
	std::cout << "X";file << "X";
	std::cin>> x;
	if (x<5) { std::cout<<"y = " << 2*abs(x+6)-(x*x) << std::endl; file<<"y = "<< 2*abs(x+6)-(x*x) <<std::endl;}
	else {std::cout << "X !<5,Function does not exist"; file<< "X !<5,Function does not exist" <<std::endl; }

//�������. ������� ����� � ������ �� 16,17,21 ��. 
//��� �������� 185 �� ����� ������, �� �������� �����.
	std::cout << "Zadaniye pro towar" << std::endl << std::endl;
    file<<"Zadaniye pro towar"<<std::endl;

	std::cout << "16*4+21*6" << std::endl;
	file<<"16*4+21*6"<<std::endl;
//3f ������������ ����� ����� � � �. ��������� y:
	std::cout << "Zadaniye 3f" << std::endl << std::endl;
    file<<"Zadaniye 3f"<<std::endl;

	int chislo, kolichestvo;
	y = 0;
	std::cout <<"chislo, kolichestvo ";
	std::cin >> chislo >> kolichestvo; //�����, ���������� �����
	for (int i=0;i<kolichestvo;i++)
	{
	y += -kolichestvo*chislo;
	}
	std::cout<<"y = " << y << std::endl;
	file<<"y = " << y << std::endl;
//3j
	std::cout << "Zadaniye 3j" << std::endl << std::endl;
	file << "Zadaniye 3j" << std::endl << std::endl;

	y = 0;
	std::cout <<"chislo, kolichestvo ";
	std::cin >> chislo >> kolichestvo; //����� //���������� �����
	for (int i=0;i<kolichestvo;i++)
	{
	y += -kolichestvo*(1/chislo);
	}
	std::cout<<"y = " << y << std::endl;
	file<<"y = " << y << std::endl;
	std::getchar();
	std::getchar();
	return 0;

}


