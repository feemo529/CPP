//#include <iostream>
//using namespace std;
//
////��ͨд��
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
//		//��ʵ������ �ᳫ ����ԭ��
//		//����ԭ�򣺶���չ���п��������޸Ľ��йر�
//	}
//
//	int num1;
//	int num2;
//};
//
//void test01() {
//	// ��������������
//	Calculator c;
//	c.num1 = 10;
//	c.num2 = 10;
//
//	cout << c.num1 << "+" << c.num2 << "=" << c.getResult("+") << endl;
//	cout << c.num1 << "-" << c.num2 << "=" << c.getResult("-") << endl;
//	cout << c.num1 << "*" << c.num2 << "=" << c.getResult("*") << endl;
//}
//
//// ���ö�̬ʵ�ּ�����
////��̬�ŵ�
//// 1��������֯�ṹ����
//// 2���ɶ���ǿ������ǰ�ںͺ��ڵ���չ�Լ�ά��
//// 3������ǰ�ںͺ�����չ�Լ�ά���Ը�
//
////ʵ�ּ�����������
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
////�ӷ���
//class AddCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return num1 + num2;
//	}
//};
//
////������
//class SubCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return num1 - num2;
//	}
//};
//
////�˷���
//class MulCalculator :public AbstractCalculator {
//public:
//	int getResult() {
//		return num1 * num2;
//	}
//};
//
//void test02() {
//	// ��̬ʹ������
//	// ����ָ���������ָ���������
//
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//
//	cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;
//	// �����ǵ�����
//	delete abc;
//
//	//��������
//	abc = new SubCalculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//
//	cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	//�˷�
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