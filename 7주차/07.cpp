//// namecard 구조체를 포인터로 사용해보기
//#include <iostream>
//#include <string>
//using namespace std;
//struct namecard {
//	string name;
//	string job;
//	string tel;
//	string email;
//};
//void structPrn(namecard *temp)
//{
//	for(int i=0;i<3;i++)
//		cout << "\n" << (temp+i)->name << "\t" << (temp + i)->job << "\t" << (temp + i)->tel << "\t" << (temp + i)->email;
//}
//void structInput(namecard* pTemp)
//{
//	namecard temp;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "\n이름을 입력하세요 => ";
//		cin >> (pTemp + i)->name;
//		cout << "\n직업을 입력하세요 => ";
//		cin >> (pTemp + i)->job;
//		cout << "\n연락처를 입력하세요 => ";
//		cin >> (pTemp + i)->tel;
//		cout << "\n이메일을 입력하세요 => ";
//		cin >> (pTemp + i)->email;
//	}
//}
//int main(void)
//{
//	namecard x = { "전수빈","치과의사","356-0868","eldy@naver.com" };
//	namecard y = { "전원지","디자이너","345-0876","onejee@naver.com" };
//	namecard* p;
//	p = &x;
//	cout << "이름\t직업\t\t연락처\t\t이메일";
//	cout << "\n=========================================================";
//	cout << "\n" << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email;
//	p = &y;
//	cout << "\n" << p->name << "\t" << p->job << "\t" << p->tel << "\t" << p->email;
//	cout << "\n=========================================================";
//	cout << "\n sizeof(x) => " << sizeof(x);
//
//	namecard x[3];
//	for (int i = 0; i < 3; i++)
//		structInput(&x[i]);
//	cout << "이름\t직업\t\t연락처\t이메일";
//	cout << "\n========================================";
//	for (int i = 0; i < 3; i++)
//		structPrn(&x[i]);
//	cout << "\n========================================";
//
//
//	namecard x[3];
//	structInput(x);
//	cout << "이름\t직업\t\t연락처\t이메일";
//	cout << "\n========================================";
//	structPrn(x);
//	cout << "\n========================================";
//}
//
//// 값 지정 안하면 1로 지정
//#include <iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	double getArea()
//	{
//		return 3.14 * radius * radius;
//	}
//	Circle()
//	{
//		radius = 1;
//	}
//};
//int main(void)
//{
//	Circle donut;
//	//donut.radius = 1;
//	double area = donut.getArea();
//	cout << "donut 면적은 " << area << endl;
//
//	Circle pizza;
//	//pizza.radius = 30;
//	area = pizza.getArea();
//	cout << "pizza 면적은 " << area << endl;
//}
//
//// 값 여러개 지정
//#include <iostream>
//using namespace std;
//class Rectangle {
//	int width;
//	int height;
//public:
//	Rectangle()
//	{
//		width = 3;
//		height = 5;
//	}
//	Rectangle(int w, int h)
//	{
//		width = w;
//		height = h;
//	}
//	int getArea()
//	{
//		return width * height;
//	}
//};
//int main(void)
//{
//	Rectangle rect(3, 5);
//	//rect.width = 3;
//	//rect.height = 5;
//	cout << "사각형의 면적은 " << rect.getArea() << endl;
//}
//
//// 클래스 내 함수 호출
//#include <iostream>
//using namespace std;
//class Circle 
//{
//	int radius;
//public:
//	Circle()
//	{
//		radius = 1;
//		cout << "반지름 " << radius << " 원 생성\n";
//	}
//	Circle(int r)
//	{
//		radius = r;
//		cout << "반지름 " << radius << " 원 생성\n";
//	}
//	double getArea()
//	{
//		return 3.14 * radius*radius;
//	}
//};
//int main(void)
//{
//	Circle donut;
//	cout << "donut 면적은 " << donut.getArea() << endl;
//	Circle pizza(30);
//	cout << "pizza 면적은 " << pizza.getArea() << endl;
//}
//
//// 클래스 내 지정값이 같은경우 한줄로 작성
//#include <iostream>
//using namespace std;
//class Rectangle
//{
//private:
//	int width;
//	int height;
//public:
//	Rectangle()
//	{
//		width = height = 3;
//	}
//	Rectangle(int w, int h)
//	{
//		width = w;
//		height = h;
//	}
//	Rectangle(int w)
//	{
//		width = height = w;
//	}
//	bool isSquare()
//	{
//		if (width == height)
//			return true;
//		else
//			return false;
//	}
//};
//int main(void)
//{
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//	if (rect1.isSquare()) cout << "rect1은 정사각형이다.\n";
//	if (rect2.isSquare()) cout << "rect2은 정사각형이다.\n";
//	if (rect3.isSquare()) cout << "rect3은 정사각형이다.\n";
//}
//
//#include <iostream>
//using namespace std;
//class Tower
//{
//	int height;
//public:
//	Tower()
//	{
//		height = 1;
//	}
//	Tower(int h)
//	{
//		height = h;
//	}
//	int getHeight()
//	{
//		return height;
//	}
//};
//int main(void)
//{
//	Tower myTower; // 1 미터
//	Tower seoulTower(100); // 100 미터
//	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
//	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
//}
//
//// 함수 호출하여 클래스 내 값 출력
//#include <iostream>
//using namespace std;
//class Date
//{
//	int year;
//	int month;
//	int day;
//public:
//	Date(int y,int m,int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	int getYear()
//	{
//		return year;
//	}
//	int getMonth()
//	{
//		return month;
//	}
//	int getDay()
//	{
//		return day;
//	}
//};
//int main(void)
//{
//	Date birth(2014, 3, 20); // 2014년 3월 20일
//	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
//}
//
//// 클래스 함수내에서 값 계산
//#include <iostream>
//using namespace std;
//class Account
//{
//	string name;
//	int id;
//	int money;
//public:
//	Account(string n, int i, int m)
//	{
//		name = n;
//		id = i;
//		money = m;
//	}
//	string getOwner()
//	{
//		return name;
//	}
//	void deposit(int m)
//	{
//		money += m;
//	}
//	int inquiry()
//	{
//		return money;
//	}
//	int withdraw(int m)
//	{
//		money -= m;
//		return money;
//	}
//};
//int main(void)
//{
//	Account a("kitae", 1, 5000);
//	// id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
//	a.deposit(50000);
//	// 50000원 저금
//	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//	int money = a.withdraw(20000);
//	// 20000원 출금. withdraw()는 출금한 실제 금액 리턴
//	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
//}
//
//// 클래스 활용하여 커피머신 만들기
//#include <iostream>
//using namespace std;
//class CoffeeMachine
//{
//private:
//	int coffee;
//	int water;
//	int sugar;
//public:
//	CoffeeMachine(int a,int b,int c)
//	{
//		coffee = a;
//		water = b;
//		sugar = c;
//	}
//	void drinkEspresso()
//	{
//		coffee -=1;
//		water -=1;
//	}
//	void show()
//	{
//		cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
//	}
//	void drinkAmericano()
//	{
//		coffee -=1;
//		water -=2;
//	}
//	void drinkSugarCoffee()
//	{
//		coffee -=1;
//		water -=2;
//		sugar -=1;
//	}
//	void fill()
//	{
//		coffee =10;
//		water = 10;
//		sugar = 10;
//	}
//};
//int main(void)
//{
//	CoffeeMachine java(5, 10, 3);
//	java.drinkEspresso();
//	java.show();
//	java.drinkAmericano();
//	java.show();
//	java.drinkSugarCoffee();
//	java.show();
//	java.fill();
//	java.show();
//}
//
//// 원하는 값 지정 후 출력
//#include <iostream>
//using namespace std;
//class Integer
//{
//private:
//	int integer;
//public:
//	Integer(int a)
//	{
//		integer = a;
//	}
//	int get()
//	{
//		return integer;
//	}
//	void set(int n)
//	{
//		integer = n;
//	}
//	bool isEven()
//	{
//		return true;
//	}
//};
//int main(void)
//{
//	Integer n(30);
//	cout << n.get() << "\t";
//	n.set(50);
//	cout << n.get() << "\t";
//
//	Integer m(300);
//	cout << m.get() << "\t";
//	cout << m.isEven();
//}
//
//// 소멸 클래스
//#include <iostream>
//using namespace std;
//class Oval 
//{
//private:
//	int width;
//	int height;
//
//public:
//	Oval() 
//	{
//		width = 0;
//		height = 0;
//	}
//	Oval(int w, int h) 
//	{
//		width = w;
//		height = h;
//	}
//	void set(int w, int h) 
//	{
//		width = w;
//		height = h;
//	}
//	int getWidth() 
//	{
//		return width;
//	}
//	int getHeight() 
//	{
//		return height;
//	}
//	void show() 
//	{
//		cout << "width = " << width << ", height = " << height << endl;
//	}
//	~Oval() 
//	{
//		cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
//	}
//};
//int main(void)
//{
//	Oval a, b(3, 4);
//	a.set(10, 20);
//	a.show();
//	cout << b.getWidth() << "," << b.getHeight() << endl;
//}