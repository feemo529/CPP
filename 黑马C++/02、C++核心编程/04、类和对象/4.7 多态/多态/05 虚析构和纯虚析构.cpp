//#include <iostream>
//using namespace std;
//
////�������ʹ�������
//
//class Animal {
//public:
//
//	Animal() {
//		cout << "Animal ���캯������" << endl;
//	}
//
//	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
//	//virtual ~Animal() {
//	//	cout << "Animal ������������" << endl;
//	//}
//
//	//�������� ��Ҫ���� Ҳ��Ҫʵ��
//	//���˴������� ֮�������Ҳ���ڳ����࣬�޷�ʵ��������
//	virtual ~Animal() = 0;
//
//
//	//���麯��
//	virtual  void speak() = 0;
//
//};
//
//Animal::~Animal() {
//	cout << "Animal ����������������" << endl;
//}
//
//class Cat :public Animal {
//public:
//	Cat(string name) {
//		cout << "Cat ���캯������" << endl;
//		this->name = new string(name);
//	}
//
//	virtual void speak() {
//		cout << *name << "Сè��˵��" << endl;
//	}
//
//	~Cat() {
//		if (this->name != NULL) {
//			cout << "Cat ������������" << endl;
//			delete this->name;
//			this->name = NULL;
//		}
//	}
//
//	string* name;
//};
//
//void test01() {
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}