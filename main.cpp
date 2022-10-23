// Employee Management System in c++
#include<iostream>
#include<conio.h>
using namespace std;
int i=0;
struct Employee
{
	int id;
	float salary;
	string name,address,phone,deparment;
}E[25];
void insert() // Insert New Employee Record
{
	system("cls");
	cout<<"\n\n INSERT EMPLOYEE RECORD";
	cout<<"\n\n ENTER EMPLOYEE ID -> ";
	cin>>E[i].id;
	cout<<"\n\n ENTER EMPLOYEE NAME -> ";
	cin.ignore();
	getline(cin,E[i].name);
	cout<<"\n\n ENTER EMPLOYEE ADDRESS -> ";
	cin.ignore();
	getline(cin,E[i].address);
	cout<<"\n\n ENTER EMPLOYEE phone -> ";
	cin>>E[i].phone;
	cout<<"\n\n ENTER EMPLOYEE DEPARTMENT -> ";
	cin.ignore();
	getline(cin,E[i].deparment);
	cout<<"\n\n ENTER EMPLOYEE SALARY -> ";
	cin>>E[i].salary;
	i++;
	cout<<"\n\n *** EMPLOYEE RECORD INSERTED ***";
}
main()
{	
	p:
	system("cls");
	int choice;
	cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
	cout<<"\n\n 1- INSERT EMPLOYEE";
	cout<<"\n\n 2- SEARCH EMPLOYEE";
	cout<<"\n\n 3- UPDATE EMPLOYEE";
	cout<<"\n\n 4- DELETE EMPLOYEE";
	cout<<"\n\n 5- SHOW ALL EMPLOYEE";
	cout<<"\n\n 6- EXIT";
	cout<<"\n\n ENTER YOUR CHOICE -> ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			insert();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			exit(0);
		default:
			cout<<"\n\n INVALID OPTION...PLEASE TRY AGAIN";
	}
	getch();
	goto p;
}
