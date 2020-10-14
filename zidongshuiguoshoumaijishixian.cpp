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
	return atoi(buf);      //atoi 即使输入的值是123f,会把123提取出来。
}

void showMenu()
{
	cout << "**************************************" << endl;
	cout << "********欢迎，请输入您的选择**********" << endl;
	cout << "********1.下单购物.         **********" << endl;
	cout << "********2.退出.             **********" << endl;
	cout << "**************************************" << endl;
}

void showsubMenu()
{
	cout << "**************************************" << endl;
	cout << "********1.购买苹果.         **********" << endl;
	cout << "********2.购买香蕉.         **********" << endl;
	cout << "********3.结账.             **********" << endl;
	cout << "********4.退出.             **********" << endl;
	cout << "**************************************" << endl;
}

void shuiguoxiaoshouMenu()
{
		cout << "**************************************" << endl;
		cout << "********请选择：            **********" << endl;
		cout << "********1.返回上一级.       **********" << endl;
		cout << "********2.结账.             **********" << endl;
		cout << "**************************************" << endl;
}

int shuiguoxiaoshou(int fruittype)
{
	while(1)
	{
		cout << "**************************************" << endl;
		cout << "********请输入你需要购买的数量********" << endl;	
		cout << "**************************************" << endl;
		//记录购买的数量
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
	cout << "*******您购买的水果数量如下:*********" << endl;
	cout << "****香蕉:" << bananacount << "公斤********" << endl;
	cout << "****苹果:" << applecount << "公斤********" << endl;
	cout << "*****总金额为:" << bananacount * banana.fruit_price + applecount * apple.fruit_price << "******" << endl;
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