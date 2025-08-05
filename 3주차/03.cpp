//#include <iostream>
//#include <string>
//#include <stdlib.h>
//#include <conio.h>
//#include <time.h>
//#include <cmath>
//#include <iomanip>
//int main()
//{
//	// 값 누적시켜서 계산하기
//	int total = 0;
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		cout << "i =" << i << endl;
//		total += i;
//		cout << "total =" << total << endl;
//	}
//	cout << "1부터 " << i - 1 << "까지의 합계는 " << total << "입니다.\n";
//
//	// 4명의 성적표를 입력받기
//	// 학번 이름 국어 영어 수학 점수 입력받기
//	// 각 개인의 합계와 평균과 학점 구하기
//	int i, num, kor, eng, math, sum;
//	string name;
//	double avg;
//	char grade;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "학번을 입력하시오. :";
//		cin >> num;
//		cout << "이름을 입력하시오. :";
//		cin >> name;
//		cout << "국어점수를 입력하시오. :";
//		cin >> kor;
//		cout << "영어점수를 입력하시오. :";
//		cin >> eng;
//		cout << "수학을 입력하시오. :";
//		cin >> math;
//		sum = kor + eng + math;
//		avg = sum / 3.0;
//		switch ((int)avg / 10)
//		{
//		case 10: grade = 'A'; break;
//		case 9: grade = 'B'; break;
//		case 8: grade = 'C'; break;
//		case 7: grade = 'D'; break;
//		case 6: grade = 'E'; break;
//		default: grade = 'F'; break;
//		}
//		cout << "학번" << num << "인 학생 " << name << "의 점수 합계는 " << sum << "평균은 " << avg << "이고, 학점은 " << grade << "이다.\n";
//	}
//
//	// 원하는 구구단 출력
//	int dan;
//	cout << "원하는 단을 입력하세요 -> ";
//	cin >> dan;
//	for (int j = 1; j < 10; j++)
//		cout << dan << "*" << j << " = " << dan * j << endl;
//	for (int dan = 1; dan <= 9; dan++)
//		for (int j = 1; j < 10; j++)
//			cout << dan << " * " << j << " = " << dan * j << endl;
//
//	// 1단부터 9단까지 모든 단 출력
//	cout << "구구단\n";
//	for (int i = 1; i <= 7; i += 3)
//	{
//		cout << i << "단\t" << i + 1 << "단\t" << i + 2 << "단\n";
//		for (int j = 1; j <= 9; j++)
//		{
//			cout << i << "*" << j << "=" << i * j << "\t";
//			cout << i + 1 << "*" << j << "=" << (i + 1) * j << "\t";
//			cout << i + 2 << "*" << j << "=" << (i + 2) * j << "\n";
//		}
//	}
//
//	// 조합에 따른 경우의 수 모두 출력
//	// for문 3개
//	int johab;
//	cout << "조건을 만족하는 경우는 다음과 같습니다.\n";
//	for (int i = 1; i < 6; i++)
//	{
//		for (int j = 1; j < 6; j++)
//		{
//			for (int k = 1; k < 6; k++)
//			{
//				johab = 2 * i + 3 * j + 5 * k;
//				if (johab >= 23 && johab <= 25)
//				{
//					cout << "2g 추 " << i << "개 3g 추 " << j << "개 5g 추 " << k << "개\n\n";
//				}
//			}
//		}
//	}
//
//	// 조건에 맞는 경우 값 누적 계산
//	int total = 0;
//	int i = 1;
//	while (i <= 10)
//	{
//		total += i;
//		i++;
//	}
//	cout << "1-10까지의 합은 " << total << endl;
//
//	// 0이 아닌 다른 수 계속 입력받기
//	int num;
//	while (1)
//	{
//		cout << "수를 입력하세요.(0을 입력하면 종료) : ";
//		cin >> num;
//		if (num == 0)
//			break;
//		else
//			cout << num << "를 입력하셨군요.\n";
//	}
//	cout << num << "을 입력하였기에 반복문이 종료되었습니다.\n";
//
//	// 홀수만 누적 계산하기
//	int total = 0;
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i % 2 == 0)
//			break;
//		total += i;
//	}
//	cout << total << endl;
//
//	// 일정 값을 입력 받을때까지 무한 실행
//	double l, km;
//	char a;
//	while (1)
//	{
//		cout << "연료의 양을 입력하시오. <l> : ";
//		cin >> l;
//		cout << "주행거리를 입력하시오. <km> : ";
//		cin >> km;
//		cout << "연비는" << km / l << "km/l 입니다.\n";
//		cout << "다시 계산하시겠습니까?<Y/N> : ";
//		cin >> a;
//		if (a == 'N' || a == 'n')
//			break;
//	}
//
//	// 원하는 음식을 원하는 만큼 저장하여 총 가격을 출력
//	int a, b;
//	double d, e, f = 0, g;
//	char c;
//	cout << "*********************************************\n";
//	cout << "McDovell's Restauarant\n";
//	cout << "*********************************************\n";
//	cout << "Make your Selection from the menu below :\n";
//	cout << "1.Regular Hamburger           $ 0.89\n";
//	cout << "2.Regular Cheeseburger        $ 0.99\n";
//	cout << "3.Fish Sandwich               $ 1.29\n";
//	cout << "4.Half-pounder with cheese    $ 2.49\n";
//	cout << "5.French fries                $ 0.79\n";
//	cout << "6.Large soft drink            $ 0.99\n";
//	cout << "*********************************************\n";
//	while (1)
//	{
//		cout << "Select 1,2,3,4,5 or 6 -->";
//		cin >> a;
//		cout << "주문할 수량을 입력하시오. -->";
//		cin >> b;
//		switch (a)
//		{
//		case 1: d = 0.89; break;
//		case 2: d = 0.99; break;
//		case 3: d = 1.29; break;
//		case 4: d = 2.49; break;
//		case 5: d = 0.79; break;
//		case 6: d = 0.99; break;
//		}
//		e = d * b;
//		f += e;
//		cout << "추가로 주문하시겠습니까?<Y/N>";
//		cin >> c;
//		if (c == 'N' || c == 'n')
//			break;
//	}
//	g = f * 0.055;
//	cout << "Please pay [ $" << f - g << "  ]\n";
//	cout << "Thank you for eationg at McDowell's.\n";
//
//	int a, b, e, f = 0, g = 0;
//	char c;
//	while (1)
//	{
//		cout << "당신은 어떤 과일을 좋아하십니까?\n";
//		cout << "1.사과  2.바나나  3.오렌지\n";
//		cout << "원하는 과일의 번호를 입력하시오. ->";
//		cin >> a;
//		cout << "당신이 구입할 과일의 개수를 입력하시오. ->";
//		cin >> b;
//		switch (a)
//		{
//		case 1:e = 500; break;
//		case 2:e = 800; break;
//		case 3:e = 1000; break;
//		}
//		f = e * b;
//		g += f;
//		cout << "-추가-계속 다른 과일의 구입을 원하시면 'y'를, 아니면 'n'을 입력하시오. ->";
//		cin >> c;
//		if (c == 'n' || c == 'N')
//			break;
//	}
//	cout << "당신이 지불할 가격은 " << g << "원 입니다.\n";
//
//	// 조건을 판단하여 다른 경우로 계산
//	int a, b;
//	char c, d;
//	double e, f, g = 0, h = 0;
//	cout << "목적지\n";
//	cout << "1. 서울 <25000원> 2. 부산 <18000원> 3. 광주 <12000원> 4. 대구<20000원>\n";
//	while (1)
//	{
//		cout << "목적지 번호를 입력하시오. -> ";
//		cin >> a;
//		cout << "구매하고자 하는 표의 갯수를 입력하시오. -> ";
//		cin >> b;
//		cout << "어른이면 'Y', 학생인경우 'N'을 입력하시오. -> ";
//		cin >> c;
//		switch (a)
//		{
//		case 1:e = 25000; break;
//		case 2:e = 18000; break;
//		case 3: e = 12000; break;
//		case 4: e = 20000; break;
//		}
//		if (c == 'y' || c == 'y')
//		{
//			cout << "성인이므로 할인하지 않습니다.\n";
//			f = e;
//		}
//		else
//			f = e * 0.5;
//		h = f * b;
//		g += h;
//		cout << "더 구매하시겠습니까?<Y/N>";
//		cin >> d;
//		if (d == 'n' || d == 'N')
//			break;
//	}
//	cout << "버스 요금은 <  " << g << "원  >입니다.\n";
//
//	// 100000 되기 전까지 반복하여 계산한 후 그 결과 출력
//	double a = 1, b, c = 0;
//	while (1)
//	{
//		b = 4.0 / a;
//		b *= -1;
//		a += 3.0;
//		c += b;
//		if (a < 100000)
//			break;
//	}
//	cout << c << endl;
//
//	// 계산 전 계산 후 값 출력
//	int i;
//	cout << "정상가격\t\t30세일가격\n";
//	for (i = 10000; i <= 20000; i += 1000)
//		cout << i << "원 \t\t " << i * 0.7 << "원\n";
//
//	// * 출력
//	int i, j, k;
//	for (i = 1; i < 6; i++)
//	{
//		cout << "막대 #" << i << "의 높이:";
//		cin >> k;
//		for (j = 1; j < k + 1; j++)
//			cout << "*";
//		cout << "\n";
//	}
//
//	// 각각 계산된 값 출력
//	int i;
//	cout << "가격\t30%\t50%\t70%\n";
//	for (i = 10000; i <= 50000; i += 5000)
//		cout << i << "\t" << i * 0.7 << "\t" << i * 0.5 << "\t" << i * 0.3 << endl;
//
//	// 일정 값 까지의 합 계산
//	int a, i, sum = 0;
//	cout << "정수를 입력하시오. :";
//	cin >> a;
//	cout << "--\t--------------------\n";
//	cout << "  \t1부터 " << a << "까지의 합\n";
//	cout << "--\t--------------------\n";
//	for (i = 1; i <= a; i++)
//	{
//		sum += i;
//		cout << i << "\t\t" << sum << endl;
//	}
//
//	// 누적 계산된 값 하나씩 출력
//	int i;
//	double a, d = 1, e = 0;
//	cout << "====================\n";
//	cout << "연도\t원리금\n";
//	cout << "====================\n";
//	for (i = 1; i <= 10; i++)
//	{
//		a = (1 + 0.07);
//		a *= a;
//		d = 10000000 * a;
//		cout << i << "\t" << d << endl;
//	}
//
//	// 문자 출력
//	int i, k, j;
//	char l;
//	for (i = 0; i < 31; i++)
//	{
//		for (j = i; j < 30; k++)
//		{
//			cout << " ";
//		}
//		for (k = 0; j <= i; k++)
//		{
//			l = 172;
//			cout << (char)'l';
//			l--;
//		}
//		cout << "\n";
//	}
//
//	// 9999 보다 작은 3의 배수 최댓값 출력
//	int i = 1;
//	int sum = 0;
//	while (1)
//	{
//		sum += i * 3;
//		if (sum > 9999)
//			break;
//		i++;
//	}
//	cout << "최댓값 i = " << i - 1 << ", sum = " << sum - (i * 3) << endl;
//
//	double pi = 4.0, sign = -1, n = 3;
//	while (n < 100000) {
//		{
//			pi += sign * (4.0 / n);
//			sign *= -1;
//			n += 2;
//		}
//	}
//	cout << "n = " << n - 2 << " pi = " << pi << endl;
//
//	// 그만할때까지 프로그램 무한 실행
//	int a;
//	double r;
//	char d;
//	cout << "=========================\n";
//	cout << "== 1. 원의 둘레 구하기 ==\n";
//	cout << "== 2. 원의 넓이 구하기 ==\n";
//	cout << "== 3. 구의 부피 구하기 ==\n";
//	cout << "== 4. 그만두기         ==\n";
//	cout << "=========================\n";
//	while (1)
//	{
//		cout << "◈ 원하는 내용은? ";
//		cin >> a;
//		if (a == 4)
//			cout << "프로그램을 끝냅니다.\n";
//		break;
//		cout << "\n>> 반지름은? ";
//		cin >> r;
//		switch (a)
//		{
//		case 1:cout << "\n>> 반지름이 " << r << "인 원의 둘레는 " << 2.0 * 3.14 * r << endl; break;
//		case 2:cout << "\n>> 반지름이 " << r << "인 원의 넓이는 " << r * r * 3.14 << endl; break;
//		case 3:cout << "\n>> 반지름이 " << r << "인 원의 부피는 " << (3.0 / 4.0) * 3.14 * r * r * r << endl; break;
//		}
//		cout << ">> 결과를 확인했으면 아무키나 누르세요.";
//		cin >> d;
//	}
//
//	// 처음부터 내가 입력한 날 까지의 잔량을 순서대로 전부 출력
//	int a, i;
//	double b = 100;
//	cout << "현재 인의 양은 100.0 mg 입니다.\n";
//	cout << "\n몇 일째 되는날의 인의 최소 잔량을 구할까요? ";
//	cin >> a;
//	for (i = 14; i <= a; i += 14)
//	{
//		b /= 2;
//		cout << i << "일까지의 인의 최소 잔량은 " << b << " mg 이상\n";
//	}
//	cout << "\n>>그러므로 " << a << "일 째에는 " << b << "mg 이상 남아있습니다.\n";
//
//	// 여러개의 값 입력 받은 후 계산 결괏값 출력
//	double a, b, c, k;
//	cout << "세 수를 입력하시오. : ";
//	cin >> a >> b >> c;
//	k = b * b - 4 * a * c;
//	cout << "판별식의 값 = " << k << endl;
//
//	int a = 6, b = 2, z;
//	z = (a + b) * (a + b);
//	cout << "<" << a << " + " << b << ">^2 = " << z << endl;
//
//	int x, y;
//	cout << "두 수를 입력하시오. : ";
//	cin >> x >> y;
//	cout << x << " * " << y << " = " << x * y << endl;
//	cout << x << " + " << y << " = " << x + y << endl;
//	cout << x << " - " << y << " = " << x - y << endl;
//	cout << x << " / " << y << " = " << x / y << endl;
//
//	int a, b;
//	cout << "정수를 입력하시오. : ";
//	cin >> a;
//	int i, sum;
//	if (a <= 0)
//	{
//		cout << "에러 : 입력한 수가 0 이하 입니다.\n";
//		exit(0);
//	}
//	sum = 0;
//	for (i = 1; i <= a; i++)
//		sum += i;
//	cout << "1부터 " << a << "까지의 합은 " << sum << "입니다.\n";
//
//	double a, p, d = 0;
//	int n;
//	cout << "두 수를 입력하세요. : ";
//	cin >> a >> n;
//	double result;
//	int i;
//	result = 1.0;
//	for (i = 0; i < n; i++)
//		result *= a;
//	d = result;
//	cout << "power<" << a << "," << n << "> = " << d << endl;
//
//	int x, y, z, d;
//	cout << "세 정수를 입력하시오. : ";
//	cin >> x >> y >> z;
//	if (x > y) {
//		if (x > y)
//			d = x;
//		else
//			d = z;
//	}
//	else if (y > z)
//		d = y;
//	else
//		d = z;
//	cout << x << " " << y << " " << z << " 중 가장 큰 수는 " << d << "이다.\n";
//
//	// 랜덤 값 생성 후 그 만큼 * 출력
//	int i;
//	int car1_dist = 0, car2_dist = 0;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 6; i++)
//	{
//		car1_dist += rand() % 100;
//		car2_dist += rand() % 100;
//		cout << "CAR #" << 1 << ":";
//		for (i = 0; i < car1_dist / 10; i++)
//		{
//			cout << "*";
//		}
//		cout << "\n";
//		cout << "CAR #" << 2 << ":";
//		for (i = 0; i < car2_dist / 10; i++)
//		{
//			cout << "*";
//		}
//		cout << "\n";
//		cout << "--------------------\n";
//		_getch();
//	}
//
//	// 나머지가 0 이면 배수 아니면 배수가 아님
//	int a, b, c;
//	cout << "배수를 판단할 두 정수를 입력해주세요\n";
//	cout << "첫번째 정수 : ";
//	cin >> a;
//	cout << "두번째 정수 : ";
//	cin >> b;
//	c = a % b;
//	if (c == 0)
//		cout << a << "은 " << b << "의 배수입니다.\n";
//	else
//		cout << a << "은 " << b << "의 배수가 아닙니다.\n";
//
//	// 점 사이의 거리 구하기
//	double x1, x2, y1, y2;
//	cout << "첫번째 좌표값을 입력해주세요 : ";
//	cin >> x1 >> x2;
//	cout << "두번째 좌표값을 입력해주세요. : ";
//	cin >> y1 >> y2;
//	double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	cout << "두 점사이의 거리는 " << d << "입니다.\n";
//
//	// 수열의 합 계산
//	int a, b, i, sum = 0;
//	cout << "두 수를 입력하시오. : ";
//	cin >> a >> b;
//	for (i = 1; i <= a; i++)
//		sum += pow(i, b);
//	cout << "1^" << b << " + -- + " << a << "^" << b << "까지의 수열의 합 = " << sum << endl;
//
//	// 근의 공식 계산
//	double a, b, c;
//	double x1, x2;
//	cout << "3가지 정수 입력 : ";
//	cin >> a >> b >> c;
//	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
//	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
//	if ((b * b - 4 * a * c) < 0)
//		cout << "근이 없습니다.\n";
//	else
//		cout << "이차방정식의 근은 " << x1 << " " << x2 << "입니다.\n";
//
//	// 일정 값 받을 때 까지 프로그램 무한 실행
//	double a, c;
//	int b;
//	char d;
//	while (1)
//	{
//		cout << "계산하실 실수값을 입력해주세요 : ";
//		cin >> a;
//		cout << "정수값을 입력해주세요 :";
//		cin >> b;
//		c = pow(a, b);
//		cout << c << endl;
//		cout << "다시 계산하시겠습니까? <Y/N> : ";
//		cin >> d;
//		if (d == 'N' || d == 'n')
//			break;
//	}
//	
//	// 조건에 맞는 내용 출력
//	int a;
//	cout << "정수를 입력해주세요. : ";
//	cin >> a;
//	if (a % 2 == 0)
//		cout << "주어진 정수는 짝수입니다.\n";
//	else
//		cout << "주어진 정수는 홀수입니다. \n";
//	if (a < 0)
//	{
//		cout << "주어진 정수의 절대값은 " << a * -1 << "입니다.\n";
//		cout << "주어진 정수는 음수입니다.\n";
//	}
//	else
//	{
//		cout << "주어진 정수의 절대값은 " << a << "입니다.\n";
//		cout << "주어진 정수는 양수입니다.\n";
//	}
//	
//	int a, b, d;
//	double c;
//	cout << "1.원의 넓이  2.삼각형의 넓이  3.사각형의 넓이\n";
//	cout << "구하고자 하는 도형의 번호를 입력하시오. -->";
//	cin >> a;
//	if (a == 1)
//	{
//		cout << "반지름을 입력하시오.-->";
//		cin >> b;
//		c = b * b * 3.14;
//		cout << "원의 넓이는 " << c << "입니다.\n";
//	}
//	else if (a == 2)
//	{
//		cout << "삼각형의 높이와 밑변을 입력하시오. -->";
//		cin >> b >> d;
//		c = b * d * 0.5;
//		cout << "삼각형의 넓이는 " << c << "입니다.\n";
//	}
//	else
//	{
//		cout << "사각형의 높이와 밑변을 입력하시오. -->";
//		cin >> b >> d;
//		c = b * d;
//		cout << "사각형의 넓이는 " << c << "입니다.\n";
//	}
//
//	// pow 이용
//	int i;
//	double a;
//	cout << "====================\n";
//	cout << "연도\t원리금\n";
//	cout << "====================\n";
//	for (i = 1; i <= 10; i++)
//	{
//		a = 10000000.0 * pow(1.0 + 0.07, i);
//		cout << i << "\t" << a << endl;
//	}
//
//	char a = 'a';
//	char b;
//	int n = 26;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//			cout << " ";
//		for (b = 'a'; b <= a; b++)
//			cout << b;
//		cout << "\n";
//		a++;
//	}
//
//	// 소문자를 대문자로 변경
//	char a;
//	while (1)
//	{
//		cout << "알파벳 소문자를 입력하시오. : ";
//		cin >> a;
//		if (a < 96)
//			continue;
//		else
//			cout << "변환된 대문자는 " << char(a - 32) << "입니다.\n";
//
//		if (a == 27)
//			break;
//	}
//
//	int i, j, num;
//	for (i = 2; i <= 100; i++)
//	{
//		num = true;
//		for (int j = 2; j * j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				num = false;
//				break;
//			}
//		}
//		if (num)
//			cout << i << " ";
//	}
//	cout << "\n";
//
//	// 달력 출력
//	int day = 31;
//	int START_DAY = 1;
//	int date;
//	cout << "\n  일  월  화  수  목  금  토\n";
//	cout << "============================\n";
//	for (date = 0; date < 3; date++)
//		cout << "    ";
//	for (date = 3; START_DAY <= day; date++)
//	{
//		cout << setw(3) << START_DAY << " ";
//		if ((date + 1) % 7 == 0)
//			cout << "\n";
//		START_DAY++;
//	}
//	cout << "\n============================\n";
//
//	// tan 함수 활용
//	double a, b;
//	cout << "밑변의 길이와 높이를 입력하시오. : ";
//	cin >> a >> b;
//	cout << "삼각형의 높이는 " << a * tan(48) << "입니다.\n";
//}
//
//// 더하기 함수 생성
//#include <iostream>
//using namespace std;
//void sum(int a, int b)
//{
//	cout << "a + b = " << a + b << endl;
//}
//int main(void)
//{
//	int a = 10, b = 20;
//	sum(a, b);
//}
//
//// 함수 리턴값 출력
//#include <iostream>
//using namespace std;
//int sum(int a, int b)
//{
//	int sum;
//	a += 10;
//	b += 20;
//	sum = a + b;
//	cout << a << b << endl;
//	return sum;
//}
//int main(void)
//{
//	int a = 10, b = 20;
//	int k;
//	k = sum(a, b);
//	cout << a << b << k << endl;
//}
//
//// int 형 void 형 함수 호출
//#include <iostream>
//using namespace std;
//int myAbs(int x)
//{
//	int y;
//	if (x < 0)
//		y = -x;
//	else
//		y = x;
//	return y;
//}
//void myAbs1(int x)
//{
//	int y;
//	if (x < 0)
//		y = -x;
//	else
//		y = x;
//	cout << "구한 절댓값은 " << y << "이다.\n";
//}
//int main(void)
//{
//	int a, result;
//	cout << "\n정수값 하나를 입력하세요. ->";
//	cin >> a;
//	result = myAbs(a);
//	cout << "구한 절댓값은 " << result << "이다.\n";
//	myAbs1(a);
//}
//
//// 값 비교후 더 큰 값 리턴
//#include <iostream>
//using namespace std;
//int max(int x, int y)
//{
//	return ((x > y) ? x : y);
//}
//int main(void)
//{
//	int a, b;
//	cout << "\n정수값을 두 개 입력하세요. => ";
//	cin >> a >> b;
//	cout << "최댓값 => " << max(a, b) << endl;
//}
//
//// 함수로 문자 출력
//#include <iostream>
//using namespace std;
//void sub1()
//{
//	cout << "C";
//}
//void sub2()
//{
//	cout << "PROGRAMMING\n";
//}
//int main(void)
//{
//	sub1();
//	cout << "  ";
//	sub2();
//}
//
//// 값 계산 후 출력하는 함수 호출
//#include <iostream>
//using namespace std;
//void det(double a, double b, double c)
//{
//	double d;
//	d = b * b - 4 * a * c;
//	cout << "판별식의 값 = " << d << endl;
//}
//int main(void)
//{
//	double x,y,z,k,d=0;
//	cout << "세 수를 입력하시오. :";
//	cin >> x >> y >> z;
//	det(x, y, z);
//}
//
//#include <iostream>
//using namespace std;
//void mul(int a, int b)
//{
//	int c;
//	c = (a + b) * (a + b);
//	cout << "< " << a << " + " << b << " >^2 = " << c << endl;
//}
//int main(void)
//{
//	int x = 6, y = 2;
//	mul(x, y);
//}
//// 2개의 값을 입력받아 결과 값 저장
//#include <iostream>
//using namespace std;
//void mul(int a, int b, int& c)
//{
//	c = a * b;
//}
//void add(int a, int b, int& c)
//{
//	c = a + b;
//}
//void subt(int a, int b, int& c)
//{
//	c = a - b;
//}
//void div(int a, int b, int& c)
//{
//	c = a / b;
//}
//int main(void)
//{
//	int x,y,c;
//	cout << "두 수를 입력하시오. : ";
//	cin >> x >> y;
//	mul(x, y, c);
//	cout << x << " * " << y << " = " << c << endl;
//	add(x, y, c);
//	cout << x << " + " << y << " = " << c << endl;
//	subt(x, y, c);
//	cout << x << " - " << y << " = " << c << endl;
//	div(x, y, c);
//	cout << x << " / " << y << " = " << c << endl;
//}
//
//// 정수가 아닌 경우 오류메세지 출력 후 프로그램 종료
//#include <iostream>
//using namespace std;
//int p_sum(int n)
//{
//	int i, sum;
//	if (n <= 0)
//	{
//		cout << "에러 : 입력한 수가 0 이하 입니다.\n";
//		exit(0);
//	}
//	sum = 0;
//	for (i = 1; i <= n; i++)
//		sum += i;
//	return sum;
//}
//int main(void)
//{
//	int a,b;
//	cout << "정수를 입력하시오. : ";
//	cin >> a;
//	b=p_sum(a);
//	cout << "1부터 " << a << "까지의 합은 " << b << "입니다.\n";
//}
//// 결괏값에 값 누적 시킨 후 저장
//#include <iostream>
//using namespace std;
//void power(double base, int exp, double& d)
//{
//	double result;
//	int i;
//	result = 1.0;
//	for (i = 0; i < exp; i++)
//		result *= base;
//	d = result;
//}
//int main(void)
//{
//	double a,p,d=0;
//	int n;
//	cout << "두 수를 입력하세요. : ";
//	cin >> a >> n;
//	power(a, n,d);
//	cout << "power<"<<a << "," << n << "> = " << d << endl;
//}
//
//#include <iostream>
//using namespace std;
//void prime(int n, int& d)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			d = 0;
//	}
//	d = 1;
//}
//int main(void)
//{
//	int i,d;
//	for (i = 2; i <= 100; i++)
//	{
//		prime(i, d);
//		if (d)
//			cout << i<<" ";
//	}
//}
//
//// 임의로 값 생성 후 그 값 만큼 * 출력
//#include <iostream>
//using namespace std;
//void disp_car(int car_number, int distance)
//{
//	int i;
//	cout << "CAR #" << car_number << ":";
//	for (i = 0; i < distance / 10; i++)
//	{
//		cout << "*";
//	}
//	cout << "\n";
//}
//int main(void)
//{
//	int i;
//	int car1_dist = 0, car2_dist = 0;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 6; i++)
//	{
//		car1_dist += rand() % 100;
//		car2_dist += rand() % 100;
//		disp_car(1, car1_dist);
//		disp_car(2, car2_dist);
//		cout << "--------------------\n";
//		_getch();
//	}
//}
//
//// 배수 판별 함수
//#include <iostream>
//using namespace std;
//void bs(int a, int b)
//{
//	int c;
//	c = a % b;
//	if (c == 0)
//		cout << a << "은 " << b << "의 배수입니다.\n";
//	else
//		cout << a << "은 " << b << "의 배수가 아닙니다.\n";
//}
//int main(void)
//{
//	int a, b;
//	cout << "배수를 판단할 두 정수를 입력해주세요\n";
//	cout << "첫번째 정수 : ";
//	cin >> a;
//	cout << "두번째 정수 : ";
//	cin >> b;
//	bs(a, b);
//}
//	
//// 거리 구하는 함수
//#include <iostream>
//using namespace std;
//void gs(double x1, double x2, double y1, double y2)
//{
//	double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//	cout << "두 점사이의 거리는 " << d << "입니다.\n";
//}
//int main(void)
//{
//	double x1, x2, y1, y2,d;
//	cout << "첫번째 좌표값을 입력해주세요 : ";
//	cin >> x1 >> x2;
//	cout << "두번째 좌표값을 입력해주세요. : ";
//	cin >> y1 >> y2;
//	gs(x1, x2, y1, y2);
//}
//
//// 여러개의 함수 생성 후 각각 호출
//#include <iostream>
//using namespace std;
//void sa(int n, int m)
//{
//	double d = (n + m) / 2.0;
//	cout << "산술,기하,조화평균을 구한 값은 다음과 같습니다.\n";
//	cout << "산술평균 = " << d;
//}
//void gi(int n, int m)
//{
//	double d = sqrt(n * m);
//	cout << " 기하평균 = " << d;
//}
//void zo(int n, int m)
//{
//	double d = (2.0 * n * m) / (n + m);
//	cout << " 조화평균 = " << d << endl;
//}
//int main(void)
//{
//	double x, y;
//	double sa, gi, zo;
//	cout << "두 수를 입력하시오. -->";
//	cin >> x >> y;
//	sa(x, y);
//	gi(x,y);
//	zo(x,y);
//}
//	
//// 함수 안에서 다른 함수 호출
//#include <iostream>
//using namespace std;
//void power(int n, int k, int& all)
//{
//	all = pow(n, k);
//}
//void sumofpower(int n, int k)
//{
//	int i;
//	int sum = 0;
//	int all = 0;
//	for (i = 1; i <= n; i++)
//	{
//		power(i, k, all);
//		sum += all;
//	}
//	cout << "1^" << n << " + -- + " << k << "^" << n << "까지의 수열의 합 = " << sum << endl;
//}
//int main(void)
//{
//	int a, b,i,sum;
//	cout << "두 수를 입력하시오. : ";
//	cin >> a >> b;
//	sumofpower(a, b);
//}
//
//// 계산 하여 저장
//#include <iostream>
//using namespace std;
//void ec(int a, int b, int c, double& x1)
//{
//	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
//}
//void ec1(int a, int b, int c, double& x2)
//{
//	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
//}
//int main(void)
//{
//	int a, b, c;
//	double x1=0, x2=0;
//	cout << "3가지 정수 입력 : ";
//	cin >> a >> b >> c;
//	ec(a, b, c,x1);
//	ec1(a, b, c,x2);
//	if ((b * b - 4 * a * c) < 0)
//		cout << "근이 없습니다.\n";
//	else
//		cout << "이차방정식의 근은 " << x1 << " " << x2 << "입니다.\n";	
//}
//
//// pow 함수 사용
//#include <iostream>
//using namespace std;
//double db(double a, int b)
//{
//	return pow(a, b);
//}
//int main(void)
//{
//	double a,c;
//	int b;
//	char d;
//	while (1)
//	{
//		cout << "계산하실 실수값을 입력해주세요 : ";
//		cin >> a;
//		cout << "정수값을 입력해주세요 :";
//		cin >> b;
//		c = db(a, b);
//		cout << c << endl;
//		cout << "다시 계산하시겠습니까? <Y/N> : ";
//		cin >> d;
//		if (d == 'N' || d == 'n')
//			break;
//	}
//}
//
//// int 형 void 형 함수 사용
//#include <iostream>
//using namespace std;
//int event(int n)
//{
//	if (n % 2 == 0)
//		return 1;
//	else
//		return 0;
//}
//int absolute(int n)
//{
//	if (n < 0)
//		return n * -1;
//	else
//		return n;
//}
//int sign(int n)
//{
//	if (n < 0)
//		return -1;
//	else if (n == 0)
//		return 0;
//	else
//		return 1;
//}
//void event1(int n)
//{
//	if (n % 2 == 0)
//		cout << "주어진 정수는 짝수입니다.\n";
//	else
//		cout << "주어진 정수는 홀수입니다.\n";
//}
//void absolute1(int n)
//{
//	if (n < 0)
//		cout << "주어진 정수의 절대값은 " << n * -1 << "입니다.\n";
//	else
//		cout << "주어진 정수의 절대값은 " << n << "입니다.\n";
//}
//void sign1(int n)
//{
//	if (n < 0)
//		cout << "주어진 정수는 음수입니다.\n";
//	else if (n == 0)
//		cout << "주어진 정수는 0 입니다.\n";
//	else
//		cout << "주어진 정수는 양수입니다.\n";
//}
//int main(void)
//{
//	int a,b;
//	cout << "정수를 입력해주세요. : ";
//	cin >> a;
//	b = event(a);
//	if (b == 1)
//	cout << "주어진 정수는 짝수입니다.\n";
//	else
//	cout << "주어진 정수는 홀수입니다. \n";
//	b = absolute(a);
//	cout << "주어진 정수의 절대값은 " << b << "입니다.\n";
//	b = sign(a);
//	if (b == -1)
//		cout << "주어진 정수는 음수입니다.\n";
//	else if(b==0)
//		cout << "주어진 정수는 0 입니다.\n";
//	else
//		cout << "주어진 정수는 양수입니다.\n";
//	int a,b;
//	cout << "정수를 입력해주세요. : ";
//	cin >> a;
//	event1(a);
//	absolute1(a);
//	sign1(a);
//}
//
//// 입력 받은 수에 따라 다른 함수 사용
//#include <iostream>
//using namespace std;
//void sp(int n)
//{
//	cout << "원의 넓이는 " << n * n * 3.14 << "입니다.\n";
//}
//void tr(int n, int m)
//{
//	cout << "삼각형의 넓이는 " << n * m * 0.5 << "입니다.\n";
//}
//void qu(int n, int m)
//{
//	cout << "사각형의 넓이는 " << n * m << "입니다.\n";
//}
//int main(void)
//{
//	int a, b,d;
//	double c;
//	cout << "1.원의 넓이  2.삼각형의 넓이  3.사각형의 넓이\n";
//	cout << "구하고자 하는 도형의 번호를 입력하시오. -->";
//	cin >> a;
//	if (a == 1)
//	{
//		cout << "반지름을 입력하시오.-->";
//		cin >> b;
//		sp(b);
//	}
//	else if (a == 2)
//	{
//		cout << "삼각형의 높이와 밑변을 입력하시오. -->";
//		cin >> b >> d;
//		tr(b, d);
//	}
//	else
//	{
//		cout << "사각형의 높이와 밑변을 입력하시오. -->";
//		cin >> b >> d;
//		qu(b, d);
//	}
//}
//
//#include <iostream>
//using namespace std;
//void many(int a, int b)
//{
//	cout << "만 나이는 " << a - b << " 입니다.\n";
//}
//void mann(int a, int b)
//{
//	cout << "만 나이는 " << a - b - 1 << " 입니다.\n";
//}
//int main(void)
//{
//	int a,b,d;
//	char c;
//	cout << "현재년도를 입력해주세요 : ";
//	cin >> a;
//	cout << "태어난 년도를 입력해주세요 : ";
//	cin >> b;
//	cout << "생일이 지났나요? <Y/N> : ";
//	cin >> c;
//	switch (c)
//	{
//	case 'y':
//	case 'Y': many(a, b); break;
//	case 'n':
//	case 'N': mann(a, b); break;
//	}
//}
//
//// 짝수만 출력하는 함수 생성
//#include <iostream>
//using namespace std;
//void prime(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return;
//	}
//	cout << i << " ";
//}
//int main(void)
//{
//	int i;
//	for (i = 2; i <= 100; i++)
//		prime(i);
//}
//
//// pow , fabs 함수 활용
//#include <iostream>
//using namespace std;
//void bcd(double a)
//{
//
//	double b = a / 2.0;
//	double c;
//	while (1)
//	{
//		c = 0.5 * (b + a / b);
//		if (fabs(c - b) < pow(10, -6))
//			break;
//		b = c;
//	}
//	cout << "함수에 의해 구한 " << a << "의 제곱근 = " << c << endl;
//	cout << "라이브러리 함수 sqrt(" << a << ") = " << sqrt(a) << endl;
//}
//int main(void)
//{
//	double a;
//	double b,c;
//	cout << "제곱근을 구할 숫자를 입력하세요: ";
//	cin >> a;
//	bcd(a);
//}
//
//// int , void 형 함수 활용
//#include <iostream>
//using namespace std;
//double height(double len, double deg)
//{
//	return len * tan(deg);
//}
//void height1(double len, double deg)
//{
//	double height = len * tan(deg);
//	cout << "삼각형의 높이는 " << height << "입니다.\n";
//}
//int main(void)
//{
//	double a, b, c;
//	cout << "밑변의 길이와 높이를 입력하시오. : ";
//	cin >> a >> b;
//	c = height(a, b);
//	cout << "삼각형의 높이는 " << c << "입니다.\n";
//
//	double a,b,c;
//	cout << "밑변의 길이와 높이를 입력하시오. : ";
//	cin >> a >> b;
//	height1(a, b);
//}