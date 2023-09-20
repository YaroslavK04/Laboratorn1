#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

struct student {
	string name, famil, facult, Nomstud;
}stud[5];

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");
	string namepoisk, familpoisk, facultpoisk, Nomstudpoisk;

	int v = 0;
	while (v != 1 && v != 2) {
		cout << "��������:\n1 - ������ � ��������\n2 - ������ �� ����������\n";
		cin >> v;
	}
	if (v == 1) { // ������� 1-4
		int size1 = 0, size2 = 0;
		float** mas;
		while (size1 < 1) {
			cout << "������� ����� ��������: ";
			cin >> size1;
		}
		while (size2 < 1) {
			cout << "������� ����� �����: ";
			cin >> size2;
		}
		mas = new float* [size1]; // ������ ��������� ������ 
		for (int i = 0; i < size1; i++) {
			mas[i] = new float[size2];
		}

		float max, min;
		cout << "��������, ��� ������� ������:\n1 - ��������� ������ ���������� ������� \n2 - ��������� ������� \n";
		int vibor;
		cin >> vibor;
		if (vibor == 1) { // ��������� ������ ���������� ������� 
			for (int i = 0; i < size1; i++) {
				for (int o = 0; o < size2; o++) {
					mas[i][o] = (rand() % 100 - 50)*0.1;
					cout << mas[i][o] << " ";
				}
				cout << "\n";
			}

		}
		else if (vibor == 2) { // ��������� ������ � ������ 
			for (int i = 0; i < size1; i++) {
				for (int o = 0; o < size2; o++) {
					cout << "������� ����� : ";
					cin >> mas[i][o];
				}
				cout << "\n";
			}
			for (int i = 0; i < size1; i++) { // ������� ����������� ������
				for (int o = 0; o < size2; o++) {
					cout << mas[i][o] << " ";
				}
				cout << "\n";
			}
		}

		max = mas[0][0];
		min = mas[0][0];
		float sum;

		float di1 = 0, di2 = 0;
		if (size1 == size2) { // ������� ����� ����� ��������� ���������� �������
			for (int i = 0; i < size1; i++) {
				di1 += mas[i][i];
				di2 += mas[i][size1 - i - 1];
			}
			cout << "������ ���������: " << di1 << "\n";
			cout << "������ ���������: " << di2 << "\n";
		}
		else { cout << "������� �� ����������"; }

		for (int i = 0; i < size1; i++) {
			sum = 0;
			for (int o = 0; o < size2; o++) {
				sum = sum + mas[i][o]; // ������� ����� ����� � ������ 
				if (max < mas[i][o]) max = mas[i][o]; // ���� ���� � ��� ����� 
				if (min > mas[i][o]) min = mas[i][o];
			}
			cout << "\n ����� ����� " << i + 1 << " ������: " << sum << "\n";
		}
		cout << "min = " << min << "\nmax = " << max << "\n�������� = " << max - min << "\n";
	}
	else { // ������� 5
		v = 0;
		while (v != 1 && v != 2) {
			cout << "��������:\n1 - ��������� ������\n2 - ��������� ���������\n";
			cin >> v;
		}
		if (v == 1) { // ���������� ��������� ��������� ������� 
			for (int i = 0;i < 5;i++) {
				cout << "������� ��� " << i + 1 << " �������� : ";
				cin >> stud[i].name;
				cout << "������� ������� " << i + 1 << " �������� : ";
				cin >> stud[i].famil;
				cout << "������� ��������� " << i + 1 << " �������� : ";
				cin >> stud[i].facult;
				cout << "������� ����� " << i + 1 << " �������� : ";
				cin >> stud[i].Nomstud;
				cout << "\n";
			}
		}
		else { //  ���������� ��������� ��������� � ��������� 
			stud[0].name = "�������";
			stud[0].famil = "������";
			stud[0].facult = "���";
			stud[0].Nomstud = "7734";

			stud[1].name = "����";
			stud[1].famil = "��������";
			stud[1].facult = "����";
			stud[1].Nomstud = "7389";

			stud[2].name = "����";
			stud[2].famil = "�������������";
			stud[2].facult = "���";
			stud[2].Nomstud = "0654";

			stud[3].name = "�������";
			stud[3].famil = "��������";
			stud[3].facult = "���";
			stud[3].Nomstud = "23";

			stud[4].name = "�������";
			stud[4].famil = "�����������";
			stud[4].facult = "�����";
			stud[4].Nomstud = "666";

		}
		for (int i = 0;i < 5;i++) { // ������� ����������� ������ 
			cout << i + 1 << " ������� : \n";
			cout << "��� :" << stud[i].name << "\n";
			cout << "������� :" << stud[i].famil << "\n";
			cout << "�������� :" << stud[i].facult << "\n";
			cout << "����� :" << stud[i].Nomstud << "\n";
			cout << "\n";
		}
		// ������ ��������� ��� ������ �������� 
		cout << " ����� �������� (���� �������� �� ����� ������� '-') : \n ������� ��� : ";
		cin >> namepoisk;
		cout << " ������� ������� : ";
		cin >> familpoisk;
		cout << " ������� ��������� : ";
		cin >> facultpoisk;
		cout << " ������� ����� �������� : ";
		cin >> Nomstudpoisk;
		int shet = 0;
		string none = "-";

		for (int i = 0; i < 5; i++) { // ������������ ����� �������� �� �������� ���� ���������� 
			shet = 0;
			if (stud[i].name == namepoisk || namepoisk == none) {
				shet++;
			}
			if (stud[i].famil == familpoisk || familpoisk == none) {
				shet++;
			}
			if (stud[i].facult == facultpoisk || facultpoisk == none) {
				shet++;
			}
			if (stud[i].Nomstud == Nomstudpoisk || Nomstudpoisk == none) {
				shet++;
			}
			if (shet == 4) {
				cout << "\n��� :" << stud[i].name << "\n";
				cout << "������� :" << stud[i].famil << "\n";
				cout << "�������� :" << stud[i].facult << "\n";
				cout << "����� :" << stud[i].Nomstud << "\n";

			}


		}

	}
	system("pause");
	return 0;
}