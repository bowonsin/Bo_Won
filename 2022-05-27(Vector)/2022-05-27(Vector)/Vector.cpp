// ** vector ver_0.3
#include <iostream>
using namespace std;

// ������ ����
int Size = 0;

int Capacity = 0;
// ** �����̳�
int* Vector = nullptr;

void push_back(const int& _Value);

int main(void)
{
	push_back(100);
	push_back(200);

	// ������ Ƚ�� ��ŭ ��ȿ��
	for (int i = 0; i < 10; ++i)
		push_back(i * 100 + 100);

	for (int i = 0; i < Size; ++i)
		cout << Vector[i] << endl;

	return 0;
}

void push_back(const int & _Value)
{
	// ������ 

	// ���۽�Ƽ = ���뷮 ,������ = ������ ���� 
	// ȿ�������� �ٲܰ�
	// ���۽�Ƽ�� �Լ� ȣ���Ҷ����ٰ� �ƴ� size �� ���۽�Ƽ�� ���� �������� ���� �ϴ°ɷ� �ٲ� ��
	if (Size == Capacity)
	{
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1; // ����Ʈ �����ڷ� ������ 2

		int* Temp = new int[Capacity];

		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];

		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		Temp[Size] = _Value;
		++Size;
		Vector = Temp;

	}
	else
	{
		Vector[Size] = _Value;
		++Size;
	}


	/*
		���� �Ѱ�
	++Size;
	int* tmp = new int[Size];

	if (tmp != nullptr)
	{
		for (int i = 0; i < Size - 1; ++i)
			tmp[i] = Vector[i] ;
	}
	delete Vector;
	Vector = tmp;

	Vector[Size - 1] = _Value;
	*/
	/*
		// �������� �� PushBack

		
		// ������
		if(Size <= 0)
		{
		++Size;
		Vector = new int[Size];
		Vector[Size - 1] = _Value;
		}
		else
		{
		Size += Size * 0.5f;
		int * Temp = new int[Size];
		for (int i = 0; i< Size -1; ++i)
		Temp[i] = Vector[i];

		delete Vecotr; // �޸� ���� 
		Vector = nullptr;

		Tenp[Size - 1] = _Value;
		Vector = Temp;
		}
	*/
}

// MSDL 

/*
	// ** 1. ������ �߰� (���ο� ���� Ȯ��).
	// ** 2. ������ ����.
	// ** 3. �����͸� ���� �� �� �ִ� ������ ũ�� .
	// ** 4. ���� ���ԵǾ� �ִ� ������ ���� .
	// ** 5. �����̳��� ���� ����.
	// ** 6. �����̳��� ���� ����
*/
/*
	2�� ����
	( 16 -6 = 16 + ( -6))
	-6->

	2�� ���� ����
	0 0 0 0 0 1 1 0 = 6
	1 1 1 1 1 1 1 1  -> ���� �����ȴ�
	------------------
	1 1 1 1 1 0 0 1
	11111001 + 1
	------------------
	11111010 = -6 -> �̰��� 2�� ����
*/  
/*
// ���� ���� -> ��Ʈ �������� �Ҽ� ������ �ִ��� ��Ʈ �����ڸ� ����ض�
// ��� ���� 2�� ����
char n = 16;
n -= 6;
// �迭�� 2�� n�� ������ �Է��ϴ°� ����.

// �����⸦ �ؾ��� ������ * ��� ��ü�Ҽ� ������ Ȯ���غ���
int y =1920 * 0.5f;

// �Ʒ��� ���� ����Ʈ �����ڷ� ��ȿ��� ������ Ȯ���� ����
int x = 1920 >> 1; // ������ 2�Ҷ��� ������ ��



*/
/*****************************************************
int main(void)
{
	char* str1[2] = {
		{(char*)"ABCD"},
		{(char*)"EFGH"}
	};
	str1[0] = (char*)"CDEF";
	for (int i = 0; i < 5; i++)
	{
		if ((*str1)[i] == 'C') // ���ǽ��� �ɾ ���ǿ� �´� ���� ������ ��ü
			cout << (*str1)[i];
	}

	//cout << str1[0] << endl;

	return 0;
}
	1. �迭
		����
		- ���� ������ �����ϴ�. ( ������ ū ���� )
		- �޸� ������ ������ ũ��� ������ �Ǿ��ִ�.
		- ���ټӵ��� �����ϴ�.

		����
		- �ѹ� ���ϸ� ������ ��ȭ�� �Ұ����ϴ�.
		- ã������ ���̸� ���� ã�ƾ� �Ѵ�.
		- �迭�� ���̴� ���س��� �����͸� �Է��ؾ��Ѵ�.

	2. ����
		- ���� �� �߰��ǰ� ������� ��ü�� ���ͷ� ����ϸ� ���ϰ� Ŀ����.

		�̹��� ���Ͽ� ���� ����
	-
*/
/*
// 2�� n������ ������ָ� ��ǻ�Ͱ� ����ϱⰡ �� ���ϴ�.
//int Vector[16];
// heap ������ ����
// �迭�� ����� �����ε� heap���� ����� ũ��� �ȴ�.

// �迭�� 0 �� �ƴ� �����θ� �ʱ�ȭ�� �����ϴ�.
// �迭�� ��������θ� �ʱ�ȭ�� �����ϴ�

// �Ʒ��� ���� ����Ѵٸ� �� ������ ������ �� �ִ�.
int size = 0;
int liter = 0;
int* Vector = new int[size];

Vector[liter];
*/
/*
	// �迭�� �ƴ����� �迭ó�� ��G�� �� �ֵ�.


	// ����Ҷ� ������ ���� -> ������ ������ ���� �� �ִ�.
	// ũ�� �� ( size)�� �Ѿ��� �� ������ ���� �� �ִ�.
	for (int i = 0; i < size; i++)
		Vector[i] = i;

	for (int i = 0; i < size; i++)
		cout << Vector[i] << endl;

	for (int i = 0; i < 11; i++)
		cout << Vector[liter++] << endl;
*/
