#include "speechManager.h"

//���캯��
SpeechManager::SpeechManager() {
	//��ʼ����������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();

	//���������¼
	this->loadRecord();
}

void SpeechManager::show_Menu() {
	cout << "********************************************" << endl;
	cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
	cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
	cout << "*************  2.�鿴�����¼  *************" << endl;
	cout << "*************  3.��ձ�����¼  *************" << endl;
	cout << "*************  0.�˳���������  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech() {
	//��ʼ��������
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	//��ʼ��������
	this->m_Index = 1;
}

void SpeechManager::createSpeaker() {
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		//12��ѡ�ֱ��
		this->v1.push_back(i + 10001);

		//ѡ�ֱ�� �Լ���Ӧ��ѡ�� ��ŵ�map������
		this->m_Speaker.insert(pair<int, Speaker>(i + 10001, sp));
	}
}

void SpeechManager::startSpeech() {
	//��һ�ֱ���
	//1����ǩ
	speechDraw();

	//2������
	speechContest();

	//3����ʾ������
	showScore();

	//�ڶ��ֱ���
	this->m_Index++;
	//1����ǩ
	speechDraw();

	//2������
	speechContest();

	//3����ʾ���ս��
	showScore();

	//4���������
	saveRecord();
	//���ñ���,��ȡ��¼
	//��ʼ������
	this->initSpeech();

	//����ѡ��
	this->createSpeaker();

	//��ȡ�����¼
	this->loadRecord();

	cout << "���������ϣ�" << endl;
	system("pause");
	system("cls");

}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "�� << " << this->m_Index << " >> �ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "--------------------------" << endl;
	cout << "��ǩ���ݽ�˳������: " << endl;

	if (this->m_Index == 1) {
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (int i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << endl;
	}
	else {
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (int i = 0; i < v2.size(); i++)
		{
			cout << v2[i] << " ";
		}
		cout << endl;
	}
	cout << "--------------------------" << endl;
	system("pause");
	cout << endl;
}

//����
void SpeechManager::speechContest() {
	cout << "------------- ��" << this->m_Index << "����ʽ������ʼ��------------- " << endl;

	multimap<double, int, greater<double>> groupScroe; // ��ʱ����������key������value ѡ�ֱ��

	int num = 0; // ��¼��Ա����6��Ϊ1��

	vector <int> v_Src; //������Ա����
	if (this->m_Index == 1) {
		v_Src = this->v1;
	}
	else {
		v_Src = this->v2;
	}

	//�������в���ѡ��
	for (int i = 0; i < v_Src.size(); i++)
	{
		num++;

		//��ί���
		deque<double> d;
		for (int j = 0; j < 10; j++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			d.push_back(score);
		}

		sort(d.begin(), d.end(), greater<double>());
		d.pop_front(); // ȥ����߷�
		d.pop_back(); // ȥ����ͷ�

		double sum = accumulate(d.begin(), d.end(), 0.0f); // ��ȡƽ����
		double avg = sum / (double)d.size(); // ��ȡƽ����

		//ÿ����ƽ����
		//cout << "���" << v_Src[i] << " ѡ��: " << this->m_Speaker[v_Src[i]].m_Name << " ��ȡƽ����Ϊ: " << avg << endl; //��ӡ����
		this->m_Speaker[v_Src[i]].m_Score[this->m_Index - 1] = avg;

		//6����һ�飬����ʱ��������
		groupScroe.insert(make_pair(avg, v_Src[i]));
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С���������: " << endl;
			for (auto n : groupScroe) {
				cout << "���: " << n.second << " ����: " << this->m_Speaker[n.second].m_Name
					<< " �ɼ�: " << this->m_Speaker[n.second].m_Score[this->m_Index - 1] << endl;
			}

			int count = 0;
			//ȡǰ����
			for (multimap<double, int, greater<double>>::iterator it = groupScroe.begin(); it != groupScroe.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else {
					vVictory.push_back((*it).second);
				}
			}

			groupScroe.clear();

			cout << endl;
		}
	}
	cout << "------------- ��" << this->m_Index << "�ֱ������  ------------- " << endl;
	system("pause");
}

//����
void SpeechManager::showScore() {

	vector<int> v;
	if (this->m_Index == 1)
	{
		cout << "--------- ��" << this->m_Index << "�ֽ���ѡ����Ϣ���£�-----------" << endl;
		v = v2;
	}
	else {
		cout << "--------- ���ս�����£�-----------" << endl;
		v = vVictory;
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << "ѡ�ֱ��: " << v[i] << " ����: " << m_Speaker[v[i]].m_Name << " �÷�: " << m_Speaker[v[i]].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_Menu();
}

//�������
void SpeechManager::saveRecord() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); // ������÷�ʽ���ļ��� д�ļ�

	//��ÿ������д�뵽�ļ���
	for (int i = 0; i < vVictory.size(); i++)
	{
		ofs << vVictory[i] << "," << m_Speaker[vVictory[i]].m_Score[1] << ",";
	}
	ofs << endl;

	//�ر��ļ�
	ofs.close();

	cout << "��¼�Ѿ�����" << endl;

	this->fileIsEmpty = false;
}

//��ȡ��¼
void SpeechManager::loadRecord() {
	ifstream ifs("speech.csv", ios::in); // ����������

	//�ļ����������
	if (!ifs.is_open()) {
		this->fileIsEmpty = true;
		//cout << "�ļ�������!" << endl;
		ifs.close();
		return;
	}

	//�ļ�������
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��!" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;

	ifs.putback(ch); // ��ȡ�õ����ַ��Ż�ȥ

	string data;
	int index = 0;

	while (ifs >> data) {
		//cout << data << endl;
		vector<string>v; //���6��string�ַ���

		int pos = -1; //����","λ�õñ���
		int start = 0;

		while (true) {
			pos = data.find(",", start);
			if (pos == -1) {
				//û���ҵ����
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record[index] = v;
		index++;
	}

	ifs.close();
	//for (auto n : m_Record) {
	//	cout << "��<< " << n.first << " >>��" << "�ھ����: " << n.second[0] << " ����: " << n.second[1] << endl;
	//}
}

//�鿴��¼
void SpeechManager::showRecord() {
	if (this->fileIsEmpty) {
		cout << "�ļ������ڣ����¼Ϊ�գ�" << endl;
	}
	else {
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "�� " <<
				"�ھ����: " << this->m_Record[i][0] << " �÷�: " << this->m_Record[i][1] << " "
				"�Ǿ����: " << this->m_Record[i][2] << " �÷�: " << this->m_Record[i][3] << " "
				"�������: " << this->m_Record[i][4] << " �÷�: " << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}

//��ռ�¼
void SpeechManager::clearRecord() {
	cout << "ȷ�����? " << endl;
	cout << "1��ȷ�� " << endl;
	cout << "2��ȡ�� " << endl;

	int select = 0;
	cin >> select;

	if (select == 1) {
		//��ģʽ ios::trunc �������ɾ���ļ������´���
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//��ʼ������
		this->initSpeech();

		//����ѡ��
		this->createSpeaker();

		//��ȡ�����¼
		this->loadRecord();

		cout << "��ճɹ�! " << endl;
	}

	system("pause");
	system("cls");
}

//��������
SpeechManager::~SpeechManager() {

}