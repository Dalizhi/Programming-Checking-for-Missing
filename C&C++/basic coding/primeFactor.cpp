/*
��һ���������ֽ�������ӵ����˻�
*/

#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> vector1)
{
	for (int i = 0; i < vector1.size() - 1; i++)
		cout << vector1[i] << " * ";
	cout << vector1[vector1.size() - 1] << endl;
}

vector<int> primeFactor(int number)
{
	vector<int> prime;
	for (int i = 2; i <= number / 2; ++i)
		/* i <= number/2�������� i ֻ������� number ��ǰ�벿�֡�
		����� i <= number Ҳ�ܼ���һЩ��������*/
	{
		if (number % i == 0)
		{
			number /= i;
			prime.push_back(i);
			i = 2;
			/* �ҵ���һ�������� i ��number = number/i��
			���� ��һ�������� i �ֵ����´�2��ʼ�ҡ�*/
		}
	}
	prime.push_back(number);//��Ϊ���� i <= number/2 ��ԭ���ڸ÷�Χ��û���ҵ������ӣ�˵�� number �������������
	return prime;
}

int main()
{
	int number;
	cin >> number;
	cout << number << "�����������˻�Ϊ��";
	print(primeFactor(number));
}
