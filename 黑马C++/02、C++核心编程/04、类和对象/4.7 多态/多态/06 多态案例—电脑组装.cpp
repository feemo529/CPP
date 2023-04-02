#include <iostream>
using namespace std;


class CPU {
public:
	virtual void calculator() = 0;
};

class VideoCard {
public:
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:

	Computer(CPU* cpu, VideoCard* vc, Memory* memory) {
		this->cpu = cpu;
		this->vc = vc;
		this->memory = memory;
	}

	// ��������
	void work() {
		//�������������.���ýӿ�
		this->cpu->calculator();
		this->vc->display();
		this->memory->storage();
	}

	~Computer() {
		if (this->cpu = NULL) {
			delete this->cpu;
			this->cpu = NULL;
		}
		if (this->vc = NULL) {
			delete this->vc;
			this->vc = NULL;
		}
		if (this->memory = NULL) {
			delete this->memory;
			this->memory = NULL;
		}
	}

private:
	CPU* cpu;
	VideoCard* vc;
	Memory* memory;
};

//������
class IntelCPU :public CPU {
public:
	virtual void calculator() {
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};
class IntelVC :public VideoCard {
public:
	virtual void display() {
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};
class IntelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};
class AMDCPU :public CPU {
public:
	virtual void calculator() {
		cout << "AMD��CPU��ʼ�����ˣ�" << endl;
	}
};
class AMDVC :public VideoCard {
public:
	virtual void display() {
		cout << "AMD��CPU��ʼ�����ˣ�" << endl;
	}
};
class AMDMemory :public Memory {
public:
	virtual void storage() {
		cout << "AMD��CPU��ʼ�����ˣ�" << endl;
	}
};

void test01() {
	// ��һ̨�������
	CPU* intelCPU = new IntelCPU();
	VideoCard* intelCard = new IntelVC();
	Memory* intelMem = new IntelMemory();

	//������һ̨����
	cout << "��һ̨���Կ�ʼ����" << endl;
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;

	cout << "------------------" << endl;

	//�����ڶ�̨����
	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	Computer* computer2 = new Computer(new AMDCPU(), new AMDVC(), new AMDMemory());
	computer2->work();
	delete computer2;
}

int main() {

	test01();

	system("pause");

	return 0;
}