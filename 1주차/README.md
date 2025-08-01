# 📘 C++ 기초 문법 연습 예제 - 01.cpp

> 다양한 실생활 문제를 바탕으로 C++의 기초 문법을 폭넓게 연습할 수 있는 예제입니다.  
> 입출력부터 변수 사용, 연산, 문자 처리, 문자열, 단위 변환, 조건문까지 전반적인 C++의 기초를 익히는 데 적합합니다.

---

## 📁 파일 구성

| 파일명   | 설명                                      |
|----------|-------------------------------------------|
| `01.cpp` | C++ 기초 문법과 실습 예제가 모두 담긴 메인 코드 |

---

## 📂 주요 학습 주제

- `cin`, `cout`을 이용한 다양한 사용자 입력 처리
- 산술 연산 (덧셈, 곱셈, 나눗셈 등)
- 정수와 실수 연산, 평균, 비율 계산
- 문자(char)와 아스키코드 활용
- 문자열 입력과 출력 (`char[]`, `cin.getline()`)
- 조건문을 활용한 로직 처리 (`if`, `while`)
- 단위 변환 (온도, 거리, 무게 등)
- 통화 요금, 급여 계산, 승률 등 실생활 계산 문제

---

## 🧪 예제 목록 (일부)

- 이름, 소속, 이메일 출력
- 상품 단가 및 개수를 입력받아 총 금액 계산
- 반지름을 입력 받아 원의 면적 계산
- 소문자 ↔ 대문자 변환
- 암호가 맞을 때까지 반복 입력 받기 (`strcmp`)
- 문자열 길이 구하기 (`strlen`), 배열 크기 확인 (`sizeof`)
- 스왑(SWAP) 알고리즘 구현
- mile → km, 평 → 제곱미터 등 단위 변환
- 급여, 통화 요금, 전기요금, 승률 등 현실적 계산 문제 구현
- 다항식 계산, 시간 기반 거리/속도 계산 등 수학적 연산

---

## 📌 사용된 주요 문법

- `#include <iostream>`, `#include <cstring>`, `#include <cmath>`
- `char[]`, `cin.getline()`, `strcmp()`, `strlen()`
- 변수 선언 (`int`, `double`, `char`, `string`)
- 산술 연산자 (`+`, `-`, `*`, `/`, `%`)
- 조건문 (`if`, `while`, `break`)
- 형 변환 (`(char)`, `(int)`)
- 콘솔 출력 정렬 (`\t`, `endl`, `cout.precision()`)

---

## ▶️ 실행 방법

### 1. 컴파일

```bash
g++ 01.cpp -o practice
