// ** vector ver_0.3
#include <iostream>

using namespace std;

int main(void)
{
	// what For test Check Change
	int test_Chick;
	test_Chick = 50;
	return 0;
}
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
	// ** 1. 데이터 추가 (새로운 공간 확보).
	// ** 2. 데이터 삭제.
	// ** 3. 데이터를 삽입 할 수 있는 공간의 크기 .
	// ** 4. 현재 삽입되어 있는 워소의 갯수 .
	// ** 5. 컨테이너의 시작 지점.
	// ** 6. 컨테이너의 종료 지점
*/