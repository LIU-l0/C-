#include <iostream>
using namespace std;

int main()
{
	int matrix[3][4] =
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	cout << "���� ������ߧ�:" << "\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrix[i][j] << "_";
		}
		cout << endl;
	}
	cout << "���� ����ݧҧ�ѧ�: " << "\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[j][i] << "_";
		}
		cout << endl;
	}
}