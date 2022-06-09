// ** vector ver_0.9
#include <iostream>
using namespace std;

//** 원소의 개수
int Size = 0;

//** 최대 수용 개수
int Capacity = 0;
// ** 컨테이너
int* Vector = nullptr;

// ** 컨테이너 마지막 위치에 값을 추가
void push_back(const int& _Value);

// ** 컨테이너 마지막 위치에 있는 값을 삭제
void pop_back();

// **가장 앞쪽에 있는 원소 
int front();

// **가장 뒤쪽에 있는 원소 
int end();

// ** 해당 위치 값 제가
void Erase(const int& _Where);

// 특정 위치에 값 넣기
void Insert(const int& _Where, const int& _Value);

int main(void)
{

	// 누적된 횟수 만큼 비효율
	for (int i = 0; i < 10; ++i)
		push_back(i * 100 + 100);

	pop_back();

	Erase(3);

	Insert(2, 10);

	for (int i = 0; i < Size; i++)
		cout << Vector[i] << endl;

	// 출력
	return 0;
}
void Insert(const int& _Where, const int& _Value)
{
	if (Vector)
	{
		// 사이 에 끼어 넣는데 부족할때 추가 
		if (Size >= Capacity)
			Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		int* Temp = new int[Capacity + 1];

		// NULL 로 싹다 초기화 
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

	// ** 임시 저장소
	int* Temp = new int[Capacity + 1];

	// ** 초기화
	for (int i = 0; i <= Capacity; ++i)
	Temp[i] = NULL;

	// ** 해당 위치 이전의 값을 복사.
	for (int i = 0; i < _where; ++i)
	Temp[i] = Vector[i];

	// ** 해당 위치에 값 삽입.
	Temp[_where] = _Value;
	++Size;
	*/

}


void Erase(const int& _Where)
{
	// 특정 위치에 있는 원소를 삭제 하고 정렬
	for (int i = _Where + (-1); i < Size - 1; ++i)
	{
		Vector[i] = Vector[i + 1];
	}
	/*
	// ** 현재 원소의 최대값 감소.
	--Size;

	// ** 재정렬
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
	// ** 마지막 원소 반환
	return Vector[Size - 1];
}

int front()
{
	// ** 0번째 원소 반환
	return Vector[0];
}
int end()
{
	return Vector[Size];
}

void pop_back()
{
	// ** 현재 원소의 최대값 감소.
	Vector[Size] = NULL;
	--Size;
}

void push_back(const int& _Value)
{
	// 수정후 

	//** 케퍼시티 = 수용량 ,사이즈 = 원소의 개수 
	//** 효율적으로 바꿀것
	//** 케퍼시티가 함수 호추할때마다가 아닌 size 와 케퍼시티가 값이 같아질때 증가 하는걸로 바꿀 것
	//** 만약 더이상 수용할 공간이 없다면..
	if (Size >= Capacity)
	{
		//** 4보다 작다면 1씩 증가 하고 크면 현재 수량의 1/2 만큼 추가
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1; // 쉬프트 연산자로 나누기 2

		//** 임시 저장소를 생성
		int* Temp = new int[Capacity + 1];

		//** NULL 로 싹다 초기화 
		//** 생성된 공간을 초기화 함
		for (int i = 0; i < Capacity; ++i)
			Temp[i] = NULL;

		//** 기존에 있던 값을 복사
		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];

		//** 기존 값을 삭제 
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
		//* 마지막 위치에 값 추가 
		Vector[Size] = _Value;

	cout << Vector[Size] << endl;
	cout << " Size : " << Size << endl;
	cout << " Capacity : " << Capacity << endl;
	cout << endl;

	// 추가된 원소의 최대값 증가
	++Size;


	/*
		내가 한거
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
		// 선생님이 한 PushBack


		// 수정전
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

		delete Vecotr; // 메모리 누수
		Vector = nullptr;

		Tenp[Size - 1] = _Value;
		Vector = Temp;
		}
	*/
}
// call by value = 값 복사
// call by 레퍼런스 = 주소값 복사
// MSDL 

/*
	// ** 1. 데이터 추가 (새로운 공간 확보).
	// ** 2. 데이터 삭제.
	// ** 3. 데이터를 삽입 할 수 있는 공간의 크기 .
	// ** 4. 현재 삽입되어 있는 워소의 갯수 .
	// ** 5. 컨테이너의 시작 지점.
	// ** 6. 컨테이너의 종료 지점
*/
/*
	2의 보수
	( 16 -6 = 16 + ( -6))
	-6->

	2의 보수 시작
	0 0 0 0 0 1 1 0 = 6
	1 1 1 1 1 1 1 1  -> 값이 반전된다
	------------------
	1 1 1 1 1 0 0 1
	11111001 + 1
	------------------
	11111010 = -6 -> 이것이 2의 보수
*/
/*
// 메인 주제 -> 비트 연산으로 할수 있으면 최대한 비트 연산자를 사용해라
// 어떻게 뺴기 2의 보수
char n = 16;
n -= 6;
// 배열은 2의 n승 단위로 입력하는게 좋다.

// 나누기를 해야할 때에는 * 기로 대체할수 있을지 확인해보기
int y =1920 * 0.5f;

// 아래와 같이 쉬프트 연산자로 상효라수 있을지 확인해 보자
int x = 1920 >> 1; // 나누기 2할때면 적용이 됨



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
		if ((*str1)[i] == 'C') // 조건식을 걸어서 조건에 맞는 것을 데이터 교체
			cout << (*str1)[i];
	}

	//cout << str1[0] << endl;

	return 0;
}
	1. 배열
		장점
		- 직접 접근이 가능하다. ( 굉장히 큰 장점 )
		- 메모리 구조상 동일한 크기로 나열이 되어있다.
		- 접근속도과 일정하다.

		단점
		- 한번 정하면 길이의 변화가 불가능하다.
		- 찾을려는 데이를 전부 찾아야 한다.
		- 배열의 길이는 정해놓고 데이터를 입려해야한다.

	2. 백터
		- 백터 는 추가되고 사라지는 객체는 백터로 사용하면 부하가 커진다.

		이미지 파일에 많이 사용됨
	-
*/
/*
// 2의 n승으로 만들어주면 컴퓨터가 계산하기가 더 편하다.
//int Vector[16];
// heap 영역에 만듦
// 배열을 만드면 길이인데 heap으로 만들면 크기다 된다.

// 배열은 0 이 아닌 값으로만 초기화가 가능하다.
// 배열은 상수값으로만 초기화만 가능하다

// 아래와 같이 사용한다면 위 조건은 무시할 수 있다.
int size = 0;
int liter = 0;
int* Vector = new int[size];

Vector[liter];
*/
/*
	// 배열은 아니지만 배열처럼 사욯할 수 있따.


	// 사용할때 문제가 있음 -> 앞으로 문제가 생길 수 있다.
	// 크기 값 ( size)을 넘었을 때 문제가 생길 수 있다.
	for (int i = 0; i < size; i++)
		Vector[i] = i;

	for (int i = 0; i < size; i++)
		cout << Vector[i] << endl;

	for (int i = 0; i < 11; i++)
		cout << Vector[liter++] << endl;
*/
