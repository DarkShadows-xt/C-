#include<iostream>
using namespace std;
int main() {
	int n, fact=1;
	cout << "input a num : " ;   //��������д�Ӧ��ô�ģ�ע��cin��cout������
	cin >> n;
	cout << fact << "*";
	for (int i = 1;i <= n;i++) {
		fact = fact * i;
	}
	cout << n << "!=" << fact << endl;
	system("pause");
	return 0;
}