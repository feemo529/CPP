//#include <iostream>
//using namespace std;
//
////虚析构和纯虚析构
//
//class Animal {
//public:
//
//	Animal() {
//		cout << "Animal 构造函数调用" << endl;
//	}
//
//	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//	//virtual ~Animal() {
//	//	cout << "Animal 析构函数调用" << endl;
//	//}
//
//	//纯虚析构 需要声明 也需要实现
//	//有了纯虚析构 之后，这个类也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//
//
//	//纯虚函数
//	virtual  void speak() = 0;
//
//};
//
//Animal::~Animal() {
//	cout << "Animal 纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal {
//public:
//	Cat(string name) {
//		cout << "Cat 构造函数调用" << endl;
//		this->name = new string(name);
//	}
//
//	virtual void speak() {
//		cout << *name << "小猫在说话" << endl;
//	}
//
//	~Cat() {
//		if (this->name != NULL) {
//			cout << "Cat 析构函数调用" << endl;
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
//	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
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