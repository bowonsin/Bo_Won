#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vecNumbers; // ���� �� int

	for (int i = 0; i < 10; ++i)
		vecNumbers.push_back(10 * i);

	// **vector<int> ���ӽ����̽� iterator �ϳ��� ���� 
	// **���� ������ ����� ��� �ݺ��ڸ� ����Ͽ� ��� ���� 
	/*
	for (vector<int>::iterator iter = vecNumbers.begin(); iter != vecNumbers.end(); ++iter)
		cout << (*iter) << endl;
	for (int i = 0; i < vecNumbers.size(); ++i)
		cout << vecNumbers[i] << endl;
	for (auto iter = vecNumbers.begin(); iter != vecNumbers.end(); iter++)
		cout << (*iter) << endl;
	*/
	/*
	int Array[16] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };	

	int* iterator = Array;

	for (int i = 0; i < 16; ++i)
		cout << Array[i] << endl;

	for (int i = 0; i < 16; ++i)
		cout << *(iterator + i) << endl;
	*/
	/*
	for (auto iter = vecNumbers.begin(); iter != vecNumbers.end(); )
	{
		
		if ((*iter) > 50) // �浹 ����
			// ���� �������� ���� �̻� �� �� �������
			// erase �� �ڽ��� ���� ����� �ڽſ��� ���� ���� �Ұ�
			iter = vecNumbers.erase(iter);
		else
			++iter;
	}

	for (auto iter = vecNumbers.begin(); iter != vecNumbers.end();++iter )
		cout << (*iter) << endl;
	*/
	/*
	// ** ���� �տ� �ִ� [���Ҹ� ��ȯ]
	vecNumbers.front();

	// ** ���� �ڿ� �ִ� [ ���Ҹ� ��ȯ]
	vecNumbers.back();

	// ** �������� ����Ű�� [ �ݺ���]
	vecNumbers.begin();

	// ** �������� ����Ű�� [ �ݺ���]
	vecNumbers.end();
	*/

	return 0;
}

// �� ���� ���� ������ ����-> ������ ����� ���� ���� 
/*
	int* Pointer = new int ; // new int �� heap ������ �ְ�
	//Pointer �� ���ؿ� �ִ�.
	// int�� ������ Ÿ�԰� int * ������ Ÿ���� �����ϴ� ���� �ٸ���
	// int ���� 4byte ������ int * �� �ٸ��Ŵ� ����Ҽ� ������ ������ Ÿ���� int���� ������ �ּҸ� ������ ���� �� �ִ�.
	// ���� ���� �ݿ� �Ǿ����� �ϸ� call by ���۷�����  �ƴϸ� call by value ��
	�����͸� �� ��� �ϳ��� -> ���� ����� ������ ������ ���� ����
	-> ���� ��� �ϳ��䰡 �´� ��
*/

//����� �����Ҷ� ���
// ������� ���α׷��� ���� ���Ϸ� ���鋚 ����ϸ� �ȴ