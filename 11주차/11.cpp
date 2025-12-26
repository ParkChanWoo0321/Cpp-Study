//// 중복 함수 클래스 명에 따라 다른 함수 호출
//#include <iostream>
//using namespace std;
//class Base {
//public:
//	void f() { cout << "Base::f() called" << endl; }
//};
//class Derived :public Base {
//public:
//	void f() { cout << "Derived::f() called" << endl; }
//};
//int main(void)
//{
//	Derived d, * pDer;
//	pDer = &d;
//	pDer->f();
//
//	Base* pBase;
//	pBase = pDer;
//	pBase->f();
//}
//
//#include <iostream>
//using namespace std;
//class Base {
//public:
//	virtual void f() { cout << "Base::f() called" << endl; }
//};
//class Derived :public Base {
//public:
//	virtual void f() { cout << "Derived::f() called" << endl; }
//};
//int main(void)
//{
//	Derived d, * pDer;
//	pDer = &d;
//	pDer->f();
//
//	Base* pBase;
//	pBase = pDer;
//	pBase->f();
//}
//
//// 클래스 메모리 할당하기
//#include <iostream>
//using namespace std;
//class Shape {
//public:
//	void paint() { draw(); }
//	virtual void draw() { cout << "Shape::draw()called" << endl; }
//};
//int main(void)
//{
//	Shape* pShape = new Shape();
//	pShape->paint();
//	delete pShape;
//}
//
//#include <iostream>
//using namespace std;
//class Shape 
//{
//public:
//	void paint() { draw(); }
//	virtual void draw() { cout << "Shape::draw()called" << endl; }
//};
//class Circle :public Shape 
//{
//public:
//	virtual void draw() { cout << "Circle::draw()called" << endl; }
//};
//int main(void)
//{
//	Shape* pShape = new Circle();
//	pShape->paint();
//	delete pShape;
//}
//
//// 클래스 명에 따라 함수 이름이 같아도 다른 결과 출력
//#include <iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void f() { cout << "Base::f()called" << endl; }
//};
//class Derived : public Base
//{
//public:
//	void f() { cout << "Derived::f()called" << endl; }
//};
//class GrandDerived : public Derived
//{
//public:
//	void f() { cout << "GrandDerived::f()called" << endl; }
//};
//int main(void)
//{
//	GrandDerived g;
//	Base* bp;
//	Derived* dp;
//	GrandDerived* gp;
//	bp = dp = gp = &g;
//	bp->f();
//	dp->f();
//	gp->f();
//}
//
//// 상속받은 클래스 함수 사용
//#include <iostream>
//using namespace std;
//class Shape
//{
//public:
//	virtual void draw() { cout << "--Shape--"; }
//};
//class Circle :public Shape {
//public:
//	virtual void draw()
//	{
//		Shape::draw();
//		cout << "Circle" << endl;
//	}
//};
//int main(void)
//{
//	Circle circle;
//	Shape* pShape = &circle;
//	pShape->draw();
//	pShape->Shape::draw();
//}
//
//// 소멸자 클래스 사용
//#include <iostream>
//using namespace std;
//class Base {
//public:
//	virtual ~Base() { cout << "~Base()" << endl; }
//};
//class Derived :public Base
//{
//public:
//	virtual ~Derived() { cout << "~Derived()" << endl; }
//};
//int main(void)
//{
//	Derived* dp = new Derived();
//	Base* bp = new Derived();
//
//	delete dp;
//	delete bp;
//}
//
//// 가상 클래스 사용
//#include <iostream>
//using namespace std;
//class Calculator
//{
//public:
//	virtual int add(int a, int b) = 0;
//	virtual int subtract(int a, int b) = 0;
//	virtual double average(int a[], int size) = 0;
//};
//class GoodCalc :public Calculator
//{
//public:
//	int add(int a, int b) { return a + b; }
//	int subtract(int a, int b) { return a - b; }
//	double average(int a[], int size)
//	{
//		double sum = 0;
//		for (int i = 0; i < size; i++)
//			sum += *(a+i);
//		return sum / size;
//	}
//};
//int main(void)
//{
//	int a[] = { 1,2,3,4,5 };
//	Calculator* p = new GoodCalc();
//	cout << p->add(2, 3) << endl;
//	cout << p->subtract(2, 3) << endl;
//	cout << p->average(a,5) << endl;
//	delete p;
//}
//
//// 클래스에 따라 다른 계산값 출력
//#include <iostream>
//using namespace std;
//class Calculator {
//	void input()
//	{
//		cout << "정수 2개를 입력하세요>> ";
//		cin >> a >> b;
//	}
//protected:
//	int a, b;
//	virtual int calc(int a, int b) = 0;
//public:
//	void run() {
//		input();
//		cout << "계산된 값은 " << calc(a, b) << endl;
//	}
//};
//class Adder :public Calculator
//{
//public:
//	int calc(int a, int b) { return a + b; }
//};
//class Subtractor :public Calculator
//{
//public:
//	int calc(int a, int b) { return a - b; }
//};
//int main(void)
//{
//	Adder adder;
//	Subtractor subtractor;
//	adder.run();
//	subtractor.run();
//}
//
//// 한 클래스를 여러 클래스에 상속
//#include <iostream>
//using namespace std;
//class Converter {
//protected:
//	double ratio;
//	virtual double convert(double src) = 0;
//	virtual string getSourceString() = 0;
//	virtual string getDestString() = 0;
//public:
//	Converter(double ratio) { this->ratio = ratio; }
//	void run()
//	{
//		double src;
//		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
//		cout << getSourceString() << "을 입력하세요 >> ";
//		cin >> src;
//		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
//	}
//};
//class WonToDallar :public Converter
//{
//protected:
//	virtual string getSourceString() { return "원"; }
//	virtual string getDestString() { return "달러"; }
//	virtual double convert(double src) { return src / ratio; }
//public:
//	WonToDallar(double src) :Converter(src){}
//};
//class KmToMile :public Converter
//{
//protected:
//	virtual string getSourceString() { return "Km"; }
//	virtual string getDestString() { return "Mile"; }
//	virtual double convert(double src) { return src / ratio; }
//public:
//	KmToMile(double src) :Converter(src) {}
//};
//int main(void)
//{
//	KmToMile toMile(1.609344);
//	toMile.run();
//}
//
//#include <iostream>
//using namespace std;
//class LoopAdder
//{
//	string name;
//	int x, y, sum;
//	void read();
//	void write();
//protected:
//	LoopAdder(string name = "") { this->name = name; }
//	int getX() { return x; }
//	int getY() { return y; }
//	virtual int calculate() = 0;
//public:
//	void run();
//};
//void LoopAdder::read()
//{
//	cout << name << ":" << endl;
//	cout << "처음 수에서 두번째 수 까지 더합니다. 두 수를 입력하세요 ";
//	cin >> x >> y;
//}
//void LoopAdder::write()
//{
//	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다." << endl;
//}
//void LoopAdder::run()
//{
//	read();
//	sum = calculate();
//	write();
//}
//class ForLoopAdder :public LoopAdder
//{
//public:
//	ForLoopAdder(string name) :LoopAdder(name) {}
//	int calculate()
//	{
//		double sum = 0;
//		for (int i = getX(); i <= getY(); i++)
//			sum += i;
//		return sum;
//	}
//};
//int main(void)
//{
//	ForLoopAdder forLoop("For Loop");
//	forLoop.run();
//}