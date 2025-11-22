//// 클래스 포인터 활용
//#include <iostream>
//using namespace std;
//class Circle 
//{
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	double getArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//int main(void)
//{
//	Circle donut;
//	Circle pizza(30);
//	cout << donut.getArea() << endl;
//	Circle* p;
//	p = &donut;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//	p = &pizza;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//}
//
//// 포인터 이용하여 출력하기
//#include <iostream>
//using namespace std;
//class Circle 
//{
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//int main(void)
//{
//	Circle circleArray[3];
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//	for (int i = 0; i < 3; i++)
//		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//	Circle* p;
//	p = circleArray;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
//		p++;
//	}
//}
//
//// 클래스로 배열 만들기
//#include <iostream>
//using namespace std;
//class Circle 
//{
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//int main(void)
//{
//	Circle circleArray[3] = { Circle(10),Circle(20),Circle() };
//	for (int i = 0; i < 3; i++)
//		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//}
//
//// 배열 생성 후 각 배열에 클래스 값 저장하여 하나씩 출력하기
//#include <iostream>
//using namespace std;
//class Color {
//	int red, green, blue;
//public:
//	Color() { red = green = blue = 0; }
//	Color(int r, int g, int b) { red = r; green = g; blue = b; }
//	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
//	void show() { cout << red << "\t" << green << "\t" << blue << endl; }
//};
//int main(void)
//{
//	Color screenColor(255, 0, 0);
//	Color* p;
//	p = &screenColor;
//	p->show();
//	Color colors[3];
//	p = colors;
//	colors[0].setColor(255, 0, 0);
//	colors[1].setColor(0, 255, 0);
//	colors[2].setColor(0, 0, 255);
//	for (int i = 0; i < 3; i++)
//	{
//		p->show();
//		p++;
//	}
//}
//
//// 이중배열로 만들기
//#include <iostream>
//using namespace std;
//class Circle 
//{
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//int main(void)
//{
//	Circle circles[2][3];
//	circles[0][1].setRadius(2);
//	circles[0][2].setRadius(3);
//	circles[1][1].setRadius(4);
//	circles[1][1].setRadius(5);
//	circles[1][2].setRadius(6);
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "Circle [" << i << "," << j << "]의 면적은 ";
//			cout << circles[i][j].getArea() << endl;
//		}
//	}
//}
//
//// 이중배열 클래스생성
//#include <iostream>
//using namespace std;
//class Circle 
//{
//	int radius;
//public:
//	Circle()
//	{
//		radius = 1;
//		cout << "생성자 실행 radius = " << radius << endl;
//	}
//	Circle(int r)
//	{
//		radius = r;
//		cout << "생성자 실행 radius = " << radius << endl;
//	}
//	~Circle()
//	{
//		cout << "소멸자 실행 radius = " << radius << endl;
//	}
//	void setRadius(int r) { 
//		radius = r; 
//	}
//	double getArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//int main(void)
//{
//	Circle circles[2][3] = { {Circle(1),Circle(2),Circle(3)},
//						   {Circle(4),Circle(5),Circle(6)} };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "Circle [" << i << "," << j << "]의 면적은 ";
//			cout << circles[i][j].getArea() << endl;
//		}
//	}
//}
//
//// 동적 메모리 할당
//#include <iostream>
//using namespace std;
//class Circle
//{
//	int radius;
//public:
//	Circle()
//	{
//		radius = 1;
//	}
//	~Circle() {}
//	void setRadius(int r) {radius = r;}
//	double getArea()
//	{
//		return 3.14 * radius * radius;
//	}
//};
//int main(void)
//{
//	cout << "입력할 정수의 개수는? : ";
//	int n;
//	cin >> n;
//	if (n <= 0) return 0;
//	int* p = new int[n];
//	if (!p)
//	{
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << i + 1 << "번째 정수 : ";
//		cin >> *(p + i);
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += *(p + i);
//	cout << "평균 = " << sum / n << endl;
//}
//
//// 메모리를 할당하여 입력받고 결과 출력
//#include <iostream>
//using namespace std;
//class Circle
//{
//	int radius;
//public:
//	void setRadius(int radius) {this->radius = radius;}
//	double getArea() { return 3.14 * radius * radius; }
//};
//int main(void)
//{
//	int radius;
//	while (1)
//	{
//		cout << "정수 반지름 입력(음수이면 종료)>> ";
//		cin >> radius;
//		if (radius < 0) break;
//		Circle* p = new Circle(radius);
//		cout << "원의 면적은 " << p->getArea() << endl;
//		delete p;
//	}
//}
//
//// 가장 큰 수 찾기
//#include <iostream>
//using namespace std;
//class Sample
//{
//	int* p;
//	int size;
//public:
//	Sample(int n)
//	{
//		size = n;
//		p = new int[n];
//	}
//	void read()
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << "정수를 입력하시오. : ";
//			cin >> *(p + i);
//		}
//	}
//	void write()
//	{
//		cout << "입력된 정수 출력 : ";
//		for (int i = 0; i < size; i++)
//		{
//			cout << *(p + i) << " ";
//		}
//		cout << endl;
//	}
//	int big()
//	{
//		int max = *p;
//		for (int i = 1; i < size; i++) 
//		{
//			if (*(p+i) > max)
//			{
//				max = *(p + i);
//			}
//		}
//		return max;
//	}
//	~Sample() {};
//};
//int main(void)
//{
//	Sample s(10);
//	s.read();
//	s.write();
//	cout << "가장 큰 수는 " << s.big() << endl;
//}
//
//// 클래스를 이용하여 커피머신 만들기
//#include <iostream>
//using namespace std;
//class Container
//{
//	int size;
//public:
//	Container() { size = 10; }
//	void fill()
//	{
//		size = 10;
//	}
//	void consume()
//	{
//		size -= 1;
//	}
//	int getSize()
//	{
//		return size;
//	}
//};
//class CoffeeVendingMachine
//{
//	Container tong[3];
//	void fill()
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			tong[i].fill();
//		}
//	}
//	void selectEspresso()
//	{
//		if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1)
//		{
//			tong[0].consume();
//			tong[1].consume();
//			cout << "에스프레소 드세요\n";
//		}
//		else
//		{
//			cout << "원료가 부족합니다\n";
//		}
//	}
//	void selectAmericano()
//	{
//		if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2)
//		{
//			tong[0].consume();
//			tong[1].consume();
//			tong[1].consume();
//			cout << "아메리카노 드세요\n";
//		}
//		else
//		{
//			cout << "원료가 부족합니다\n";
//		}
//	}
//	void selectSugarCoffee()
//	{
//		if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1)
//		{
//			tong[0].consume();
//			tong[1].consume();
//			tong[1].consume();
//			tong[2].consume();
//			cout << "설탕커피 드세요\n";
//		}
//		else
//		{
//			cout << "원료가 부족합니다\n";
//		}
//	}
//	void show()
//	{
//		cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
//	}
//public:
//	CoffeeVendingMachine() {};
//	void run()
//	{
//		int n;
//		cout << "***** 커피자판기를 작동합니다. *****\n";
//		while (1)
//		{
//			cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
//			cin >> n;
//			switch (n)
//			{
//			case 1:
//				selectEspresso();
//				break;
//			case 2:
//				selectAmericano();
//				break;
//			case 3:
//				selectSugarCoffee();
//				break;
//			case 4:
//				show();
//				break;
//			case 5:
//				fill();
//				show();
//				break;
//			default:
//				cout << "\n잘못된 입력입니다.\n";
//				break;
//			}
//		}
//	}
//};
//int main(void)
//{
//	CoffeeVendingMachine machine;
//	machine.run();
//}