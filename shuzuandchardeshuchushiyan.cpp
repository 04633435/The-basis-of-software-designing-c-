#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[] = {'h','e','l','l','o','\0'};
	char buf[100] = {0};      //想看一下這樣賦值的結果是什麽，爲什麽賦0不會報錯。c++中 #define Null 0
	char cr = 0;
	int num = 2;
	char str_2[] = {"hello"};
	char *str_point = str;
	int *num_point = &num;
	
	cout << str << endl;
	cout << *str_point << endl;
	cout << buf[0] << endl;
	cout << cr << endl;
	cout << strlen(buf) << endl;
	cout << num << endl;
	cout << *num_point * 2<< endl;
	cout << str_2 << endl;
}