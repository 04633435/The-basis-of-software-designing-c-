#include <iostream>
using namespace std;

int main()
{
	//8个花瓶5朵花,美感值表，flowers用于记录放在那个花瓶，bottel用于表示所用的方案。问题涉及的变量就都设置好了
	int Max = 0;
	int meiganzhi[5][8] = {	{7,23,-5,-24,16,10,9,1},
							{5,21,-4,10,23,30,8,0},
							{-21,5,-4,-20,20,3,6,10},
							{20,0,10,15,5,-20,-10,15},
							{-10,5,20,7,13,-16,-6,20}	};
	//遍历所有的方案
	for(int i = 1; i < (1<<8); i++)
	{
		int flowers[5] = {0};
		int weicaozuo = i;
		int count = 0;
		//得到插花的位置;
		for(int j = 0; j < 8; j++)
		{
			if((weicaozuo & 1) && (count < 5))
			{
				flowers[count] = j;
				count++;
			}
			weicaozuo = weicaozuo >> 1;
		}
		//计算美感值
		if(count == 5)
		{
			int num = 0;
			for(int h = 0; h < 5; h++)
				num = num + meiganzhi[h][flowers[h]];
			
			//输出num值
			cout << num << ' ';
			
			
			if(num > Max)
				Max = num;
		}
	}
	
	cout << "0988" << Max << endl;
	
	
	return 0;
}