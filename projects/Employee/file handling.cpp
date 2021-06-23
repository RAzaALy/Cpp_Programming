#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
using namespace std;
class Employee
{
private:
	char id[15];
	char name[30];
	char department[30];
	double salary;

public:
	Employee() //coustructor for object and pass the default values:
	{
		id[0] = '\0';
		name[0] = '\0';
		department[0] = '\0';
		salary = 0;
	}
	void getEmployeedata()
	{
		cout<<"Please Enter the following information:";
		cout << "\n\nENTER EMPLOYEE ID:";
		fflush(stdin);
		gets(id);
		cout << "\nENTER EMPLOYEE NAME:";
		fflush(stdin);
		gets(name);
		cout << "\nENTER EMPLOYEE DEPARTMENT:";
		fflush(stdin);
		gets(department);
		cout << "\nENTER EMPLOYEE SALARY:";
		cin >> salary;
	}
	void showEmployeedata()
	{
		fflush(stdin);
		cout << "\n\nEMPLOYEE ID:" << id << endl;
		fflush(stdin);
		cout << "EMPLOYEE NAME:" << name << endl;
		fflush(stdin);
		cout << "EMPLOYEE DEPARTMENT:" << department << endl;
		fflush(stdin);
		cout << "EMPLOYEE SALARY:" << salary << "Rs" << endl;
	}
	void storeEmployee();
	void viewAllEmployee();
	void searchEmployee();
	void deleteEmployee();
	void updateEmployee();
};
void Employee::storeEmployee()
{
	if (id == 0 && salary == 0)
	{
		cout << "\nEMPLOYEE DATA NOT INITILAZED!!!";
	}
	else
	{
		ofstream fout;
		fout.open("filehandling.txt", ios::app | ios::binary);
		fout.write((char *)this, sizeof(*this));
		fout.close();
	}
}
void Employee::viewAllEmployee()
{
	ifstream fin;
	fin.open("filehandling.txt", ios::in | ios::binary);
	if (!fin)
		cout << "\nFILE NOT FOUND!!!";
	else
	{
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
			showEmployeedata(); //showEmployeedata is member function:
			fin.read((char *)this, sizeof(*this));
		}
		fin.close();
	}
}
void Employee::searchEmployee()
{
	char d[15];
	cout << "ENTER EMPLOYEE ID FOR SEARCHING:";
	cin.ignore();
	cin.getline(d, 15);
	int f = 0;
	ifstream fin;
	fin.open("filehandling.txt", ios::in | ios::binary);
	if (!fin)
		cout << "\nFILE NOT FOUND!!!";
	else
	{
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
			if (!strcmp(d, id))
			{ //also write as this->title:
				f++;
				showEmployeedata();
			}
			fin.read((char *)this, sizeof(*this));
		}
		if (f == 0)
			cout << "\nRECORD NOT FOUND!!!";
		fin.close();
	}
}
void Employee::deleteEmployee()
{
	int f = 0;
	char d[15];
	cout << "ENTER EMPLOYEE ID YOU WANT TO DELETE:";
	cin.ignore();
	cin.getline(d, 15);
	ifstream fin;
	ofstream fout;
	fin.open("filehandling.txt", ios::in | ios::binary);

	if (!fin)
		cout << "\n FILE NOT FOUND!!!";
	else
	{
		fout.open("temp.txt", ios::out | ios::binary);
		fin.read((char *)this, sizeof(*this));
		while (!fin.eof())
		{
			if (strcmp(d, id)) //if don't compare than write in temp:
				fout.write((char *)this, sizeof(*this));
			fin.read((char *)this, sizeof(*this));
		}
		fin.close();
		fout.close();
		remove("filehandling.txt");
		rename("temp.txt", "filehandling.txt");
	}
}
void Employee::updateEmployee()
{
	int f = 0;
	char d[15];
	cout << "ENTE EMPLOYEE ID YOU WNAT TO UPDATE:";
	cin.ignore();
	cin.getline(d, 15);
	fstream file;
	file.open("filehandling.txt", ios::in | ios::out | ios::ate | ios::binary);
	file.seekg(0);
	file.read((char *)this, sizeof(*this));
	while (!file.eof())
	{
		if (!strcmp(d, id))
		{
			f = 1;
			cout << "\nENTER NEW DATA FOR Employee:\n";
			getEmployeedata();
			file.seekp(sizeof(*this) - file.tellp());
			file.write((char *)this, sizeof(*this));
		}
		file.read((char *)this, sizeof(*this));
	}
	if (f == 0)
		cout << "RECORD NOT FOUND!!!";
	file.close();
}
int menu()
{  
	int choice;
	cout << "\n\n\n===============================\n";
	cout << "***EMPLOYEE_MANAGMENT_SYSTEM***\n";
	cout << "===============================\n";
	cout << "\n1.INSERT EMPLOYEE RECORD:";
	cout << "\n2.VIEW ALL EMPLOYEE RECORD:";
	cout << "\n3.SEARCHING IN A RECORD:";
	cout << "\n4.DELETE RECORD:";
	cout << "\n5.UPDATE RECORD:";
	cout << "\n6.EXIT PROGRAME:";
	cout << "\n\n\nENTER YOUR CHOICE:";
	fflush(stdin);
	cin>>choice;
	return (choice);
}
int main()
{
	Employee e1;
	system("color 0f");
	while (1)
	{
		system("cls");
		switch (menu())
		{
		case 1:
			e1.getEmployeedata();
			e1.storeEmployee();
			cout << "\nRECORD INSERTED SUCCESSFULLY!:";
			break;
		case 2:
			e1.viewAllEmployee();
			break;
		case 3:
			e1.searchEmployee();
			break;
		case 4:
			e1.deleteEmployee();
			break;
		case 5:
			e1.updateEmployee();
			break;
		case 6:
			cout << "\t\t\nTHANK YOU!!!";
			getch();
			exit(0);
		default:
			cout << "\nINVALID CHOICE!!!";
			
		}
		getch();
	}

	return 0;
}
