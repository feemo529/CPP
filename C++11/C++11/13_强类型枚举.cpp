//#include<iostream>  
//using namespace std;
//
//
//int main()
//{
//	//enum Status { Ok, Error };
//	//"Ok":�ض��壻��ǰ�Ķ�����"ö����"
//	//enum Status2 { Ok, Error };
//
//	//Status flag = Ok;
//
//	//cout << sizeof(Ok) << endl; //4
//
//	//ǿ����ö�٣�enum�������class ��stuct����
//	enum class Status { Ok, Error };
//	enum class Status2 { Ok, Error };
//
//	Status flag = Status::Ok; //�������ö������������
//
//	//ǿ����ö�٣�����ָ����Ա����������
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