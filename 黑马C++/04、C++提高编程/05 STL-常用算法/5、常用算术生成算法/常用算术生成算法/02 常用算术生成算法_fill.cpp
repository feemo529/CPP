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
	//���
	fill(v.begin(), v.end(), 11);
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	// ����fill���Խ�����������Ԫ�����Ϊ ָ����ֵ
}

int main() {

	test01();

	system("pause");

	return 0;
}
