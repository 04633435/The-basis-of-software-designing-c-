#include <iostream>
using namespace std;

int main()
{
	int shaizi[11];
	for (int i = 0; i <= 10; i++)
		shaizi[i] = 0;
	for(int i = 1; i < 6; i++)
	{
		int m = i;
		if(10 % i == 0)
		{
			do
			{
				shaizi[m] += 1;
				m = m + i;	
				if(m > 10)
					break;
			}while(m <= 10);
		}
	}

	for (int i = 1; i <= 10; i++)
	{
		if(shaizi[i] == 1)
			cout<< i << endl;
	}
	
	return 0;
}