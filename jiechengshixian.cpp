#include <iostream>
using namespace std;

int jiechengyunsuan_1(int n){           //枚举的思想 n*(n-1)*...*1
	int sum = 1;
	for(i = 0;i <= n; i++)
		sum = sum * i;
	return sum;
}

int jiechengyunsuan_2(int n){           //若每一阶乘的值都已知
	int j[10];
	j[1] = 1;
	for(i = 2; i <= n; i++)
		m[i] = m[i] * m[i-1];
	return m[n];
}

int jiechengyunsuan_3(int n){           //n! = n*(n-1)!,递归的思想，若方法具有重复性，可运用该思想来解决问题
	if (n == 1)
		return 1;
	return n*jiechengyunsuan_3(n-1);
}

void main(){
	int n , summary;
	summary = jiechengyunsuan_meiju(n);
	cout << "阶乘的结果是" << summary << endl;
	
}