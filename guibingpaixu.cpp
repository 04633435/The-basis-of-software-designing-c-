#include <iostream>
using namespace std;

//问题：对array数组下标范围在[start, end)的元素进行排序
void MergeSort(int * array, int start, int end)                //这里黄色部分的用法和指针的有关，在指向数组时，xxx[0] = *xxx, xxx[1] = *(xxx + 1);
{
	//递归终止条件
	if (start == end -1)
		return;
	//对两个子数组分开排序
	int mid = (start + end)/2;
	MergeSort(array, start, mid);
	MergeSort(array, mid, end);
	//将排序好的两个数组合并到一个数组中去并保持有序
	//创建临时内存来存放数组,分别从两个数组从头取出元素进行比较，小的则
	//进入临时数组空间，大的则继续与另一个数组中的下一个元素比较
	int * temp = new int [end - start];
	int left_idx = start, right_idx = mid, i = 0;
	while(left_idx < right_idx && right_idx < end)
	{
		if(array[left_idx] > array[right_idx])
			temp[i++] = array[right_idx++];                      
		else
			temp[i++] = array[left_idx++]; 
	}
		
	//若其中一个数组空了，则另一个数组中的元素直接放进临时数组空间中
	if(left_idx == right_idx)                                    //这两个判断都多余了
	{
		while(right_idx == end)
			temp[i++] = array[right_idx++];
	}else if(right_idx == end)
	{
		while(left_idx == right_idx)
			temp[i++] = array[left_idx++];
	}
	//将排好序的数组放入实际空间
	for(m = 0, idx = start; m < end - start; m++, idx++)         //注意我们的问题是对下标在[)的元素排序，所以这里的判断条件不是end;
	{
		array[idx] = temp[i];
	}
	//释放临时空间
	delete[] temp;
}

void main()
{
	int array[100];
	for(i = 0; i < 102; i++)
		array[i] = i;
	MergeSort(&array[], 50, 90);
}