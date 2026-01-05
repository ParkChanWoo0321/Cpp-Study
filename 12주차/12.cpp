// 호출한 클래스 명에 따라 같은 함수여도 다른 결과 출력
#include <iostream>
using namespace std;
class AbstractGate {
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};
class ANDGate :public AbstractGate
{
public:
	bool operation() { return x && y; }
};
class ORGate :public AbstractGate
{
public:
	bool operation() { return x || y; }
};
class XORGate :public AbstractGate
{
public:
	bool operation() { return x != y; }
};
int main(void)
{
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);
	cout.setf(ios::boolalpha);
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;
}

// 클래스 배열 생성 후 메모리 동적 할당하기 
#include <iostream>
using namespace std;
class Shape
{
protected:
	string name;
	int width, height;
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; }
	string getName() { return name; }
};
class Oval :public Shape
{
public:
	Oval(string name,int width,int height) :Shape(name,width,height) {}
	double getArea() { return 3.14 * width* height; }
};
class Rect :public Shape
{
public:
	Rect(string name, int width, int height) :Shape(name, width, height) {}
	double getArea() { return width * height; }
};
class Triangular :public Shape
{
public:
	Triangular(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() { return width/2 * height; }
};
int main(void)
{
	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for (int i = 0; i < 3; i++) {cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl;}
	for (int i = 0; i < 3; i++) {delete p[i];}
}

// 가상 함수로 변경
#include <iostream>
using namespace std;
class Shape
{
protected:
	string name;
	int width, height;
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() = 0;
	virtual string getName() = 0;
};
class Oval :public Shape
{
protected:
	virtual string getName() { return name; }
public:
	Oval(string name,int width,int height) :Shape(name,width,height) {}
	double getArea() { return 3,14*width*height; }
};
class Rect :public Shape
{
protected:
	virtual string getName() { return name; }
public:
	Rect(string name, int width, int height) :Shape(name, width, height) {}
	double getArea() { return width*height; }
};
class Triangular :public Shape
{
protected:
	virtual string getName() { return name; }
public:
	Triangular(string name, int width, int height) : Shape(name, width, height) {}
	double getArea() { return width/2 * height; }
};
int main(void)
{
	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for (int i = 0; i < 3; i++) {cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl;}
	for (int i = 0; i < 3; i++) {delete p[i];}
}
