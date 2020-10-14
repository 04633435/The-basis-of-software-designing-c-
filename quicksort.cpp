#include <iostream>
using namespace std;

void quicksort(int * array, int len)
{
	//递归终止条件
	if(len <= 1)
		return;
	//创建临时内存空间
	int * left = new int [len], * right = new int [len];
	//创建左右数组索引
	int left_idx = 0, right_idx = 0;
	//选择参考值
	int comp = array[0];
	//将array中的元素放入到临时空间
	for(int i = 1; i < len; i++)
	{
		if(array[i] > comp)
			right[right_idx++] = array[i];
		if(array[i] < comp)
		left[left_idx++] = array[i];
	}
	//调用自己进行递归
	quicksort(left,left_idx);
	quicksort(right,right_idx);
	//将临时空间里的元素放回原来的数组中去
	int idx = 0;
	for(int j = 0;j < left_idx; j++)
	{
		array[idx++] = left[j];
	}
	array[idx++] = comp;
	for(int j = 0;j < right_idx; j++)
	{
		array[idx++] = right[j];
	}
	//释放空间
	delete[] left;
	delete[] right;
}

int main()
{
	int array[10] = {10,9,5,6,1,3,8,2,7,4};
	quicksort(array, 10);
	for(int i = 0; i <= 9; i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}