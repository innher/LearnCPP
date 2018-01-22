#include <iostream>
using namespace std;

int main1()
{
	int a = 10;
	int &b = a; //b is cname of a
	//int &c;	Error:	You Must assign it a value until you declare it(standard useage)
	a = 11;
	{
		int *p = &a;
		*p = 12;
		cout << "a: " << a << endl;	//a = 12
	}
	b = 14;

	cout << "a: " << a << " b: " << b << endl;	//a = 14, b = 14

	system("pause");
	return 0;
}