#include<iostream>
#include<stdio.h>
#define size 20
using namespace std;
class Person{
	char name[size];
	int age;
	public:
		void readPerson(void)
		{
			cout<<endl<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the age: ";
			cin>>age;
			cout<<endl;
		}
		void displayPerson(void)
		{
			cout<<"Name: ";
			puts(name);
			cout<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class Student:public Person
{
	int rollno;
	float average;
	public:
		void readStudent(void)
		{
			readPerson();
			cout<<"Enter the Roll nubmer: ";
			cin>>rollno;
			cout<<"Enter the average marks: ";
			cin>>average;
		}
		void displayStudent(void)
		{
			displayPerson();
			cout<<"Roll number: "<<rollno<<endl;
			cout<<"Average marks: "<<average<<endl;
		}
		float getAverage(void)
		{
			return average;
		}
};
class gradStudent:public Student
{
	char subject[size];
	char working;
	public:
		void readGrad(void)
		{
			readStudent();
			cout<<"Enter the subject: ";
			cin>>subject;
			cout<<"Working (y/n)?";
			cin>>working;
		}
		void displayGrad(void)
		{
			displayStudent();
			cout<<"Subject: "<<subject<<endl;
		}
		char workStatus(void)
		{
			return working;
		}
};
int main()
{
	gradStudent grad[3];
	int year,number,div=0,workp=0,topscore=0,score,i;
	cout<<"Enter the year: ";
	cin>>year;
	for(i=0;i<3;i++)
	{
		grad[i].readGrad();
		if(grad[i].workStatus()=='y')
			workp++;
		score=grad[i].getAverage();
		if(score>=60)
			div++;
		if(topscore<score)
		{
			number=i;
			topscore=score;
		}
	}
	cout<<endl<<"--- Report of the year "<<year<<" ---"<<endl<<endl;
	cout<<"Working graduates: "<<workp<<endl;
	cout<<"Non working graduates: "<<i-workp<<endl;
	cout<<"Details of the top scorer: "<<endl;
	grad[number].displayGrad();
	return 0;
}
