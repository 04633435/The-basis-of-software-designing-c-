#include <iostream>
#include <cstring>
using namespace std;

struct fruit{
	char fruit_name[10];
	float fruit_price;
	int fruit_storagy;
};

fruit apple = {"apple", 5,100};
fruit banana = {"banana", 2, 50};

int applecount,bananacount;
void checkout();

int GetInteger()
{
	char buf[100] = {0};
	while(strlen(buf) == 0)
		cin.getline(buf,100);
	return atoi(buf);      //atoi ��ʹ�����ֵ��123f,���123��ȡ������
}

void showMenu()
{
	cout << "**************************************" << endl;
	cout << "********��ӭ������������ѡ��**********" << endl;
	cout << "********1.�µ�����.         **********" << endl;
	cout << "********2.�˳�.             **********" << endl;
	cout << "**************************************" << endl;
}

void showsubMenu()
{
	cout << "**************************************" << endl;
	cout << "********1.����ƻ��.         **********" << endl;
	cout << "********2.�����㽶.         **********" << endl;
	cout << "********3.����.             **********" << endl;
	cout << "********4.�˳�.             **********" << endl;
	cout << "**************************************" << endl;
}

void shuiguoxiaoshouMenu()
{
		cout << "**************************************" << endl;
		cout << "********��ѡ��            **********" << endl;
		cout << "********1.������һ��.       **********" << endl;
		cout << "********2.����.             **********" << endl;
		cout << "**************************************" << endl;
}

int shuiguoxiaoshou(int fruittype)
{
	while(1)
	{
		cout << "**************************************" << endl;
		cout << "********����������Ҫ���������********" << endl;	
		cout << "**************************************" << endl;
		//��¼���������
		int input3;
		cin >> input3;
		if(fruittype == 1)
			applecount = input3;
		if(fruittype == 2)
			bananacount = input3;
		shuiguoxiaoshouMenu();
		int input4;
		cin >> input4;
		switch (input4)
		{
			case 1:
			break;
			case 2:
			{
				checkout();
				return 0;
			}
		}
	}
}

void checkout()
{
	cout << "**************************************" << endl;
	cout << "*******�������ˮ����������:*********" << endl;
	cout << "****�㽶:" << bananacount << "����********" << endl;
	cout << "****ƻ��:" << applecount << "����********" << endl;
	cout << "*****�ܽ��Ϊ:" << bananacount * banana.fruit_price + applecount * apple.fruit_price << "******" << endl;
	cout << "**************************************" << endl;
	}

int slove_bill()
{
	while(1)
	{
		showsubMenu();
		int input2;
		cin >> input2;
		switch (input2)
		{
			case 1:
			shuiguoxiaoshou(1);
			break;
			case 2:
			shuiguoxiaoshou(2);
			break;
			case 3:
			{
				checkout();
				return 0;
			}
			case 4:
				return 0;
		}
	}
}

int main()
{
	while(1)
	{
		showMenu();
		int input;
		input = GetInteger();
		switch (input)
		{
			case 1:
				slove_bill();
				break;
			case 2:
				return 0;
		}
	}
}