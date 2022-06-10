#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vecNumbers; // 벡터 형 int

	for (int i = 0; i < 10; ++i)
		vecNumbers.push_back(10 * i);

	// **vector<int> 네임스페이스 iterator 하나의 형태 
	// **직접 접근이 어려운 경우 반복자를 사용하여 대신 접근 
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
		
		if ((*iter) > 50) // 충돌 판정
			// 만약 포문에서 무슨 이상 값 을 지울려면
			// erase 는 자신의 값을 지우고 자신에게 값을 대입 할것
			iter = vecNumbers.erase(iter);
		else
			++iter;
	}

	for (auto iter = vecNumbers.begin(); iter != vecNumbers.end();++iter )
		cout << (*iter) << endl;
	*/
	/*
	// ** 가장 앞에 있는 [원소를 반환]
	vecNumbers.front();

	// ** 가장 뒤에 있는 [ 원소를 반환]
	vecNumbers.back();

	// ** 시작점을 가르키는 [ 반복자]
	vecNumbers.begin();

	// ** 시작점을 가르키는 [ 반복자]
	vecNumbers.end();
	*/

	return 0;
}

// 언어를 쓰는 이유 데인터 관리-> 포인터 사용을 위한 이유 
/*
	int* Pointer = new int ; // new int 가 heap 영역에 있고
	//Pointer 가 스텍에 있다.
	// int형 데이터 타입과 int * 데이터 타입은 저장하는 값도 다르다
	// int 형은 4byte 정수형 int * 는 다른거는 기억할수 없지만 데이터 타입이 int형인 변수의 주소만 가지고 있을 수 있다.
	// 원본 값이 반영 되었으면 하면 call by 레퍼런스로  아니면 call by value 로
	포인터를 왜 써야 하나요 -> 아직 제대로 정보의 정리가 되지 않음
	-> 언제 써야 하나요가 맞는 말
*/

//디버그 편집할때 사용
// 릴리즈는 프로그램을 배포 파일로 만들떄 사용하면 된다