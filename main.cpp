/*
2.3.1 ʵ������ ������﷨��ϰ
	��д����Ҫ��
	�ٽ����ݳ�Ա��Ϊ˽�еģ�
	�ڽ����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
	���������ڶ����Ա������
	Ȼ���������г��������ʲô��ԱӦָ��Ϊ���õ�?ʲô��ԱӦָ��Ϊ˽�е�? ʲô������÷������ж���? ʲô������������ⶨ��?
*/

#include <iostream> 
using namespace std; 
class Time // ����Time�� 
{
private:// ���ݳ�ԱΪ˽�е� 
	int hour; 
	int minute; 
	int sec; 
public: // ���ݳ�Ա����Ա����Ϊ���õ� 
	void input(); 
	void output(); 
};
void Time::input() 
{ 
	cin >> hour >> minute >> sec; 
}
void Time::output() 
{ 
	cout << hour << ":" << minute << ":" << sec << endl; 
}

// ���� ʱ����
int main() 
{
	Time t1; //����t1ΪTime����� 
	t1.input(); //�����趨��ʱ�� 
	t1.output(); 
	system("pause"); 
	return 0; } 

