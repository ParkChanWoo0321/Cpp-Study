//// 부모 클래스 상속
//#include <iostream>
//using namespace std;
//class Point 
//{
//	int x, y;
//public:
//	void set(int x, int y) { this->x = x; this->y = y; }
//	void showPoint() { cout << "(" << x << "," << y << ")" << endl; }
//};
//class ColorPoint :public Point 
//{
//	string color;
//public:
//	void setColor(string color) { this->color = color; }
//	void showColorPoint()
//	{
//		cout << color << ":";
//		showPoint();
//	}
//};
//int main(void)
//{
//	Point p;
//	ColorPoint cp;
//	cp.set(3, 4);
//	cp.setColor("Red");
//	cp.showColorPoint();
//}
//
//// 클래스를 상속받아 부모 클래스 함수 사용
//#include <iostream>
//using namespace std;
//class Point
//{
//protected:
//	int x, y;
//public:
//	void set(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//	void showPoint()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//class ColorPoint : public Point
//{
//	string color;
//public:
//	void setColor(string color)
//	{
//		this->color = color;
//	}
//	void showColorPoint()
//	{
//		cout << color << ":";
//		showPoint();
//	}
//	bool equals(ColorPoint p)
//	{
//		if (x == p.x && y == p.y && color == p.color)
//			return true;
//		else
//			return false;
//	}
//};
//int main(void)
//{
//	Point p;
//	p.set(2, 3);
//	p.showPoint();
//	ColorPoint cp;
//	cp.set(3, 4);
//	cp.setColor("Red");
//	cp.showColorPoint();
//	ColorPoint cp2;
//	cp2.set(3, 4);
//	cp2.setColor("Red");
//	cout << ((cp.equals(cp2)) ? "true" : "false");
//}
//
//// 조상클래스를 부모가 상속받고 부모 클래스를 자식이 상속받음
//#include <iostream>
//using namespace std;
//class TV
//{
//	int size;
//public:
//	TV() { size = 20; }
//	TV(int size) { this->size = size; }
//	int getSize() { return size; }
//};
//class WideTV :public TV
//{
//	bool videoIn;
//public:
//	WideTV(int size, bool videoIn) :TV(size)
//	{
//		this->videoIn = videoIn;
//	}
//	bool getVideoIn() { return videoIn; }
//};
//class SmartTV :public WideTV
//{
//	string ipAddr;
//public:
//	SmartTV(string ipAddr, int size) : WideTV(size, true)
//	{
//		this->ipAddr = ipAddr;
//	}
//	string getIpAddr() { return ipAddr; }
//};
//int main(void)
//{
//	SmartTV htv("192.0.0.1", 32);
//	cout << "size=" << htv.getSize() << endl;
//	cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
//	cout << "IP=" << htv.getIpAddr() << endl;
//}
//
//// 부모 클래스 상속받아 값을 입력함
//#include <iostream>
//using namespace std;
//class Circle
//{
//	int radius;
//public:
//	Circle(int radius = 0) { this->radius = radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//class NamedCircle :public Circle
//{
//	string name;
//public:
//	NamedCircle(int radius, string name):Circle(radius)
//	{
//		this->name=name;
//	}
//	void show()
//	{
//		cout <<"반지름이 "<<getRadius()<<"인 " << name << endl;
//	}
//};
//int main(void)
//{
//	NamedCircle waffle(3, "waffle");
//	waffle.show();
//}
//
//// protected : 클래스 내 에서만 사용가능
//#include <iostream>
//using namespace std;
//class Adder
//{
//protected:
//	int add(int a,int b)
//	{
//		return a + b;
//	}
//};
//class Subtractor
//{
//protected:
//	int minus(int a, int b)
//	{
//		return a - b;
//	}
//};
//class Calculator :public Adder, public Subtractor
//{
//public:
//	int calc(char op, int a, int b)
//	{
//		int res = 0;
//		switch (op)
//		{
//		case '+':res = add(a, b); break;
//		case '-':res = minus(a, b); break;
//		}
//		return res;
//	}
//};
//int main(void)
//{
//	Calculator handCalculator;
//	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
//	cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;
//}
//
//// this-> 로 값 지정
//#include <iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(int x, int y) { this->x = x; this->y = y;}
//	int getX() { return x; }
//	int getY() { return y; }
//protected:
//	void move(int x, int y) { this->x = x; this->y = y; }
//};
//class ColorPoint :public Point
//{
//	string color;
//public:
//	ColorPoint(int x, int y, string color) :Point(x, y)
//	{
//		this->color = color;
//	}
//	void setPoint(int x, int y)
//	{
//		move(x, y);
//	}
//	void setColor(string color)
//	{
//		this->color = color;
//	}
//	void show()
//	{
//		cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.\n";
//	}
//};
//int main(void)
//{
//	ColorPoint cp(5, 5, "RED");
//	cp.setPoint(10, 20);
//	cp.setColor("BLUE");
//	cp.show();
//}
//
//#include <iostream>
//using namespace std;
//class Point
//	{
//		int x, y;
//	public:
//		Point(int x, int y) { this->x = x; this->y = y;}
//		int getX() { return x; }
//		int getY() { return y; }
//	protected:
//		void move(int x, int y) { this->x = x; this->y = y; }
//	};
//	class ColorPoint :public Point
//	{
//		string color;
//	public:
//		ColorPoint(int x=0, int y=0,string color="BLACK") :Point(x, y)
//		{
//			this->color = color;
//		}
//		void setPoint(int x, int y)
//		{
//			move(x, y);
//		}
//		void setColor(string color)
//		{
//			this->color = color;
//		}
//		void show()
//		{
//			cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.\n";
//		}
//	};
//int main(void)
//{
//	ColorPoint zeroPoint;
//	zeroPoint.show();
//
//	ColorPoint cp(5, 5);
//	cp.setPoint(10, 20);
//	cp.setColor("BLUE");
//	cp.show();
//}
//
//// 클래스를 이용하여 스택 구현하기
//#include <iostream>
//using namespace std;
//class BaseArray {
//private:
//    int capacity;
//    int* mem;
//protected:
//    BaseArray(int capacity = 100)
//    {
//        this->capacity = capacity;
//        mem = new int[capacity];
//    }
//    ~BaseArray() { delete[] mem; }
//    void put(int index, int val) { mem[index] = val; }
//    int get(int index) { return mem[index]; }
//    int getCapacity() { return capacity; }
//};
//class MyStack : public BaseArray {
//private:
//    int topIndex;
//public:
//    MyStack(int capacity = 100) : BaseArray(capacity)
//    {
//        topIndex = 0;
//    }
//    void push(int val)
//    {
//        if (topIndex >= getCapacity()) {
//            cout << "스택이 가득 찼습니다." << endl;
//            return;
//        }
//        put(topIndex, val);
//        topIndex++;
//    }
//    int pop()
//    {
//        if (topIndex == 0) {
//            cout << "스택이 비어 있습니다." << endl;
//            return -1;
//        }
//        topIndex--;
//        return get(topIndex);
//    }
//    int length() { return topIndex; }
//    int capacity() { return getCapacity(); }
//};
//int main(void)
//{
//    MyStack mStack(100);
//    int n;
//    cout << "스택에 삽입할 5개의 정수를 입력하라>>";
//    for (int i = 0; i < 5; i++)
//    {
//        cin >> n;
//        mStack.push(n);
//    }
//    cout << "스택 용량:" << mStack.capacity() << ", 스택의 크기:" << mStack.length() << endl;
//    cout << "스택의 원소를 순서대로 제거하여 출력한다>>";
//    while (mStack.length() != 0)
//    {
//        cout << mStack.pop() << " ";
//    }
//    cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
//}
