#include <iostream>
using namespace std;

void kuaisupaixu(int * array,int head, int end)
{
	if(head == end)
		return;
	if(head == end + 1)
		return;
	int standard = array[head];
	int place = head;
	int change;
	for(int i = 1; i <= end; i++)
	{
		if(array[i] > standard && i > place)
			continue;
		if(array[i] < standard && i > place)
		{
			int t = i;
			change = array[i];
			for(int j = 1; j <= i - place; j++ )
			{
				array[t] = array[t - 1];
				t--;
			}
			array[place] = change;
			place += 1;
		}
	}
	kuaisupaixu(array, head, place - 1);
	kuaisupaixu(array, place + 1, end);
}

int main()
{
	int array[10] = {10,9,5,6,1,3,8,2,7,4};
	kuaisupaixu(array, 0, 9);             //除了char输出的是整个数组，其塔类型数组的数组名输出的是数组的首地址
	for(int i = 0; i <= 9; i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}