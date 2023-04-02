#include<iostream>  
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

//�߼��� logical_not
void test01()
{
	vector<bool>v;

	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	//�߼���  ��v�������˵�v2�У���ִ���߼�������
	vector<bool>v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;
}



int main()
{
	test01();

	system("pause");

	return 0;

}