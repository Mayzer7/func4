#include <iostream> 
#include <math.h>
using namespace std;

void func(float a, float p, float s)
{
	p = 4 * a;
	s = a * a;
	cout << "Периметр равен = " << p << endl;
	cout << "Площадь равна = " << s << endl;
	(p > s) ? cout << "Больше периметр квадрата" : cout << "Больше площадь квадрата";
}


int main()
{
	float a;
	float p;
	float s;
	cout << "Введите сторону квадрата " << endl;
	cin >> a;
	func(a, p, s);
	return 0;
}