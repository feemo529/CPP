#include<iostream>  
using namespace std;

void main() {
    int i = 5;
    int& j = i;
    j = 7;
    // j是一个引用类型，代表i的一个替代名，i值改变时，j值也跟着改变，所以会输出 i=7 j=7
    cout << "i=" << i << " j=" << j << endl;
    system("pause");
}
