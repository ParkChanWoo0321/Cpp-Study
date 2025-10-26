#include <iostream>
using namespace std;
int main(void)
{
	// 문자열 출력
	char str[256] = "Apple";
	const char* ptr = "Banana";
	cout << "str = " << (int)str << "\t str = " << str << endl;
	cout << "ptr = " << (int)ptr << "\t ptr = " << ptr << endl;
	// str = "Grapes"
	// ptr 변경 후 출력
	ptr = "Orange";
	cout << "ptr = " << (int)ptr << "\t ptr = " << ptr << endl;
}

// pf의 값을 지정하여 함수 이름처럼 쓸 수 있음
#include <iostream>
using namespace std;
void(*pf)(void);
void one()
{
	cout << "one \n";
}
void two()
{
	cout << "two \n";
}
void three()
{
	cout << "three \n";
}
int* func()
{
	int n;
	cin >> n;
	return &n;
}
char* func1(char* s)
{
	cout << s << endl;
	return s;
}
int main(void)
{
	pf = one;
	pf();
	pf = two;
	pf();
	pf = three;
	pf();

	int* ip;
	ip = func();
	cout << *ip << endl;

	char* str;
	str = func1("ABC");
	cout << str << endl;
}

// namecard 구조체 생성 후 활용해보기
#include <iostream>
using namespace std;
struct namecard
{
	string name;
	string job;
	string tel;
	string email;
};
void structPrn(namecard temp)
{
	cout << "\n " << temp.name << "\t" << temp.job << "\t" << temp.tel << "\t" << temp.email;
}
namecard Strcinput()
{
	namecard man;
	cout << "이름을 입력하시오.";
	cin >> man.name;
	cout << "직업을 입력하시오.";
	cin >> man.job;
	cout << "번호를 입력하시오.";
	cin >> man.tel;
	cout << "이메일을 입력하시오.";
	cin >> man.email;
	return man;
};
int main(void)
{
	namecard man;
	cout << "이름을 입력하세요 => ";
	cin >> man.name;
	cout << "직업을 입력하세요 => ";
	cin >> man.job;
	cout << "연락처을 입력하세요 => ";
	cin >> man.tel;
	cout << "이메일을 입력하세요 => ";
	cin >> man.email;
	cout << "\n 입력받은 데이터를 출력합니다.";
	cout << "\n 이름\t직업\t연락처\t이메일";
	cout << "\n===============================";
	cout << "\n " << man.name << "\t" << man.job << "\t" << man.tel << "\t" << man.email;
	cout << "\n===============================";
	cout << "\n sizeof(namecard) => " << sizeof(namecard);
	cout << "\n 구조체 변수의 메모리 사이즈 => " << sizeof(namecard) << endl;

	namecard man;
	cout << "이름을 입력하세요 => ";
	cin >> man.name;
	cout << "직업을 입력하세요 => ";
	cin >> man.job;
	cout << "연락처을 입력하세요 => ";
	cin >> man.tel;
	cout << "이메일을 입력하세요 => ";
	cin >> man.email;

	namecard man = { "김주현","MCSE전문강사","418-9876","freentour@naver.com" };
	cout << "\n 입력받은 데이터를 출력합니다.";
	cout << "\n 이름\t직업\t연락처\t이메일";
	cout << "\n===============================";
	cout << "\n " << man.name << "\t" << man.job << "\t" << man.tel << "\t" << man.email;
	cout << "\n===============================";
	cout << "\n sizeof(namecard) => " << sizeof(namecard);
	cout << "\n 구조체 변수의 메모리 사이즈 => " << sizeof(namecard) << endl;

	namecard x = { "김주현","MCSE전문강사","418-9876","freentour@naver.com" };
	namecard y = { "박혜경","웹마스터","551-6986","hk@naver.com" };
	/*namecard z = { "김동식","기획A팀대리","318-3961","ds@naver.com" };*/
	namecard z;
	z = x;
	cout << "\n 이름\t직업\t\t연락처\t\t이메일";
	cout << "\n============================================================";
	cout << "\n " << x.name << "\t" << x.job << "\t" << x.tel << "\t" << x.email;
	cout << "\n " << y.name << "\t" << y.job << "\t" << y.tel << "\t" << y.email;
	cout << "\n " << z.name << "\t" << z.job << "\t" << z.tel << "\t" << z.email;
	cout << "\n============================================================";

	namecard x[3] = { { "김주현","MCSE전문강사","418-9876","freentour@naver.com" } , { "박혜경","웹마스터","551-6986","hk@naver.com" },{ "김동식","기획A팀대리","318-3961","ds@naver.com" } };
	for (int i = 0; i < 3; i++) cout << "\n " << x[i].name << "\t" << x[i].job << "\t" << x[i].tel << "\t" << x[i].email;

	namecard x[3] = { { "김주현","MCSE전문강사","418-9876","freentour@naver.com" } ,
	{ "박혜경","웹마스터","551-6986","hk@naver.com" },
	{ "김동식","기획A팀대리","318-3961","ds@naver.com" } };
	for (int i = 0; i < 3; i++)
		cout << "\n " << x[i].name << "\t" << x[i].job << "\t" << x[i].tel << "\t" << x[i].email;

	namecard x[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "이름을 입력하시오.";
		cin >> x[i].name;
		cout << "직업을 입력하시오.";
		cin >> x[i].job;
		cout << "번호를 입력하시오.";
		cin >> x[i].tel;
		cout << "이메일을 입력하시오.";
		cin >> x[i].email;
	}
	for (int i = 0; i < 3; i++)
		cout << x[i].name << "\t" << x[i].job << "\t" << x[i].tel << "\t" << x[i].email << endl;

	namecard x = { "김주현","MCSE전문강사","418-9876","freentour@naver.com" };
	namecard y = { "박혜경","웹마스터","551-6986","hk@naver.com" };
	namecard z = { "김동식","기획A팀대리","318-3961","ds@naver.com" };
	cout << "\n 이름\t직업\t\t연락처\t\t이메일";
	cout << "\n============================================================";
	structPrn(x);
	structPrn(y);
	structPrn(z);
	cout << "\n============================================================\n";

	namecard x, y, z;
	x = Strcinput();
	y = Strcinput();
	z = Strcinput();
	cout << "\n 이름\t직업\t\t연락처\t\t이메일";
	cout << "\n============================================================";
	structPrn(x);
	structPrn(y);
	structPrn(z);
	cout << "\n============================================================\n";

	namecard x[3];
	for (int i = 0; i < 3; i++)
		x[i] = Strcinput();
	cout << "\n 이름\t직업\t\t연락처\t\t이메일";
	cout << "\n============================================================";
	for (int i = 0; i < 3; i++)
		structPrn(x[i]);
	cout << "\n============================================================\n";

	namecard x = { "전수빈","치과의사","356-0868","eldy@naver.com" };
	namecard y = { "전원지","디자이너","345-0876","onejee@naver.com" };
	namecard* p;
	p = &x;
	cout << "\n 이름\t직업\t\t연락처\t\t이메일";
	cout << "\n============================================================\n";
	cout << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email << endl;
	p = &y;
	cout << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email << endl;
	cout << "============================================================\n";
	cout << "\n sizeof(x) => " << sizeof(x);
	cout << "\n sizeof(p) => " << sizeof(p) << endl;
}

