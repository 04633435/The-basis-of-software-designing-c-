#include <iostream>

using namespace std;

int sos(int a, int b)
{
	return a * a + b * b;
}

float sos(float a, float b)
{
	return a * a + b * b;
}

int main()
{
	int a = 3, b = 5;
	float c = 3.9, d = 9.1;
	cout << "The sum of the squre is (int)" << sos(a, b) << endl;
	cout << "The sum of the squre is (float)" << sos(c, d) << endl;
	return 0;
}