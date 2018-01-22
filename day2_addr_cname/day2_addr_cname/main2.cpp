#include <iostream>
using namespace std;

void swapC(int *, int *);

//swap value in c
void swapC(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}
//swap value in cpp
void swapCpp(int &x, int &y)	//It's no need to assign a value to cname when you use it
{								//as a argument while you declare a function
	int z = x;
	x = y;
	y = z;
}

int main2()
{
	int a = 10;
	int b = 20;

	swapC(&a, &b);	//swap the value in var a and b
	cout << "a: " << a << "\nb: " << b << endl;	//success

	swapCpp(a, b);	//swap the value in var a and b
					//x is the cname of a, and y is the cname of b
	cout << "a: " << a << "\nb: " << b << endl;	//success

	system("pause");
	return 0;
}