// 구조체를 이용하여 성적표 만들기
#include <iostream>
using namespace std;
struct student
{
	int id;
	string name;
	int kor;
	int math;
	int eng;
	int total;
	double ave;
	char grade;
	int sukcha;
};
int main(void)
{
	struct student ST[5];
	int i, j;
	for (i = 0; i < 5; i++)
	{
		cout << "학번을 입력하시오. : ";
		cin >> ST[i].id;
		cout << "이름을 입력하시오. : ";
		cin >> ST[i].name;
		cout << "국어 점수를 입력하시오. : ";
		cin >> ST[i].kor;
		cout << "수학 점수를 입력하시오. : ";
		cin >> ST[i].math;
		cout << "영어 점수를 입력하시오. : ";
		cin >> ST[i].eng;
		ST[i].total = ST[i].kor + ST[i].math + ST[i].eng;
		ST[i].ave = ST[i].total / 3.0;
		switch ((int)(ST[i].ave) / 10)
		{
		case 10:
		case 9: ST[i].grade = 'A'; break;
		case 8: ST[i].grade = 'B'; break;
		case 7: ST[i].grade = 'C'; break;
		case 6: ST[i].grade = 'D'; break;
		default: ST[i].grade = 'F'; break;
		}
	}
	for(i=0;i<5;i++)
	{
		ST[i].sukcha = 1;
		for (j = 0; j < 5; j++)
		{
			if (ST[i].ave < ST[j].ave)
				ST[i].sukcha++;
		}
	}
	cout << "번  호  이  름  국어  영어  수학  합계  평균 학점 석차\n";
	for (i = 0; i < 5; i++)
	{
		cout << ST[i].id << "  " << ST[i].name << "  " << ST[i].kor << "  " << ST[i].eng << "  " << ST[i].math << "  " << ST[i].total << "  " << ST[i].ave << "  " << (char)(ST[i].grade) << "  " << ST[i].sukcha << endl;
	}
}
