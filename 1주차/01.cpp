#include <iostream> // 헤더파일을 포함시키는 문장
#include <cstring>
#include <string> // string 클래스를 사용하기 위한 헤더 파일
#include <cmath>
using namespace std; // 네임스페이스를 지정
void main()
{
	// 메세지 출력
	cout << "이름 : 성윤정" << endl;
	cout << "소속 : 한빛미디어" << endl;
	cout << "이메일 : techsung@chol.com" << endl;
	cout << "사과가 " << 10 << "개 있다.\n";
	cout << "사과가 한 개에 " << 500 << "원이다.\n";

	// 변수 선언 후 입력받은 수 출력
	int unit, count, total; // 변수 선언
	cout << "상품의 단가를 입력하시오->";
	cin >> unit;
	cout << "구입할 개수를 입력하시오->";
	cin >> count;
	total = unit * count; // 키보드에서 입력받은 데이터로 총 금액 구하기
	cout << "총 금액:" << total << "\n";

	// 소숫점 출력
	double pi = 3.141692;
	int r;
	double area;
	cout << "반지름을 입력하시오. -> ";
	cin >> r;
	area = r * r * pi;
	cout << "반지름이 " << r << "인 원의 면적은 " << area << "이다.\n";

	// 문자 출력
	char c = 'A';
	cout << c << endl;
	cout << (int)c << endl;
	cout << 'A' + 1 << "\t";
	cout << (char)('A' + 1) << "\n";
	// 소문자와 대문자는 아스키코드 값이 32 차이가 남
	cout << 'a' - 'A' << "\n";
	// 소문자에서 32를 빼면 대문자가 구해짐
	cout << (char)('a' - 32) << "\n"; 

	// 문자 2개 출력
	char ch1 = 'A', ch2 = 'B'; // 메모리 내의 ch1,ch2 의 내용은 65,66
	cout << "ch1(char): " << ch1 << "\t" << "ch2(char) : " << ch2 << endl;
	cout<<"ch1(int): "<<(int)ch1<< "\t" << "ch2(int): " << (int)ch2 << endl << endl;
	int i = ch1, j = ch2;
	cout << "i(int): " << i << "\tj(int): " << j << endl;
	cout << "i(char): " << (char)i << "\t" << "j(char): " << (char)j << endl;

	// 문자열 다양한 방식으로 저장 후 출력
	char flowers1[5] = "rose";
	char flowers2[6] = {'l','i','l','a','c'};
	char flowers3[] = "tulip";
	cout << flowers1 << "\n";
	cout << flowers2 << "\n";
	cout << flowers3 << "\n";
	cout << strlen(flowers1) << "\n"; // 문자열의 길이
	cout << sizeof(flowers3) << "\n"; // 배열의 크기

	//#include <cstring> 사용

	// 특정 값을 입력받을때까지 실행
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true)
	{
		cout << "암호 >>";
		cin >> password;
		if (strcmp(password, "C++") == 0)
		{
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}

	// 문자 입력받기
	cout << "주소를 입력하세요.>>";
	char address[100];
	cin.getline(address, 100, '\n');
	cout << "주소는 " << address << "입니다.\n"; // 주소 출력

	// 문자열 입력받기
	cout << "이름을 입력하세요.>>";
	char name[11]; // 한글은 5개 글자, 영문은 10까지 저장할 수 있다.
	cin >> name; // 키보드로부터 문자열을 읽는다.
	cout << "이름은 " << name << "입니다\n"; // 이름을 출력한다.

	// 변수 계산후 출력
	int money, day,total;
	cout << "일일 야근비를 입력하세요.:";
	cin >> money;
	cout << "야근한 날짜 수를 입력하세요.:";
	cin >> day;
	total = money * day;
	cout << "한달 야근비는 " << total << "원입니다.\n";

	int time, money, total;
	cout << "근무 시간을 입력하세요. :";
	cin >> time;
	cout << "시간당 급여를 입력하세요. :";
	cin >> money;
	total = time*money;
	cout << "총 급여는 " << total << "원입니다.\n";
	
	// 소숫점 계산후 출력
	int r,a;
	double b,c;
	cout << "반지름을 입력하세요. :";
	cin >> r;
	a = r * 2;
	b = 2 * r * 3.14;
	c = r * r * 3.14;
	cout << "원의 둘레는 " << a << "입니다.\n";
	cout << "원의 둘레는 " << b << "입니다.\n";
	cout << "원의 면적는 " << c << "입니다.\n";

	// 변수 한개만 입력받고 특정값 계산하여 출력
	int age, day;
	cout << "당신의 나이를 입력하세요. :";
	cin >> age;
	day = age * 365;
	cout << "당신이 살아온 날은 " << day << " 일입니다.\n";

	// 소숫점으로 계산하여 출력
	int r;	
	double area;
	cout << "원의 반지름을 입력하세요. :";
	cin >> r;
	area = 0.75* r * r * r;
	cout << "원의 부피는 " << area << "입니다.\n";

	// 입력받은 값들을 다른 방식으로 계산하여 출력
	int a, b, c,total;
	double aver;
	cout << "a의 값을 입력하세요. :";
	cin >> a;
	cout << "b의 값을 입력하세요. :";
	cin >> b;
	cout << "c의 값을 입력하세요. :";
	cin >> c;
	total = a + b + c;
	aver = total / 3;
	cout << "모든 값의 합은 " << total << "입니다.\n"; 
	cout << "모든 값의 평균은 " << aver << "입니다.\n";
	
	// 입력받은 값, 다른 방법으로 계산된 값 출력
	int a,b,c;
	cout << "정수값을 입력하시오. :";
	cin >> a;
	b = a * a;
	c = a * a * a;
	cout << "입력받은 정수의 값은 " << a << "입니다.\n";
	cout << "입력받은 정수의 값의 제곱값은 " << b << "입니다.\n";
	cout << "입력받은 정수의 세제곱값은 " << c << "입니다.\n";

	// 입력받은 값 소숫점으로 계산하여 출력
	double F, C;
	cout << "화씨온도를 입력하세요. :";
	cin >> F;
	C = ((5.0 / 9) * F) - 32;
	cout << "섭씨 온도는 " << C << "입니다.\n";

	int inch = 10;
	double c;
	c = inch * 2.54;
	cout << "10인치는 " << c << "cm이다.\n";

	// 문자 , 값 입력받아 계산 후 출력
	char name[10];
	int year;
	double GPA, score;
	cout << "이름은 ? ";
	cin >> name;
	cout << "몇학년 ? ";
	cin >> year;
	cout << year<<"학년 평점은 ? ";
	cin >> GPA;
	score = (GPA * 100) / 4.5;
	cout << "\n--------------------------\n";
	cout << " 이름   학년   평점(점수)";
	cout << "\n--------------------------\n";
	cout << " " << name << "   " << year << "   " << GPA<<"(" << score << ")";
	cout << "\n--------------------------\n";

	// 값 입력받아 SWAP 구현
	int s = 1, w = 2,te;
	cout << "s의 초기값 = " << s<<"\n";
	cout << "w의 초기값 = " << w<<"\n";
	cout << "================\n";
	te = s;
	s = w;
	w = te;
	cout << "s의 변환값 = " << s << "\n";
	cout << "w의 초기값 = " << w << "\n";

	// 값 변환
	int mile, yard;
	double km;
	cout << "mile - > ";
	cin >> mile;
	cout << "yard - > ";
	cin >> yard;
	km = 1.609 * (mile + yard / 1760.0);
	cout << "마라톤 경기 거리로 환산 " << km << " km";

	// 특정 값 지정 후 입력받은 값을 추가로 계산
	int m = 8, n = 5, z;
	cout << "m의 초기값 " << m << "  n의 초기값 " << n << "\n";
	n += 3;
	m -= 1;
	z = m + n;
	cout << "z의 값은 " << z << "\n";

	// 문자 여러개 입력받기
	char c, d;
	cout << "두 번째 문자를 입력하세요. ";
	cin >> c>>d;
	cout <<d<< "\t"<<c;

	// 소숫점 계산
	double a, b;
	cout << "갤런의 값을 입력하시오. :";
	cin >> a;
	b = a * 3.785;
	cout << a << "갤런은 " << b << "리터 입니다.\n";

	// 다항식 변수 입력받아 계산 후 출력
	int a, b;
	cout << "다항식 3x^2 * 7x + 11에 이용할 x의 값을 입력하시오. :";
	cin >> a;
	b = 3 * a * a + 7 * a + 11;
	cout << "다항식을 계산한 값은 " << b << "입니다.\n";

	// 소문자를 대문자로 변경
	char a;
	cout << "하나의 소문자를 입력하세요. :";
	cin >> a;
	if (a >= 97)
		a -= 32;
	cout <<a<<"\n";
	
	// 대문자를 소문자로 변경
	char a,b;
	cout << "대문자를 입력하시오. :";
	cin >> a >> b;
	cout << a << "의 소문자는 " << char(a + 32) << "이다.\n";
	cout << b << "의 소문자는 " << char(b + 32) << "이다.\n";

	// 소숫점 계산
	double mile, km;
	cout << "";
	cin >> mile;
	km = mile * 1.609;
	cout << mile << " mile 은" << km << "km 이다.\n";

	double speed, km,aver;
	cout << "자동차의 평균 주행속도를 입력하시오. :";
	cin >> speed;
	cout << "주행한 거리를 입력하시오. :";
	cin >> km;
	aver = km / speed;
	cout << km << "거리를 " << speed << "평균 주행속도로 가면 " << aver << "시간이 걸린다.\n";

	// 소숫점 계산
	int a, b;
	double answer;
	cout << "a와 b의 수를 입력하세요 .: ";
	cin >> a >> b;
	answer = (a - (b * 5.0)) / (b - (a * 5.0));
	cout.precision(2);
	cout << "결과는 " << answer << "이다.\n";

	// 특정 수 계산
	double pound, g;
	cout << "파운드 값을 입력하시오. :";
	cin >> pound;
	g = pound * 454;
	cout << pound << " 파운드값은 " << g << " 그램입니다.\n";

	// 값 단위 변환
	double cm, m;
	cout << "평수를 입력하시오. :";
	cin >> cm;
	m = cm * 3.3058;
	cout << cm << "평을 제곱미터로 환산하면 " << m << "제곱미터가 됩니다.\n";

	int year,second;
	cin >> year;
	second = year * 31536000;
	cout <<year<<"년은 총 " << second << "초 입니다.\n";

	double kg, pound;
	cout << "Kg값을 입력하세요. :";
	cin >> kg;
	pound = kg * (1 / 0.453592);
	cout << "Kg값을 파운드값으로 계산한 값은 " << pound << " 입니다.";
	
	// 통화 요금 계산
	double time, fee;
	cout << "휴대폰 통화시간을 입력하세요. :";
	cin >> time;
	fee = time * 500 + 3000;
	cout << time << "시간동안 사용한 통화요금은 " << fee << "원 입니다.\n";

	// 여러개 값 입력받아 계산후 출력
	double x, y, z,a;
	cout << "x의 값을 입력하시오. :";
	cin >> x;
	cout << "y의 값을 입력하시오. :";
	cin >> y;
	cout << "z의 값을 입력하시오. :";
	cin >> z;
	a = x * y + z;
	cout << "xy+z를 계산한 값은 " << a << "입니다.\n";

	// 특정 값 출력
	double time;
	time = 115000000 / 300000;
	cout << "초속 30만km의 빛이 태양에서 출발하여 지구에 도착하는 시간은 " << time << "초 입니다.\n";
	
	// 요금 계산
	double kw, fee;	
	cout << "사용한 kw 양을 입력하시요. :";
	cin >> kw;
	fee=1390 + kw * 164.2;
	cout << "전기요금은 " << fee << "원 입니다.\n";

	// 승률 계산
	double win, lose, per;
	cout << "승수를 입력하세요. :";
	cin >> win;
	cout << "패전수를 입력하세요. :";
	cin >> lose;
	per = win / (win + lose);
	cout << "승률은 " << per << "입니다.\n";

	// 삼각형 길이 계산
	int ac, ae, bc, de;
	cout << "삼각형의 선 AC를 입력하시오. :";
	cin >> ac;
	cout << "삼각형의 선 AE를 입력하시오. :";
	cin >> ae;
	cout << "삼각형의 선 BC를 입력하시오. :";
	cin >> bc;
	de = (ae * bc)/ac;
	cout << "삼각형의 선 DE는 " << de << "입니다.\n";
	
	// 특정 값 계산
	double money, time, per, a,b,c;
	cout << "시간당 급여를 입력하시오. :";
	cin >> money;
	cout << "근무시간을 입력하시오. :";
	cin >> time;
	cout << "세금비율을 입력하시오. :";
	cin >> per;
	a = time * money;
	b = a * per;
	c = a - b;
	cout << "세전급여 " << a << "에서 세금값을 제한 최종 급여는 " << c << "입니다.\n";

	double a, b, c;
	cout << "크기를 입력하시오. :";
	cin >> a;
	cout << "넓이를 입력하시오. :";
	cin >> b;
	c = a / b;
	cout << "압력의 세기는 " << c << "입니다.\n";	
}