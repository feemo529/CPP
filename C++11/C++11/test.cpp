#include<iostream>  
using namespace std;

void main() {
    int i = 5;
    int& j = i;
    j = 7;
    // j��һ���������ͣ�����i��һ���������iֵ�ı�ʱ��jֵҲ���Ÿı䣬���Ի���� i=7 j=7
    cout << "i=" << i << " j=" << j << endl;
    system("pause");
}
