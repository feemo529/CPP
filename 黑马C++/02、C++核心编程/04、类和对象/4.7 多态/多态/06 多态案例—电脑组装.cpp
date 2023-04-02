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

	// 工作函数
	void work() {
		//让零件工作起来.调用接口
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

//厂商类
class IntelCPU :public CPU {
public:
	virtual void calculator() {
		cout << "Intel的CPU开始计算了！" << endl;
	}
};
class IntelVC :public VideoCard {
public:
	virtual void display() {
		cout << "Intel的CPU开始计算了！" << endl;
	}
};
class IntelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel的CPU开始计算了！" << endl;
	}
};
class AMDCPU :public CPU {
public:
	virtual void calculator() {
		cout << "AMD的CPU开始计算了！" << endl;
	}
};
class AMDVC :public VideoCard {
public:
	virtual void display() {
		cout << "AMD的CPU开始计算了！" << endl;
	}
};
class AMDMemory :public Memory {
public:
	virtual void storage() {
		cout << "AMD的CPU开始计算了！" << endl;
	}
};

void test01() {
	// 第一台电脑零件
	CPU* intelCPU = new IntelCPU();
	VideoCard* intelCard = new IntelVC();
	Memory* intelMem = new IntelMemory();

	//创建第一台电脑
	cout << "第一台电脑开始工作" << endl;
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;

	cout << "------------------" << endl;

	//创建第二台电脑
	cout << "第二台电脑开始工作了" << endl;
	Computer* computer2 = new Computer(new AMDCPU(), new AMDVC(), new AMDMemory());
	computer2->work();
	delete computer2;
}

int main() {

	test01();

	system("pause");

	return 0;
}