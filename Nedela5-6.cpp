#include <iostream>
#include <math.h> 


int main()
{
	int arr[20]; //�������������� ������ �������� 20 �����
	int Zadanie2c = 0; //���������� ��� ������� 2�.
	int Zadanie2g = 0; //���������� ��� ������� 2g.
	int Zadanie5max = 0; int Zadanie5indexmax = 0; //���������� ��� ������� 5 ������������ ������� �������
	int Zadanie5min = 20; int Zadanie5indexmin = 0; 
	int Zadanie4ot = 0; int Zadanie4pol = 0; //���������� ��� ������� 4
	int ZadannoeChislo = 0; int Kolichestvo = 0; std::cin >> ZadannoeChislo; // ���� ��������� ����� ��� ������� 10
	int Zadanie14� = 0; //������� 14

	for(int i=0; i<20; i++)//�������� � ������ ��������� �������
	{
       arr[i] = rand() % 20 -10; //������� 1�. ��������� ������ ������� ������� ���������� �������� � ��������� [-10;10] 
	   //������� 2�. ��������� ����� ��������� ������� ������� 3.
	   if (arr[i] > 3) { Zadanie2c+=arr[i]; }; //������� 2.
	   //������� 2�. ��������� ����� ��������� ������� ������� 5.
	   if (arr[i] > 3) { Zadanie2g+=arr[i]; }; //������� 2g
	   //������� 5. ����� ����������/���������� ������� ������� � ��� ����� �� �������
	   if (arr[i] > Zadanie5max) { Zadanie5max = arr[i]; Zadanie5indexmax=i; }; //���������� ������� ������� � ��� ������
	   if (arr[i] < Zadanie5min) { Zadanie5min = arr[i]; Zadanie5indexmin=i; }; //���������� ������� ������� � ��� ������
	   //������� 4. ��������� ������������ �������������/������������� ��������� �������
	   if (arr[i] < 0) { Zadanie4ot*=arr[i]; }; 
	   if (arr[i] > 0) { Zadanie4pol*=arr[i]; }; 
	   //������� 10. ��������� ���������� (� ������� �� �����) ��������� �������, ������� ��������� �����
	   if (arr[i] > ZadannoeChislo) { Kolichestvo++; }; 
	   //������� 12. ��������� ��� �������� �������� ������� �� 3, � ������ � 2 ����
	   if (arr[i] % 2 == 0) {arr[i]=arr[i]*2;} else {arr[i]+=3;}//������� �������� ����� �� �������. ���� ����� ������ �������� �� 2, ���� ���, ���������� 3.
	   //������� 14�.����� ���������� ������� ������� ����� ��������� � �������� ���������.
	   if (i % 2 != 0) {if (arr[i] > Zadanie14�) { Zadanie14� = arr[i];} }

	}
	std::cout << Kolichestvo << std::endl;//����� �� ����� ����� ��� ������� 10


	std::getchar();
	std::getchar();
	return 0;
}

