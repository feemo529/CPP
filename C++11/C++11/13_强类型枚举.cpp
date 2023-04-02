//#include<iostream>  
//using namespace std;
//
//
//int main()
//{
//	//enum Status { Ok, Error };
//	//"Ok":重定义；以前的定义是"枚举数"
//	//enum Status2 { Ok, Error };
//
//	//Status flag = Ok;
//
//	//cout << sizeof(Ok) << endl; //4
//
//	//强类型枚举，enum后面加上class 或stuct修饰
//	enum class Status { Ok, Error };
//	enum class Status2 { Ok, Error };
//
//	Status flag = Status::Ok; //必须加上枚举类型作用域
//
//	//强类型枚举，可以指定成员变量的类型
//	enum struct Status3 :char { Ok, Error };
//	cout << sizeof(Status3::Ok) << endl; //1
//
//
//	enum struct Status4 :long long { Ok, Error };
//	cout << sizeof(Status4::Ok) << endl; //8
//
//
//
//
//	system("pause");
//
//	return 0;
//
//}