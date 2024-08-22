#include <iostream>
using namespace std;

int main(void)
{
	cout << "Hello World!\n";
	cout << "如遇VS无法推送代码，可尝试将系统盘下用户文件夹内的.gitconfig文件编辑补充字段\n"
		<< "[safe]\n" << "    directory=*" << endl;

	system("pause");

	return 0;
}