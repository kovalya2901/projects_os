#include <iostream>
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "������� ���������� ����������� �� �����������: " << endl;
	cin >> n;
	n = n % 50;
	cout << "� ��������� �������� ����� " << 50 - n << " ��������� ����(�).";
	return 0;
}
