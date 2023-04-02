#include<iostream>  
using namespace std;
#include <numeric>
#include <vector>
#include <algorithm>

class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{

	vector<int> v;
	v.resize(10);
	//填充
	fill(v.begin(), v.end(), 11);
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	// 利用fill可以将容器区间内元素填充为 指定的值
}

int main() {

	test01();

	system("pause");

	return 0;
}
