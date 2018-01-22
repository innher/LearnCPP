#include <iostream>
using namespace std;

struct Teacher
{
	char name[64];
	int age;
};
//in c
void coutT1(Teacher *pT)
{
	cout << pT->age << endl;
}
//reference in c++
void coutT2(Teacher &Tch)	//reference
{
	cout << Tch.age << endl;
	Tch.age = 77;
}
void coutT3(Teacher Tch)	//same to Tch = t3
{
	cout << Tch.age << endl;
	Tch.age = 66;			//change value about Tch, do not change t3 
}
int main()
{
	Teacher t1;
	t1.age = 35;
	coutT1(&t1);

	Teacher t2;
	t2.age = 45;
	coutT2(t2);	//Tch is the cname of t2
	coutT2(t2);	//t2.age == 77

	Teacher t3;
	t3.age = 55;
	coutT3(t3);
	coutT2(t3);	//t3.age == 55(t3.age != 65)

	system("pause");
	return 0;
}