//Call-by-value : ���� ���ڷ� �����ϴ� �Լ��� ȣ����
//Call-by-reference : �ּ� ���� ���ڷ� �����ϴ� �Լ��� ȣ����

#include<iostream>
using namespace std;

void Co(int n)//�̷��� �Լ��� ���� �ִ� ����� Call-by-value��.
{
	n += 1;
}

int main()
{
	int num = 1;//�ܺο��� 1�� ����.
	Co(num);//���ο��� +1�Ϸ� ������
	cout << num << endl;//����� 1�� �ȴ�. ��, Call-by-value ����� �ܺ� ������ ���� ������ �Ұ��ϴ�.
	return 0;
}