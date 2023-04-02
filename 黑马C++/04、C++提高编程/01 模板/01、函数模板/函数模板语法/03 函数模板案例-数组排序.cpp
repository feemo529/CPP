//#include <iostream>
//using namespace std;
//
////实现通用，对数组进行排序的函数
////规则 从大到小
////算法 选择
////测试 char 数组、int数组
//
////交换模板
//template<class T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template<class T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++)
//	{
//		int max = i; // 认定最大值下标
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] > arr[j])
//			{
//				max = j; //更新最大值下标
//			}
//		}
//		if (max != i) {
//			//交换max和i元素
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
//template<class T>
//void printArray(T arr[], int len) {
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "basdf";
//	mySort(charArr, sizeof(charArr) / sizeof(char));
//	printArray(charArr, sizeof(charArr) / sizeof(char));
//}
//
//void test02() {
//	//测试int数组
//	int intArr[] = { 7,5,1,7,9,3,6 };
//	int num = sizeof(intArr) / sizeof(int);
//
//	mySort(intArr, num);
//
//	printArray(intArr, num);
//}
//
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}