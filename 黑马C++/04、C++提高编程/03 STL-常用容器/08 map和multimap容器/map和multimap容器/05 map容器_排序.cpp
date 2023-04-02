#include<iostream>  
using namespace std;
#include <map>;

class myCompare {
public:
	bool operator()(int v1, int v2) const
	{
		//½µĞò
		return v1 > v2;
	}
};

void test01()
{
	map<int, int, myCompare>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;

	for (map<int, int, myCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;

}