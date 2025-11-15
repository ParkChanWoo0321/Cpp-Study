# 🧾 C++ 구조체 · 클래스 기초 예제 모음 (`07.cpp`)

> `07.cpp`는 C++의 **구조체(pointer 포함)**와 **클래스(생성자, 소멸자, 캡슐화)** 개념을 연습하기 위한 여러 개의 독립 예제가 한 파일에 모여 있는 학습용 코드입니다.

> ⚠️ `main()` 함수가 여러 개 있으므로,  
> 특정 예제를 실행하려면 **사용할 예제 블록만 남기고 나머지는 주석 처리**한 뒤 컴파일해야 합니다.

---

## 📂 파일 개요

- 파일명: `07.cpp`
- 언어: C++
- 주요 내용:
  - `struct namecard` + 포인터 활용
  - 여러 형태의 생성자 오버로딩
  - 캡슐화된 클래스 설계
  - 소멸자(`~Oval`) 동작 확인
  - 간단한 객체 지향 실습 (은행 계좌, 커피머신 등)

---

🔹 1. 구조체 + 포인터: 명함(namecard) 관리
struct namecard
struct namecard {
    string name;
    string job;
    string tel;
    string email;
};

주요 함수


void structPrn(namecard *temp)


namecard 배열을 포인터 연산으로 순회하면서 이름/직업/연락처/이메일 출력




void structInput(namecard* pTemp)


namecard 배열 주소를 받아, 사용자로부터 3명의 정보를 입력받아 채움




사용 예


단일 구조체 + 포인터:


namecard x = { "전수빈","치과의사","356-0868","eldy@naver.com" };
namecard y = { "전원지","디자이너","345-0876","onejee@naver.com" };
namecard* p = &x;
// p->name, p->job ... 으로 접근



구조체 배열 입력 & 출력:


namecard x[3];
structInput(x);
structPrn(x);


🔹 2. 기본 클래스와 생성자 연습
🟡 Circle 클래스
class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    double getArea() { return 3.14 * radius * radius; }
};



기본 생성자를 통해 radius가 지정되지 않으면 자동으로 1로 초기화


원의 면적을 계산하는 getArea() 제공



🔷 Rectangle 클래스 (생성자 오버로딩)
class Rectangle {
    int width;
    int height;
public:
    Rectangle() { width = 3; height = 5; }
    Rectangle(int w, int h) { width = w; height = h; }
    Rectangle(int w) { width = height = w; }
    int getArea() { return width * height; }
    bool isSquare() { return width == height; }
};



기본값(3×5), 정사각형(한 개 인자), 임의 크기(두 개 인자) 생성자 제공


isSquare()로 정사각형 여부 판단



🗼 Tower 클래스
class Tower {
    int height;
public:
    Tower() { height = 1; }
    Tower(int h) { height = h; }
    int getHeight() { return height; }
};



기본 높이 1m, 또는 지정 높이로 타워 생성


getHeight()로 현재 높이 확인



🔹 3. 단순 데이터 클래스 연습
📅 Date 클래스
class Date {
    int year, month, day;
public:
    Date(int y,int m,int d) { year=y; month=m; day=d; }
    int getYear(); 
    int getMonth(); 
    int getDay();
};



생성 시 날짜 지정


각 필드를 개별적으로 반환하는 getter 제공



💰 Account 클래스
class Account {
    string name;
    int id;
    int money;
public:
    Account(string n, int i, int m);
    string getOwner();
    void deposit(int m);
    int inquiry();
    int withdraw(int m);
};



예금주 이름, 계좌번호, 잔액을 관리


입금(deposit), 출금(withdraw), 잔액 조회(inquiry) 메서드 제공



☕ CoffeeMachine 클래스
class CoffeeMachine {
private:
    int coffee;
    int water;
    int sugar;
public:
    CoffeeMachine(int a,int b,int c) {
        coffee = a;
        water = b;
        sugar = c;
    }
    void drinkEspresso() {
        coffee -=1;
        water -=1;
    }
    void show() {
        cout << "커피 머신 상태, 커피:" << coffee 
             << "\t물:" << water << "\t설탕:" << sugar << endl;
    }
    void drinkAmericano() {
        coffee -=1;
        water -=2;
    }
    void drinkSugarCoffee() {
        coffee -=1;
        water -=2;
        sugar -=1;
    }
    void fill() {
        coffee =10;
        water = 10;
        sugar = 10;
    }
};



내부 자원(커피/물/설탕)을 소모하면서 다양한 커피 메뉴 제공


show()로 현재 자원 상태 확인



🔢 Integer 클래스
class Integer {
private:
    int integer;
public:
    Integer(int a) { integer = a; }
    int get() { return integer; }
    void set(int n) { integer = n; }
    bool isEven() { return true; } // 추후 수정 대상
};



정수값 저장 및 반환


짝수 판별용 isEven() 메서드 포함
(현재 구현은 항상 true 반환 → 실제 짝수 판별 로직으로 고치면서 연습 가능)



🔹 4. 소멸자(Dtor) 예제: Oval 클래스
class Oval {
private:
    int width;
    int height;

public:
    Oval() {
        width = 0;
        height = 0;
    }
    Oval(int w, int h) {
        width = w;
        height = h;
    }
    void set(int w, int h) {
        width = w;
        height = h;
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    void show() {
        cout << "width = " << width << ", height = " << height << endl;
    }
    ~Oval() {
        cout << "Oval 소멸 : width = " << width 
             << ", height = " << height << endl;
    }
};



생성자에서 너비/높이 초기화


show()로 현재 상태 출력


객체가 스코프를 벗어나 소멸될 때 소멸자 메시지 출력 → 소멸 시점/수명 확인 용도



🛠 컴파일 & 실행 방법

한 번에 하나의 예제(main)만 남겨두고 컴파일하는 것을 권장합니다.

g++ 07.cpp -o 07
./07

또는 특정 블록만 별도 파일로 분리하여 실습용으로 사용하는 방식도 가능합니다.

🎯 정리
07.cpp는 다음을 연습하기 위한 예제 모음입니다.


구조체와 포인터(namecard*)를 이용한 데이터 처리


생성자 오버로딩, 멤버 함수, 캡슐화


객체 지향 설계 예제 (계좌, 커피머신, 날짜 등)


소멸자 동작 확인을 통한 객체 생명주기 이해


C++ 기본 문법과 OOP 개념을 반복 연습하는 실습용 자료로 활용할 수 있습니다.
