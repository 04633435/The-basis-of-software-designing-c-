#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int card[13] = {101,112,304,306,308,309,311,405,406,407,408,409,413};       //折半查找的前提对象应是顺序的；;   
	int pos = 1;
	int pick;
	int min = 0, max = 12;
	do{
		pick = ( min + max ) / 2;
		if(card[pick] == 112)
		{
			pos = pick;
			break;
		}else if(card[pick] > 112)
		{
			min = pick + 1;                    //范围更新应该把pick滤掉，大于pick+1；小于pick1
		}else{
			max = pick - 1;
		}
	}while(min <= max);
	pos += 1;
	cout << pos;
	return 0;
 }