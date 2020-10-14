#include <iostream>
using namespace std;
                               //二维数组的形参传递有两种方法：1.指针形式同时要把列行参数传入进去；2.一重指针int(*)[必须指明第二维];3.直接传数组
							   //两种让变量对所有作用域有效的方法：1.指针；2.全局变量
void distribute_book_perperson(int book_man[5][5], int * manhavebook, bool * book, int person)  //递归包含一次枚举，在函数中不需要再按人遍历了
{
	//递归的终止条件
	if(person == 5)
	{	
		for(int i = 0; i < 5; i++)
		{
			cout << manhavebook[i] << ' ';
			
		}
		cout << endl;
		
		return;
	}	
	//分书的具体实现--枚举的思想
	for(int j = 0; j < 5; j++)  //j是书
	{
		if((book_man[person][j] == 1) && !book[j])
		{
			manhavebook[person] = j;
			book[j] = true;
			//递归调用，去给下一个人分书
			//int next_person = person + 1;
			distribute_book_perperson(book_man, manhavebook, book, person+1);
			
			book[j] = false;
		}
		//将分书结果输出
		
		//回溯到之前的状态
		//manhavebook[person] = -1;
		//book[j] = false;  一直出不了正确结果的所在，虽然执行顺序是一样的，但是最大区别在于一个是满足条件才执行，一个是每一次循环都执行。
	}
}


int main()
{
	//将问题中的关键点用计算机语言描述
	//A,B,C,D,E每个人的喜好
	int book_man[5][5] = {                     //二维数组的内存存取方式和一维数组是一样的，所以在定义时需要告诉编译器数组的维度
						{0,0,1,0,1},
						{1,0,1,0,0},
						{0,1,0,0,0},
						{0,1,0,1,1},
						{1,1,1,1,1}
									};
	//书籍是否被借出
	bool book[5];
	for(int i = 0; i <5; i++)
		book[i] = false;
	//书籍借给了谁
	int manhavebook[5] = {-1};
	for(int i = 0; i < 5; i++)
		cout << book[i] << endl;
	distribute_book_perperson(book_man, manhavebook, book, 0);
	return 0;
}