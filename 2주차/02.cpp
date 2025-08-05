#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	// 입력 받은 수 크기 비교
	int a, b, c;
	int max;
	cout << "세 수를 입력하세요 : ";
	cin >> a >> b >> c;
	max=(a>b)?a:b;
	max=(max>c)?max:c;
	if (a > b)
		max = a;
	else
		max = b;
	if (max < c)
		max = c;
	cout << "가장 큰 수는 : " << max << "\n";

	// 자료형 변환
	double a = 1.0;
	double b = 2.0;
	//int res01=a%b;
	int res01 = (int)a % (int)b;
	cout << a << "%" << b << "=" << res01 << endl;

	// 값 계산
	int c = 1;
	int d = 2;
	double res02;
	res02 = c / d;
	cout << c << "/" << d << "=" << res02 << endl;
	res02 = (double)c / (double)d;
	cout << c << "/" << d << "=" << res02 << endl;

	// 한 값을 입력받아 각 자리수 별로 출력
	int money;
	cout << "지불할 금액을 입력해주세요 : ";
	cin >> money;
	cout << "오백원짜리 동전 " << money / 500 << "개\n";
	cout << "백원짜리 동전 " << (money % 500)/100 << "개\n";
	cout << "오십원짜리 동전 " << (money %100)/50 << "개\n";
	cout << "십원짜리 동전 " << (money % 50)/10 << "개\n";
	cout << "일원짜리 동전 " << money %10 << "개\n";
	
	// 절댓값 출력
	int x;
	cout << "정수값을 입력하세요 -> ";
	cin >> x;
	if (x < 0)
		x = -x;
	cout << "절댓값 => " << x << "\n";
	
	// 짝수 홀수 판단
	int x;
	cout << "정수값을 입력하세요 -> ";
	cin >> x;
	if (x % 2 == 0) // 2로 나누어 나머지가 0이면 
		cout << "2의 배수이다.\n";
	else
		cout << "2의 배수가 아니다.\n";

	// 입력받은 값에 따라 다른 결과 출력
	int score;
	char grade;
	cout << "점수를 입력하세요 -> ";
	cin >> score;
	// 조건 검사
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
		else if (score >= 70)
			grade = 'C';
			else if (score >= 60)
				grade = 'D';
				else
					grade = 'F';
	cout << "입력한 점수 " << score << "은 " << grade << "학점입니다.\n";

	// switch case 문으로 출력
	int score; // 입력받은 점수를 저장할 변수
	char grade; // 구한 학점을 저장할 변수
	cout << "점수를 입력하세요 -> ";
	cin >> score;
	switch (score / 10) {
	case 10: grade = 'A'; break;
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default:grade = 'F';
	}
	cout << "입력한 점수 " << score << "은 " << grade << "학점입니다.\n";

	// 문자를 입력받아 다른 방법으로 출력
	char lang;
	cout << "하나의 알파벳을 입력하세요. -> ";
	cin >> lang;
	switch (lang)
	{
		case 'A': 
		case 'E': 
		case 'I': 
		case 'O': 
		case 'U': cout << "모음입니다.\n"; break;
		default: cout << "자음입니다.\n";
	}
	
	// 두가지 변수를 입력받아 서로 다른 방식으로 계산
	int a, b;
	cout << "두 수를 입력하세요 : ";
	cin >> a>> b;
	cout << a << " + " << b << " = " << a+b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << (double)a / b << endl;

	// 평균 점수 계산
	double com,c,eng,math;
	cout << "컴퓨터 개론과목의 점수를 입력하시오. : ";
	cin >> com;
	cout << "c언어 프로그래밍 과목의 점수를 입력하시오. : ";
	cin >> c;
	cout << "영어과목의 점수를 입력하시오. : ";
	cin >> eng;
	cout << "일반수학과목의 점수를 입력하시오. : ";
	cin >> math;
	cout << "평균잠수는 " << (com + c + eng + math) / 4 << "입니다.\n";

	// 출력 하는 과정에서 계산
	double height;
	cout << "키를 입력하세요. : ";
	cin >>	height;
	cout << "키 " << height << "의 표준 체중은 " << (height - 100) * 0.9 << "kg입니다.\n";
	
	int a, b, c;
	cout << "출발지점의 주행 거리계를 입력하시오.: ";
	cin >> a;
	cout << "도착지점의 주행 거리계를 입력하시오.: ";
	cin >> b;
	cout << "사용한 연료의 양을 입력하시오.: ";
	cin >> c;
	cout << "출발한 지점의 주행거리계: " << a << "\n";
	cout << "도착한 지점의 주행거리계: " << b << "\n";
	cout << "사용한 연료: " << c << "\n";
	cout << "연비는 " << (double)(b - a) / c << "km/l 입니다.\n";

	int	a, b, c, d, e;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cout << "평균 = " << (double)(a + b + c + d + e) / 5 << endl;

	int a, b;
	cout << "원기둥 밑면의 반지름을 입력하시오. :";
	cin >> a;
	cout << "원기둥의 높이을 입력하시오. :";
	cin >> b;
	cout << "원기둥의 부피는 " << (double)a * a * 3.14 * b << " 입니다.\n";
	
	int a, b;
	cout << "두 정수를 입력하세요. :";
	cin >> a >> b;
	cout << "a = " << a << "  b = " << b<<endl;
	cout << "9a - 5b = " << 9 * a - 5 * b << endl;
	
	double a, b, c;
	cout << "달린 거리를 입력하시오. : ";
	cin >> a;
	cout << "달린 거리에서 분을 입력하시오. : ";
	cin >> b;
	cout << "달린 거리에서 초를 입력하시오. : ";
	cin >> c;
	cout << "평균속도는 " << a / (c / 3600 + b / 60) << "입니다.\n";

	int a, b, c;
	cout << "직육면체의 가로 : ";
	cin >> a;
	cout << "직육면체의 세로 : ";
	cin >> b;
	cout << "직육면체의 높이 : ";
	cin >> c;
	cout << "직육면체의 부피는 : " << a * b * c << endl;

	// 자료형 변환하여 계산
	int x;
	double y;
	cout << "x를 입력하세요. : ";
	cin >> x;
	y = x * x - 3 * x + 1 / (double)(x - 2);
	cout << "y = " << y << endl;

	int a, b, c;
	cout << "분을 입력하세요. : ";
	cin >> a;
	b = a / 60;
	c = a % 60;
	cout << a << "분은 " << b << " 시간 " << c << " 분입니다.\n";
	
	// 두 값의 크기나 조건을 비교하여 출력
	int a, b;
	cout << "첫 번째 수를 입력하세요. : ";
	cin >> a;
	cout << "두 번째 수를 입력하세요. : ";
	cin >> b;
	cout << "i < j : " << (a < b)<< "\n";
	cout << "i <= j : " << (a <= b) << "\n";
	cout << "i == j : " << (a == b) << "\n";
	cout << "i > j : " << (a > b) << "\n";
	cout << "i >= j : " << (a >= b) << "\n";
	cout << "i && j : " << (a && b) << "\n";
	cout << "i || j : " << (a || b) << "\n";
	cout << "!i  !j : " << !a <<" "<<!b << "\n";
	
	// 각 자릿수 출력
	int a;
	cout << "10000보다 작은 정수를 입력하세요. : ";
	cin >> a;
	cout << "천의 자리: " << a / 1000<<"\n";
	cout << "백의 자리: " << (a % 1000)/100 << "\n";
	cout << "십의 자리: " << (a % 100)/10 << "\n";
	cout << "일의 자리: " << a %10 << "\n";
	
	// 소숫점 계산
	double a, b, c;
	double d;
	cout << "세 수를 입력하시오. :";
	cin >> a >> b >> c;
	d = (a - b) / (a - c);
	cout << "a = " << a << " b = " << b << " c = " << c << " div = " << d << endl;

	// 다항식 계수와 x 값을 입력받아 계산
	double a, b, c, x, one, two;
	cout << "a값을 입력하시오. : ";
	cin >> a;
	cout << "b값을 입력하시오. : ";
	cin >> b;
	cout << "c값을 입력하시오. : ";
	cin >> c;
	cout << "x값을 입력하시오. : ";
	cin >> x;
	one = 7 * x * x * x - 6 * x * x + 9 * a * x*x + b * x + c;
	two = 2 * x * x * x - 6 * x + (1 / (x + 1));
	cout << "첫번째 다항식을 계산한 값은 " << one << "입니다.\n";
	cout << "두번째 다항식을 계산한 값은 " << two << "입니다.\n";

	// 출력 하는 중에 계산
	int a;
	cout << "정수를 입력하세요. : ";
	cin >> a;
	cout << "a = " << a << "\n";
	cout << "a의 제곱 = " << a * a << "\n";
	cout << "(a-1)의 세제곱 = " << (a-1)* (a - 1)* (a - 1) << "\n";

	int a, b;
	cout << "밑변과 높이를 입력하세요. : ";
	cin >> a >> b;
	cout << "밑변 = " << a << " cm\n";
	cout << "높이 = " << b << " cm\n";
	cout << "삼각형의 면적 = " << (a * b)/2 << " cm\n";

	int f;
	cout << "화씨 온도를 입력하세요. : ";
	cin >> f;
	cout << "화씨 " << f << "도는 섭씨 " << (double)(5.0 / 9.0) * (f - 32) << "도 이다.\n";

	double a;
	cout << "지구에서의 몸무게를 입력하세요. : ";
	cin >> a;
	cout << "달에서의 몸무게는 " << a * 0.17 << " Kg 입니다.\n";

	double m;
	cout << "mm를 입력하세요. : ";
	cin >> m;
	cout << m << " mm는 " << m / 25.4 << " inch가 된다.\n";
	
	double a, b;
	cout << "원금을 입력하세요. : ";
	cin >> a;
	cout << "이율을 입력하세요. : ";
	cin >> b;
	cout << "1년간의 원리합계는 " << a + (a * b) << " 원입니다.\n";
	
	cout << "pi1 = " << 3.0 * (10.0 / 71.0)<<endl;
	cout << "pi2 = " << 3.0 * (1.0 / 7.0)<<endl;
	cout << "pi = " << ((3.0 * (10.0 / 71.0)) + (3 * (1.0 / 7.0))) / 2<<endl;

	int a, b, c, d;
	cout << "중간 점수 입력 :";
	cin >> a;
	cout << "기말 점수 입력 :";
	cin >> b;
	cout << "보고서점수 입력 :";
	cin >> c;
	cout << "출석점수 입력 :";
	cin >> d;
	cout << "입력점수\t  점수\n";
	cout << "중간 : " << a << "<30%>\t  " << a * 0.3 << endl;
	cout << "기말 : " << b << "<40%>\t  " << b * 0.4 << endl;
	cout << "보고 : " << c << "<20%>\t  " << c * 0.2 << endl;
	cout << "출석 : " << d << "<10%>\t  " << d * 0.1 << endl;
	cout << "평점 : "<< "      \t  " << (double)(a+b+c+d)/4 << endl;

	double r;
	cout << "구의 반지름을 입력하시오. :";
	cin >> r;
	cout << "구의 표면적은 " << 4 * 3.14 * r*r << "입니다.\n";
	cout << "구의 체적은 " << 4.0 / 3.0 * 3.14 * r * r * r << "입니다.\n";

	int sec;
	cout << "초를 입력하시오. :";
	cin >> sec;
	cout << sec << "초는 " << sec / 3600 << "시간 " << (sec % 3600) / 60 << "분 " << (sec % 60) % 60 << "초 입니다.\n";
	
	int cm,feet,inch;
	cout << "키를 입력하시오<cm>:";
	cin >> cm;
	cout << cm << "cm는 " << cm / 12 << "피트 " << (cm % 12) * 2.54 << "인치 입니다.\n";
	cout << "키를 입력하시오<feet>:";
	cin >> feet;
	cout << "키를 입력하시오<inch>:";
	cin >> inch;
	cout << feet << "피트 " << inch << "인치는 " << ((feet * 12)+inch) * 2.54 << "cm입니다.\n";

	int i, m;
	cout << "정수를 입력 하시오. :";
	cin >> i;
	cout << "다른 정수의 배수를 입력하시오. :";
	cin >> m;
	cout << "다음 배수는 " << i + m - (i % m) << "입니다.\n";

	int money;
	cout << "지불할 금액을 입력해주세요 : ";
	cin >> money;
	cout << "오백원짜리 동전 " << money / 500 << "개\n";
	cout << "백원짜리 동전 " << (money % 500)/100 << "개\n";
	cout << "오십원짜리 동전 " << (money %100)/50 << "개\n";
	cout << "십원짜리 동전 " << (money % 50)/10 << "개\n";
	cout << "일원짜리 동전 " << money %10 << "개\n";
	
	double cm, kg;
	cout << "키 <cm>를 입력하세요. ";
	cin >> cm;
	cout << "몸무게 <kg>를 입력하세요. ";
	cin >> kg;
	cout << "당신의 키는 " << cm << "cm" << "<" << cm / 30.48 << "feet>입니다.\n";
	cout << "당신의 체중은 " << kg << "kg <" << kg * 2.20459 << "lb>입니다.\n";
	cout << "표준 체중 " << kg << "과의 차이는 +" << 75 - ((cm - 100) * 0.9) << "kg입니다.\n";

	// 조건에 맞을경우에만 입력받기
	int a, b;
	cout << "첫번째 양의 정수 입력하세요 : ";
	cin >> a;
	if (a >= 0)
	{
		cout << "두번째 양의 정수 입력하세요 : ";
		cin >> b;
		cout << "합계 = " << a + b << endl;
	}
	else
		cout << "오류 : 음의 정수를 입력\n";

	// 문자 조건 판단
	char a;
	cin >> a;
	if (a == 'a')
		cout << "a\n";
	else
		cout << "not a\n";

	// 입력받은 값을 조건 판단후 출력
	int a;
	cout << "정수를 입력하시오. : ";
	cin >> a;
	if (a >= 0)
	{
		if (a % 2 == 0)
			cout << "입력한 수 " << a << "는(은) 양의 짝수입니다.\n";
		else
			cout << "입력한 수 " << a << "는(은) 양의 홀수입니다.\n";
	}
	else
	{
		if (a % 2 == 0)
			cout << "입력한 수 " << a << "는(은) 음의 짝수입니다.\n";
		else
			cout << "입력한 수 " << a << "는(은) 음의 홀수입니다.\n";
	}
	
	int a, b;
	cin >> a >> b;
	if (b >= 60)
		cout << a << " : " << b << "점으로 합격입니다.\n";
	else
		cout << a << " : " << b << "점으로 불합격입니다.\n";

	// 1부터 100까지의 합 5050 출력
	int a=1, b=0;
	cout << "1부터 100까지의 합을 구하는 프로그램입니다.\n";
	b = (a + 100) * 50;
	cout << "1 + 2 + --- + 100 = " << b << endl;
	
	// 여러개의 조건 검사
	int year;
	cout << "연도 = ?";
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << year << "년은 윤년이다.\n";
	else
		cout << year << "년은 평년이다\n";

	// 입력받은 값 계산하여 조건 판단
	int a,b,c;
	cout << "당신의 키와 몸무게를 입력하세요. : ";
	cin >> a >> b;
	c = (int)(a - 100) * 0.9;
	if ((c - b) > 5)
		cout << "당신은 많이 말랐군요\n";
	else if ((c - b) < -5)
		cout << "당신은 많이 살이 쪘군요\n";
	else
		cout << "당신은 표준 체형입니다\n";

	// 입력한 값에 따라 다르게 계산하여 출력
	double a,c;
	cout << "구입할 개수를 입력하시오. : ";
	cin >> a;
	c = a * 10;
	if (a >= 100)
		cout << "물건의 값은 " << c * 0.8 << "원입니다.\n";
		else if (20 <= a < 100)
			cout << "물건의 값은 " << c * 0.85 << "원입니다\n";
			else if (10<=a<20)
				cout << "물건의 값은 " << c * 0.9 << "원입니다.\n";
				else
					cout << "물건의 값은 " << c << "원입니다.\n";

	// 입력한 문자에 따라 다르게 출력
	char a;
	cout << "하나의 문자나 숫자 혹은 특수문자를 입력하시오. : ";
	cin >> a;
	if (a>='a' && a<='z')
		cout << "입력된 문자 " << a << "는 소문자 영문자 입니다.\n";
		else if(a >= 'A' && a <= 'Z')
			cout << "입력된 문자 " << a << "는 대소문자 영문자 입니다.\n";
			else if(a >= '0' && a <= '9')
				cout << "입력된 문자 " << a << "는 숫자 입니다.\n";
				else
					cout << "입력된 문자 " << a << "는 특수문자 입니다.\n";

	int a, b, c;
	cout << "국어 영어 수학 점수는?";
	cin >> a >> b >> c;
	cout << "=========================================\n";
	cout << "국어   음악   미술   평균   결과\n";
	cout << "-----------------------------------------\n";
	if ((a + b + c)/3 >= 60)
		cout << a << "     " << b << "     " << c << "     " << (double)((a + b + c) / 3) << "     합격\n";
	else
		cout << a << "     " << b << "     " << c << "     " << (double)((a + b + c) / 3) << "     불합격\n";
	cout << "=========================================\n";
	
	int a, b;
	cout << "두 수를 입력하시오. : ";
	cin >> a >> b;
	cout << a << " / " << b << "의 몫은 " << a / b << "입니다.\n";

	// 조건에 맞는 경우 추가로 입력받아 계산
	int a, b, c, d;
	cout << "성별 <남:1, 여:2> ? ";
	cin >> a;
	cout << "군 제대 <예:1 아니오:2> ? ";
	cin >> b;
	if (b == 2)
		b = 0;
	else
		b = 1;
	cout << "결혼 <예:1, 아니오:2> ? ";
	cin >> c;
	if (c == 2)
		c = 0;
	else
		c = 1;
	if (a == 2 && c == 1)
	{
		cout << "자녀수는 ? ";
		cin >> d;
	}
	else
		d = 0;
	cout << "총 가산점은 " << b + c + d << "점입니다.\n";

	int a, b, c, d;
	cout << "a 값을 입력하세요. : ";
	cin >> a;
	cout << "b 값을 입력하세요. : ";
	cin >> b;
	if (a > b)
	{
		c = a / b;
		d = a % b;
	}
	else
	{
		c = b / a;
		d = b % a;
	}
		cout << "큰 수를 작은 수로 나눈 몫은 " << c << "이고, 나머지 값은 " << d << "입니다.\n";
	
	double a, b, c, d, e;
	cout << "중간고사 점수를 입력하세요 . : ";
	cin >> a;
	cout << "기말고사 점수를 입력하세요 . : ";
	cin >> b;
	cout << "레포트 점수를 입력하세요 . : ";
	cin >> c;
	cout << "출석 점수를 입력하세요 . : ";
	cin >> d;
	e = ((a + b) / 2 * 0.6) + (c * 0.2) + (d * 0.2);
	cout << "성적 = " << e <<endl;
	if (e >= 89.5)
	{
		cout << "학점 = A\n";
		cout << "excellent\n";
	}
		else if (e<89.5 && e>=79.5)
		{
			cout << "학점 = B\n";
			cout << "good\n";
		}
			else if (e < 79.5 && e >= 69.5)
			{
				cout << "학점 = C\n";
				cout << "fair\n";
			}
				else if (e < 69.5 && e >= 59.5)
				{
					cout << "학점 = D\n";
					cout << "poor\n";
				}
					else
					{
						cout << "학점 = F\n";
						cout << "failure\n";
					}

	double money;
	cout << "월급을 입력하시오.<단위:만원> -->";
	cin >> money;
	if (money > 8000)
		money *= 0.35;
		else if (money > 4000 && money <= 8000)
			money *= 0.26;
			else if (money > 1000 && money <= 4000)
				money *= 0.17;
					else
						money *= 0.08;
	cout << "세금은 " << money << "만원 입니다.\n";

	int hour;
	double over,per,fee;
	cout << "일주일동안 일한 시간을 입력하시오. ";
	cin >> hour;
	if (hour > 30)
		over = (hour - 30)* 1.2*3100;
	else
		over = 0;
	fee = hour * 3100 + over;
	if (fee < 100000)
		per = fee * 0.05;
	else 
		per = fee * 0.1;
	cout << "임금은 " << fee-per << "원 입니다.\n";
	
	int x;
	double b;
	cout << "x값을 입력하시오.-->";
	cin >> x;
	if (x <= 0)
		b = x * x * x - 9 * x + 2;
	else
		b = 7 * x + 2;
	cout << "함수를 계산한 값은 " << b << "입니다.\n";
	
	int a, b;
	double x;
	cout << "a값과 b값을 입력하시오. : ";
	cin >> a >> b;
	if (a != 0)
	{
		x = -b / a;
		cout << "근은 " << x << "입니다.\n";
	}
	else if (a == 0 && b != 0)
		cout << "해가 없음\n";
	else if (a == 0 && b == 0)
		cout << "해가 무수히 많음\n";

	double ph;
	cout << "수소이온의 농도를 입력하시오.--> ";
	cin >> ph;
	if (ph < 3.0)
		cout << "강산성입니다.\n";
	else if (ph <3.0 && ph < 7.0)
		cout << "산성입니다.\n";
		else if (ph == 7.0)
			cout << "중성입니다.\n";
			else if (ph > 7.0&&ph<10.0)
				cout << "알칼리성입니다.\n";
				else if (ph > 10.0)
					cout << "강알칼리성입니다.\n";
		
	char a;
	int b, c,d;
	cout << "구매하고자 하는 표가 자유이용권이면 y을,아니면 n를 눌러주세요.-->";
	cin >> a;
	cout << "사용자의 나이를 입력하시오. -->";
	cin >> b;
	cout << "현재 시간이 주간이면 1을, 야간<5시이후>면 2를 입력하세요.-->";
	cin >> c;
	if (a == 'y')
	{
		if (b >= 3 && b <= 12 && b > 65)
		{
			if (c == 1)
				d = 25000;
			else
				d = 21000;
		}
		else
		{
			if (c == 1)
				d = 34000;
			else
				d = 29000;
		}
	}
	else
	{
		if (a>12 && a<65)
		{
			if (c == 1)
				d = 20000;
			else
				d = 17000;
		}
		else
		{
			if (c == 1)
				d = 27000;
			else
				d = 23000;
		}
	}
	cout << "요금은 " << d << "원 입니다.\n";

	double a, b, c, d;
	cout << "나이를 입력하시오.";
	cin >> a;
	cout << "키를 입력하시오.";
	cin >> b;
	cout << "체중을 입력하시오.";
	cin >> c;
	d = c / ((b * 0.01)*(b*0.01));
		if (a < 30)
		{
			if (d <= 17.9)
				cout << "저체중입니다.\n";
			else if (d >= 18 && d <= 23)
				cout << "표준체중입니다.\n";
			else if (d >= 24 && d <= 30)
				cout << "과체중입니다.\n";
			else
				cout << "비만입니다.\n";
		}
		else
		{
			if (d <= 18.4)
				cout << "저체중입니다.\n";
			else if (d >= 18.5 && d <= 24)
				cout << "표준체중입니다.\n";
			else if (d >= 25 && d <= 30)
				cout << "과체중입니다.\n";
			else
				cout << "비만입니다.\n";
		}

	int a, b;
	double c,d;
	cout << "1.교육용 2.농사용 3.일반용 -->";
	cin >> a;
	cout << "월을 입력하시오.-->";
	cin >> b;
	cout << "전력량을 입력하시오.-->";
	cin >> c;
	if (a == 1)
	{
		if (7 <= b <= 8)
			d = 4090 + 73.0 * c;
		else if (4 <= b <= 6 && b == 9)
			d = 4090 + 46.9 * c;
			else if (1 <= b <= 3 && 10 <= b <= 12)
				d = 4090 + 50.5 * c;
	}
	else if (a == 2)
	{
		if (4 <= b <= 6 && b == 9)
			d = 1070 + 36.4 * c;
	}
	else
	{
		if (b >= 7 && b <= 8)
			d = 5320 + 94.2 * c;
		else if (b >= 4 && b <= 6 && b == 9)
			d = 5320 + 62.7 * c;
		else
			d = 5320 + 66.8 * c;
	}
	cout << "전력요금은 " << d << "원 입니다.\n";
	
	int a=1, b=0;
	cout << "1부터 100까지의 합을 구하는 프로그램입니다\n";
	{
	dot1:
		b += a;
		a++;
		if (a < 101)
			goto dot1;
	}
	cout << "1 + 2 + --- + 100 = "<<b<<endl;
	
	// goto 활용
	int a, b, c=0,d=0;
	cout << "입력받을 수의 갯수를 입력해주세요 : ";
	cin >> a;
	dot1:;
	cout << "계산하실 수를 입력: ";
	cin >> b;
	getchar();
	c += b;
	d++;
	if (d < a)
		goto dot1;
	cout << "입력하신 수의 평균은 " << c / a << "입니다.\n";

	int a, b, c;
	dot1:
		cout << "\n 수를 입력하시오. : ";
		cin >> a;
		if (a == 0) goto dot2;
		c = 1;
		for (b = 1; b <= a; b++)
			c *= b;
		cout << a << "! = " << c;
		goto dot1;
	dot2:;

	// 계산 식 안에서 조건 비교
	int a, b, c;
	cout << "x좌표값을 입력하시오. :";
	cin >> a;
	cout << "y좌표값을 입력하시오. :";
	cin >> b;
	c = ((a > 0 && b > 0) ? 1 : ((a < 0 && b>0) ? 2 : ((a < 0 && b < 0)) ? 3 : 4));
	cout << "입력받은 좌표는 " << c << "사분면입니다.\n";

	// 2차방정식 계수를 입력받아 근의 공식 활용하여 x값 출력
	int a, b, c, d;
	float x1, x2, x;
	cout << "2차방정식을 구하기 위한 a,b,c값을 입력하시오. -> ";
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d == 0)
	{
		x = -b / (2 * a);
		cout << "중근입니다. 근은 " << x << "와 같습니다.\n";
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "근은 " << x1 << "와 " << x2 << "입니다.\n";
	}
	else
		cout << "허근입니다.\n";

	// 계산할 식 선택하여 선택된 계산식 출력
	char a;
	int b, c, d, n = 2;
	double e, f;
	cout << "계산식을 고를 문자를 입력하시오.\n";
	cout << "R->사각형의 면적, T->삼각형의 면적,C->원의 면적\n-->";
	a = getchar();
	switch (a)
	{
	case 'R':
	case 'r':
	{
		cout << "사각형의 가로의 길이를 입력하시오. : ";
		cin >> b;
		cout << "사각형의 세로의 길이를 입력하시오. : ";
		cin >> c;
		d = b * c;
		cout << "사각형의 면적은 " << d << "입니다.\n";
		break;
	}
	case 'T':
	case 't':
	{
		cout << "삼각형의 가로의 길이를 입력하시오. : ";
		cin >> b;
		cout << "삼각형의 세로의 길이를 입력하시오. : ";
		cin >> c;
		f = (double)b * c / 2;
		cout << "삼각형의 면적은 " << f << "입니다.\n";
		break;
	}
	case 'C':
	case 'c':
	{
		cout << "원의 반지름을 입력하시오. : ";
		cin >> e;
		f = e * e * 3.14;
		cout << "원의 면적은 " << f << "입니다.\n";
		break;
	}
	default:
		cout << "잘못된 입력입니다.\n";
	}
	
	// 100보다 작은 경우에만 반복하여 계산
	int a=1, b=0;
		cout << "1부터 100까지의 합을 구하는 프로그램입니다\n";
		{
		dot1:
			b += a;
			a++;
			if (a < 100)
				goto dot1;
		}
		cout << "1 + 2 + --- + 99 = "<<b<<endl;
	
	// 문자를 입력받아 입력받은 문자가 무엇인지에 따라 출력
	char a;
	cout << "한 개의 문자를 입력하시오. : ";
	cin >> a;
	switch (a)
	{
	case 'a': cout << a << endl; break;
	case 'b': cout << a << "\ta\n"; break;
	case 'c': cout << a << "\tb\ta\n"; break;
	case 'd': cout << a << "\tc\tb\ta\n"; break;
	default:
		cout << a << endl;
		break;
	}

	// 계산식 출력
	double pi1, pi2, pi;
	pi1 = 3.0 + (10.0 / 71.0);
	pi2 = 3.0 + (1.0 / 7.0);
	pi = (pi1 + pi2) / 2.0;
	cout << "pi1 = " << pi1 << endl;
	cout << "pi2 = " << pi2 << endl;
	cout << "pi = " << pi << endl;
}
