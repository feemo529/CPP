//#include <iostream>
//using namespace std;
//
////普通写法
//class Calculator {
//public:
//
//	int getResult(string oper) {
//		if (oper == "+") {
//			return num1 + num2;
//		}
//		else if (oper == "-") {
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//		//真实开发中 提倡 开闭原则
//		//开闭原则：对扩展进行开发，对修改进行关闭
//	}
//
//	int num1;
//	int num2;
//};
//
//void test01() {
//	// 创建计算器对象
//	Calculator c;
//	c.num1 = 10;
//	c.num2 = 10;
//
//	cout << c.num1 << "+" << c.num2 << "=" << c.getResult("+") << endl;
//	cout << c.num1 << "-" << c.num2 << "=" << c.getResult("-") << endl;
//	cout << c.num1 << "*" << c.num2 << "=" << c.getResult("*") << endl;
//}
//
//// 利用多态实现计算器
////多态优点
//// 1、代码组织结构清晰
//// 2、可读性强，利于前期和后期的扩展以及维护
//// 3、对于前期和后期扩展以及维护性高
//
////实现计算器抽象类
//class AbstractCalculator {
//public:
//
//	virtual int getResult() {
//		return 0;
//	}
//
//	int num1;
//	int num2;
//};
//
////加法类
//class AddCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return num1 + num2;
//	}
//};
//
////减法类
//class SubCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return num1 - num2;
//	}
//};
//
////乘法类
//class MulCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return num1 * num2;
//	}
//};
//
//void test02() {
//	// 多态使用条件
//	// 父类指针或者引用指向子类对象
//
//	//加法运算
//	AbstractCalculator* abc = new AddCalculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//
//	cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;
//	// 用完后记得销毁
//	delete abc;
//
//	//减法运算
//	abc = new SubCalculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//
//	cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//乘法
//	abc = new MulCalculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//
//	cout << abc->num1 << " * " << abc->num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}