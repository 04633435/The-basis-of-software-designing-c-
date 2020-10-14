#include<iostream>

using namespace std;
##这程序是干嘛的？？？
int fib(int n)
{
	if(n == 2 || n == 1)
	{
		return 1;
	}
	
	int re = fib (n - 1) + fib (n - 2);
	return re; 
}

int main()
{
	int x;
	cin >> x;
	int result = fib (x);
	cout << "结果是" <<result << endl;
	return 0;
}