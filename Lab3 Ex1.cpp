// Lab3 Ex1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include<string>
class Number {
public:
	int nUmber = 0;
	int Largest = 0;
	explicit Number(int number, int largest)
		:nUmber(number), Largest(largest) {}
	void setNumber()const {
		unsigned int numberCounter = 0;
		int largest = 0;
		while (numberCounter <= 9) {
			cout << "销售量为:" << endl;
			int number;
			cin >> number;
			if (largest < number) {
				largest = number;
			}
			numberCounter = numberCounter + 1;
		}
		cout << "最大值为：" << largest << endl;
	}
};
int main() {
	Number mynumber1(0, 0);
	mynumber1.setNumber();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
