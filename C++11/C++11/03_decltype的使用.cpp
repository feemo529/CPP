#include<iostream>  
using namespace std;
#include <vector>


int main()
{
	int i;
	decltype(i) j = 0;
	cout << typeid(j).name() << endl;

	float a;
	double b;
	decltype(a + b)c;
	cout << typeid(c).name() << endl;

	vector<int>tmp;
	decltype(tmp.begin())k;
	cout << typeid(tmp).name() << endl;
	for (k = tmp.begin(); k != tmp.end(); ++k)
	{
		//.....
	}

	enum { Ok, Error } flag; //匿名类型的枚举变量
	decltype(flag)flag2;
	cout << typeid(flag2).name() << endl;

	system("pause");

	return 0;

}