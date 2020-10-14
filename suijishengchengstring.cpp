#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

char* rand_str(char *str,const int len)
{
     srand(time(NULL));
    int i;
    for(i=0;i<len;++i)
    {
         switch((rand()%3))
         {
         case 1:
        str[i]='A'+rand()%26;
       break;
        case 2:
        str[i]='a'+rand()%26;
break;
     default:
        str[i]='0'+rand()%10;
       break;
         }
    }
     str[++i]='\0';
    return str;
}

int main(void)
{
	//创建输出文件对象
	ofstream fout ("lianbiaolianxi.txt");
    
	//写入文件
	//char str[] = "hi";
	//char *str_point = str;
	//cout << str << endl;
	//fout << str << endl;
	//fout << str_point << endl;            //这里要是没有成功
	for(int i = 0; i < 10 && fout.is_open(); i++)
	{
		char name[20];
		char fname[20];
		char* fname_1;
		char* name_star = rand_str(name,20);
		fname_1 = fname;
		cout << name_star <<endl;
		fout << name_star << endl;          //这里就没法成功
		cout << "end" << endl;
	}
	
    //cout<<rand_str(name,20)<<endl;
	fout.close();
    return 0;
}