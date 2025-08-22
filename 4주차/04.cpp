#include <iostream>

using namespace std;
int main(void)
{
	// a 값 변경하여 출력
	int a = 10;
	cout << "a = " << a << endl;
	{
		int a = 20;
		cout << "a = " << a << endl;
		{
			a += 20;
			cout << "a = " << a << endl;
		}
		cout << "a = " << a << endl;
	}
	cout << "a = " << a << endl;

	// 포인터로 값 출력해보기
	int a = 10;
	int* p;
	p = &a;
	// 값 값 값
	cout << a << "\t" << *&a << "\t" << *p << "\n";
	// 주소 주소
	cout << &a << "\t" << p;

	int a = 20;
	int* p = &a;
	cout << a << "\t" << *p << endl;
	*p = 30;
	cout << a << "\t" << *p;

	int a = 10, b = 20;
	int* p = &a;
	cout << "a => " << a << " b => " << b << endl;
	cout << "*p => " << *p << endl;
	b = *p;
	cout << "a => " << a << "b => " << b << endl;
	cout << " *p => " << *p << endl;
	*p = 30;
	cout << "a => " << a << "b => " << b << endl;
	cout << " *p => " << *p << endl;

	// 값 바꾸기
	int a = 10, b = 20;
	cout << "a => " << a << "\tb => " << b << endl;
	int t;
	t = a;
	a = b;
	b = t;
	cout << "a => " << a << "\tb => " << b << endl;
	
	// 배열 값 주소로 출력하기
	int a[4] = { 10,20,30,40 };
	cout << a << "\t" << &a[0] << endl;
	cout << *a << "\t" << *&a[0] << "\t" << a[0] << endl;
	cout << a + 1 << "\t" << &a[1] << endl;
	cout << *(a + 1) << "\t" << *&a[1] << "\t" << a[1] << endl;
	cout << a + 2 << "\t" << &a[2] << endl;

	int a[4] = { 10,20,30,40 };
	int* p;
	p = a;
	int i;
	cout << a << "\t" << p << "\t" << &a[0] << "\t" << endl;
	cout << *a << "\t" << *p << "\t" << *&a[0] << "\t" << a[0] << endl;
	for (i = 0; i < 4; i++)
	{
		cout << a + i << "\t" << p + i << "\t" << &a[i] << endl;
		cout << *(a + i) << "\t" << *(p + i) << "\t" << *&a[i] << "\t" << a[i] << endl;
	}

	// 출력 결과에 max 몇번째인지 찍고 제일 작은거도 찾기
	int a[5];
	int max;
	int mini;
	int maxpo = 0;
	int minipo = 0;
	int i;
	cout << "정수형 데이터를 5개 입력하라\n";
	for (i = 0; i < 5; i++)
	{
		cout << "a[ " << i << " ] -> ";
		cin >> a[i];
	}
	max = a[0];
	mini = a[0];
	for (i = 1; i < 5; i++) {
		if (a[i] > max)
		{
			max = a[i];
			maxpo = i;
		}
		if (a[i] < mini)
		{
			mini = a[i];
			minipo = i;
		}
	}
	cout << "최댓값 " << maxpo + 1 << "번째 위치 " << max << endl;
	cout << "최소값 " << minipo + 1 << "번째 위치 " << mini << endl;

	// 배열 값 정렬하기
	int t;
	int a[5] = { 30,20,50,10,40 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << "\t";
	}
	cout << "\n";
}

// 값 계산 전 후 출력해보기
#include <iostream>
using namespace std;
int a;
void fun()
{
	cout << "\n fun a => " << a;
	a = a + 100;
	cout << "\n fun a => " << a;
}
int main(void)
{
	int a = 20;
	cout << "\n main a => " << a;
	fun();
	cout << "\n main a => " << a << "\n";

	int b = 20;
	cout << "\n main a => " << a;
	fun();
	cout << "\n main a => " << a << "\n";
}

// static 활용
#include <iostream>
using namespace std;
void sub()
{
	int a = 0;
	//static int b = 0;
	static int b;
	b = 0;
	a += 100;
	b += 100;
	cout << "auto a = " << a << endl;
	cout << "static b = " << b << endl;
}
int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "========>\n";
		sub();
	}
}

// swap 함수 여러가지 방법으로 생성
#include <iostream>
using namespace std;
void swap(int a,int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	//cout << "함수 내 a => " << a << "\tb => " << b << endl;
}
void swap1(int *pa, int *pb)
{
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}
void swap2(int &x, int &y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
int main(void)
{
	int a = 10, b = 20;
	cout << "함수 호출 전 a => " << a << "\tb => " << b << endl;
	swap(a, b);
	cout << "함수 호출 후 a => " << a << "\tb => " << b << endl;

	int a = 10, b = 20;
	cout << "함수 호출 전 a => " << a << "\tb => " << b << endl;
	swap1(&a, &b);
	cout << "함수 호출 후 a => " << a << "\tb => " << b << endl;

	int a = 10, b = 20;
	cout << "함수 호출 전 a => " << a << "\tb => " << b << endl;
	swap2(a, b);
	cout << "함수 호출 후 a => " << a << "\tb => " << b << endl;
}

// 주소값 이용하여 swap 함수 생성
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
void swap1(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int a[10][10] = { {1,3,3,4,2,2,3,1,4,2},
					 {1,4,3,2,2,2,3,1,4,1},
					 {2,3,3,4,2,2,3,1,4,1},
					 {1,3,3,2,2,1,3,3,4,1},
					 {1,3,3,4,2,2,3,2,4,3},
					 {1,2,3,2,2,4,3,2,4,3},
					 {1,3,3,4,2,2,3,1,4,1},
					 {1,3,3,4,3,2,3,1,4,1},
					 {2,3,4,4,1,2,4,1,4,1},
					 {2,4,1,2,2,3,4,1,4,1} };
	int answer[10] = { 1,3,3,4,2,2,3,1,4,1 };
	int grade1[10] = {};
	int stu_num[10] = {};
	int i, j, grade, min, rank = 0;
	int maximum, count = 0;
	cout << "\t\t■ 문항별 채점 결과 ■\n";
	cout << "====================================================\n";
	cout << "문항   ";
	for (i = 0; i < 10; i++)
	{
		cout << i << "   ";
	}
	cout << "점수\n";
	cout << "====================================================\n";
	for (i = 0; i < 10; i++)
	{
		cout << i + 1 << "번  ";
		for (j = 0; j < 10; j++)
		{
			if (a[i][j] == answer[j])
			{
				cout << "O   ";
				grade1[i]++;
			}
			else
				cout << "X   ";
		}
		cout << grade1[i] << "점\n";
		stu_num[i] = i + 1;
	}
	cout << "====================================================\n";
	cout << "\n\t\t■ 정답 및 석차 ■\n";
	cout << "\t\t================\n";
	cout << "\t\t번호  점수  석차\n";
	cout << "\t\t================\n";
	for (i = 0; i < 10; i++)
	{
		maximum = i;
		for (j = i + 1; j < 11; j++)
		{
			if (grade1[j] > grade1[maximum]) {
				maximum = j;
			}
		}
		swap1(&stu_num[i], &stu_num[maximum]);
		swap1(&grade1[i], &grade1[maximum]);
		if (grade1[i] == grade1[i - 1]) {
			rank = i;
		}
		else if (i == 0) {
			rank = i + 1;
		}
		else
			rank = i + 1;

		cout << "\t\t" << stu_num[i] << "번   " << grade1[i] << "점   " << rank << "등\n";
	}
	cout << "\t\t================\n";
}
