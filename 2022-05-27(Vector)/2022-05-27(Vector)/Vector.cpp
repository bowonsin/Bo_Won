// ** vector ver_0.9
#include <iostream>
using namespace std;

//** ������ ����
int Size = 0;

//** �ִ� ���� ����
int Capacity = 0;
// ** �����̳�
int* Vector = nullptr;

// ** �����̳� ������ ��ġ�� ���� �߰�
void push_back(const int& _Value);

// ** �����̳� ������ ��ġ�� �ִ� ���� ����
void pop_back();

// **���� ���ʿ� �ִ� ���� 
int front();

// **���� ���ʿ� �ִ� ���� 
int end();

// ** �ش� ��ġ �� ����
void Erase(const int& _Where);

// Ư�� ��ġ�� �� �ֱ�
void Insert(const int& _Where, const int& _Value);

int main(void)
{

	// ������ Ƚ�� ��ŭ ��ȿ��
	for (int i = 0; i < 10; ++i)
		push_back(i * 100 + 100);

	pop_back();

	Erase(3);

	Insert(2, 10);

	for (int i = 0; i < Size; i++)
		cout << Vector[i] << endl;

	// ���
	return 0;
}
void Insert(const int& _Where, const int& _Value)
{
	if (Vector)
	{
		// ���� �� ���� �ִµ� �����Ҷ� �߰� 
		if (Size >= Capacity)
			Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		int* Temp = new int[Capacity + 1];

		// NULL �� �ϴ� �ʱ�ȭ 
		for (int i = 0; i < Capacity; ++i)
			Temp[i] = NULL;

		for (int i = 0, j = 0; i < Size; ++i, ++j)
		{
			if (i == _Where)
			{
				Temp[i] = _Value;
				--j;
			}
			else
				Temp[i] = Vector[j];
		}
		++Size;

		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		Temp[Size] = _Value;
		Vector = Temp;
	}
	/*
		if (Capacity <= Size)
	Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

	// ** �ӽ� �����
	int* Temp = new int[Capacity + 1];

	// ** �ʱ�ȭ
	for (int i = 0; i <= Capacity; ++i)
	Temp[i] = NULL;

	// ** �ش� ��ġ ������ ���� ����.
	for (int i = 0; i < _where; ++i)
	Temp[i] = Vector[i];

	// ** �ش� ��ġ�� �� ����.
	Temp[_where] = _Value;
	++Size;
	*/

}


void Erase(const int& _Where)
{
	// Ư�� ��ġ�� �ִ� ���Ҹ� ���� �ϰ� ����
	for (int i = _Where + (-1); i < Size - 1; ++i)
	{
		Vector[i] = Vector[i + 1];
	}
	/*
	// ** ���� ������ �ִ밪 ����.
	--Size;

	// ** ������
	for (int i = _where + (-1); i < Size; ++i)
		Vector[i] = Vector[i + 1];
		*/
}

int begin()
{
	return front();
}
int back()
{
	// ** ������ ���� ��ȯ
	return Vector[Size - 1];
}

int front()
{
	// ** 0��° ���� ��ȯ
	return Vector[0];
}
int end()
{
	return Vector[Size];
}

void pop_back()
{
	// ** ���� ������ �ִ밪 ����.
	Vector[Size] = NULL;
	--Size;
}

void push_back(const int& _Value)
{
	// ������ 

	//** ���۽�Ƽ = ���뷮 ,������ = ������ ���� 
	//** ȿ�������� �ٲܰ�
	//** ���۽�Ƽ�� �Լ� ȣ���Ҷ����ٰ� �ƴ� size �� ���۽�Ƽ�� ���� �������� ���� �ϴ°ɷ� �ٲ� ��
	//** ���� ���̻� ������ ������ ���ٸ�..
	if (Size >= Capacity)
	{
		//** 4���� �۴ٸ� 1�� ���� �ϰ� ũ�� ���� ������ 1/2 ��ŭ �߰�
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1; // ����Ʈ �����ڷ� ������ 2

		//** �ӽ� ����Ҹ� ����
		int* Temp = new int[Capacity + 1];

		//** NULL �� �ϴ� �ʱ�ȭ 
		//** ������ ������ �ʱ�ȭ ��
		for (int i = 0; i < Capacity; ++i)
			Temp[i] = NULL;

		//** ������ �ִ� ���� ����
		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];

		//** ���� ���� ���� 
		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		//** 
		Temp[Size] = _Value;
		Vector = Temp;
	}
	else
		//* ������ ��ġ�� �� �߰� 
		Vector[Size] = _Value;

	cout << Vector[Size] << endl;
	cout << " Size : " << Size << endl;
	cout << " Capacity : " << Capacity << endl;
	cout << endl;

	// �߰��� ������ �ִ밪 ����
	++Size;


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
// call by value = �� ����
// call by ���۷��� = �ּҰ� ����
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
