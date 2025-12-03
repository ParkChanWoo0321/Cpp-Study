//#include <iostream>
//using namespace std;
//int main(void)
//{
//	// string 형태로 배열 생성하여 문자 탐색
//	string names[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "이름 >> ";
//		getline(cin, names[i], '\n');
//	}
//	string first = names[0];
//	string latter = names[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (latter < names[i])
//		{
//			latter = names[i];
//		}
//		if (first > names[i])
//		{
//			first = names[i];
//		}
//	}
//	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
//	cout << "사전에서 가장 앞에 나오는 문자열은 " << first << endl;
//
//	// 영어로 문자열을 입력받아 자리를 찾아 출력
//	string s;
//	cout << "문자열을 입력하시오(한글 안됨)" << endl;
//	getline(cin, s, '\n');
//	int len = s.length();
//	for (int i = 0; i < len; i++)
//	{
//		string first = s.substr(0, 1);
//		string sub = s.substr(1, len - 1);
//		s = sub + first;
//		cout << s << endl;
//	}
//}
//
//
//// 함수 중복하여 사용 가능
//#include <iostream>
//using namespace std;
//int big(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//int big(int* p, int size)
//{
//	int res = *p;
//	for (int i = 1; i < size; i++)
//		if (res < *(p + i)) res = *(p + i);
//	return res;
//}
//int main(void)
//{
//	int array[5] = { 1,9,-2,8,6 };
//	cout << big(2, 3) << endl;
//	cout << big(array, 5) << endl;
//}
//
//// 원하는 값을 입력 안할시 다른 정해진 값으로 지정
//#include <iostream>
//using namespace std;
//void star(int a = 5)
//{
//	for (int i = 0; i < a; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
//void msg(int id, string text = "")
//{
//	cout << id << " " << text << endl;
//}
//int main(void)
//{
//	star();
//	star(10);
//	msg(10);
//	msg(10, "Hello");
//}
//
//#include <iostream>
//using namespace std;
//void f(char c = ' ', int line = 1)
//{
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << c;
//		}
//		cout << endl;
//	}
//}
//int main(void)
//{
//	f();
//	f('%');
//	f('@', 5);
//}
//
//// 클래스 멤버 값 지정
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	double money;
//	void addMoney(int money)
//	{
//		this->money += money;
//	}
//	static int sharedMoney;
//	static void addShared(int n)
//	{
//		sharedMoney += n;
//	}
//};
//int Person::sharedMoney = 10;
//int main(void)
//{
//	Person han;
//	han.money = 100;
//	han.sharedMoney = 200;
//	Person lee;
//	lee.money = 150;
//	lee.addMoney(200);
//	lee.addShared(200);
//	cout << han.money << " " << lee.money << endl;
//	cout << han.sharedMoney << " " << lee.sharedMoney << " " << Person::sharedMoney << endl;
//}
//
//// 소멸자 활용
//#include <iostream>
//using namespace std;
//class Circle
//{
//private:
//	static int numOfCircles;
//	int radius;
//public:
//	Circle(int r = 1);
//	~Circle() { numOfCircles--; }
//	double getArea() { return 3.14 * radius * radius; }
//	static int getNumOfCircles() { return numOfCircles; }
//};
//Circle::Circle(int r)
//{
//	radius = r;
//	numOfCircles++;
//}
//int Circle::numOfCircles = 0;
//int main(void)
//{
//	Circle* p = new Circle[10];
//	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
//	delete[]p;
//	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
//	Circle a;
//	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
//	Circle b;
//	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
//}
//
//// 함수에 배열 입력받기
//#include <iostream>
//using namespace std;
//int add(int a[], int size, int b[]={})
//{
//	int asum = 0;
//	int bsum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		asum += a[i];
//		bsum += b[i];
//	}
//	return asum + bsum;
//}
//int main(void)
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 6,7,8,9,10 };
//	int c = add(a, 5);
//	int d = add(a, 5, b);
//	cout << c << endl;
//	cout << d << endl;
//}
//
//// 클래스에 값, 문자열 입력
//#include <iostream>
//using namespace std;
//class Person
//{
//	int id;
//	double weight;
//	string name;
//public:
//	Person(int id=1, string name=" ", double weight=20.5)
//	{
//		this->id = id;
//		this->name = name;
//		this->weight = weight;
//	}
//	void show()
//	{
//		cout << id << " " << weight << " " << name << endl;
//	}
//};
//int main(void)
//{
//	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
//	grace.show();
//	ashley.show();
//	helen.show();
//}
//
//// 값 입력 안할시 임의로 값 지정
//#include <iostream>
//using namespace std;
//int big(int a=100,int b=100,int c=100)
//{
//	if (a > b)
//	{
//		if (a > c)
//			return c;
//		else
//			return a;
//	}
//	else
//	{
//		if (b < c)
//			return b;
//		else
//			return c;
//	}
//}
//int main(void)
//{
//	int x = big(3, 5);
//	int y = big(300, 60);
//	int z = big(30, 60, 50);
//	cout << x << " " << y << " " << z << endl;
//}