# iot-cpp-2025
## C++ 기초

### 1일차
#### 입출력
- end : 개행
- cout : 출력을 담당하는 객체
	[C++](./Day1/02_cout.cpp)
- cin : 입력을 담당하는 객체
	```C++
	#include <iostream>     // C++
	using namespace std;        
	// 입력시 하단의 코드에 std:: 입력하지 않아도 출력됨

	std::cout << "숫자입력 > " ;
	cin >> inVal;
	cout << "inVal: " << inVal << endl;
	```
<br>

#### 함수의 다형성
- 함수 구분 방법 : 함수 이름 + 매개변수(타입, 개수)
- 함수 오버로딩 : 함수의 다중 정의
	- 동일한 함수명인데 **매개변수 타입이 다르거나, 매개변수 갯수가 다르면** 다른 함수로 인지
	[C++](./Day1/06_overloading.cpp)
- 함수 오버라이딩 : 함수의 **재정의** --> 상속 관계에서 구현 (자식이 새롭게 정의함)
<br>

#### 매개변수 default 값
- **함수의 원형 선언**에서만 위치해야 함
- 매개변수 입력 X -> 디폴트 매개변수 적용
	[C++](./Day1/07_default.cpp)
- 디폴트 매개변수를 여러 개 적용할 때는 맨 **오른쪽부터** 순서대로 작성
	[C++](./Day1/08_default2.cpp)
- 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 경우 입력 없는 함수 호출시 문제 발생
	[C++](./Day1/09_default3.cpp)
<br>

#### 이름공간(namespace)
- 대규모 프로젝트 시 함수명, 변수명 충돌을 구분하기 위함 (std namespace 사용)
- 네임스페이스::함수();
	[C++](./Day1/10_namesp.cpp)
- scope : 다른 클래스의 함수 불러옴
	[scope](./Day1/scope.h)
	[C++](./Day1/11_scope.cpp)
<br>

#### 참조자(reference)
``` C++
type& 참조변수명 = 참조가 가리킬 기존 변수;
```
- 특정한 공간을 차지하는 것 X, **변수의 주소값으로 대체**됨
- 참조자 (&) -> **별칭**!
- **선언시 바로 초기화**해줘야 함
- Lvaule 참조자 -> 변수의 참조자 (Lvaule에는 변수만 올 수 있음)
- Rvalue 참조자
	[C++](./Day1/15_ref.cpp)
	[C++](./Day1/17_ref3.cpp)
- 상수레퍼러스로 선언하면 리터럴도 참조 받을 수 있음
	[C++](./Day1/18_ref4.cpp)
- 타입이 중요!
- 출력 타입이 int이면 int타입의 변수를 선언해야 함!
 -> 참조를 사용하고 싶을 경우 const 붙임
<br>

#### new & delete (동적 메모리 할당) (C - malloc-free)
- 동적 메모리 할당
	- 프로그램 실행 중에 메모리를 유동적으로 할당하고 해제할 수 있게 해주는 방법
- C 스타일 동적 할당 [C](./Day1/12_new.cpp)
``` C++
자료형 포인터 = new 자료형(크기) 
```
- new 생성자를 호출 (new 객체를 생성시킴)
- 객체를 생성하기 위해 **생성자 호출**이 있어야 함
	- C++ 스타일 동적 할당 [C++](./Day1/13_new2.cpp)
- new는 생성자 호출이 되므로 초기화 가능
- 생성자 - 객체를 생성하고 초기화시키는 기능
	[C++](./Day1/12_new3.cpp)

<hr>


### 2일차
#### Part 2 객제치향
#### 구조체
- C타입 구조체 
	[C](./Day1/21_st_c.cpp)
<br>

#### 클래스(하나의 자료형임), 객체
- 클래스 구성요소
	1. 접근제어 지시자(private: 상속된 것만 접근 가능, public :외부접근 가능, protected: 자신만 접근 가능)
	2. 멤버변수 - 속성 (**private 영역**에 만들어줘야 함) -> 외부에서 접근 불가하게 함
	(ex 코끼리 클래스 -> 속성: 코가 길다, 다리가 4개...) => 추상화(현실에 존재하는 것들을 컴퓨터에 구현)
	3. 멤버함수(메서드) - 속성에 대한 기능 (**public 영역**에 만들어줘야 함) 

- 객체(=인스턴스)
- 클래스 타입의 객체 생성 / 클래스의 인스턴스
- 생성자가 호출되어야 생성됨
<br>

#### 클래스
- 정보은닉
- 캡슐화
- 생성자(클래스 안에 있는 메서드) - 객체를 만들기 위해 생성되는 메서드, 소멸자 (객체를 만드는 과정에서 필요)
	- **생성자 -> 출력 X, 클래스 이름과 똑같은 메서드**
	- **초기화**시키는 기능 담당
[C++](./Day2/03_class3.cpp)
- 메서드 - 클래스 안에 들어 있는 함수
- 클래스, 배열, this 포인터

- 클래스 예시
	[C++](./Day2/01_class.cpp)
	[C++](./Day2/07_MyClass4.cpp)
	```C++
	#define _CRT_SECURE_NO_WARNINGS
	#include <iostream>
	using namespace std;
	/*
		동적할당 받고 Class 간결하게 작성하기
	*/
	class MyClass {
	private:
		int id;
		char* name;
		int age;
	public:
		MyClass() {}			// 디폴트 생성자
		MyClass(int c_id, const char* c_name, int c_age) {			// const : 건드리지말기!!
		}
		~MyClass() { delete[] name;	}
		// 소멸자 -> 객체를 소멸시킴(자동 호출 - 동적할당 경우 말고는 별도로 작성할 필요 없음)
		// 배열로 동적 해제시 []로 delete 해야 함

		void printData() const;  		// 데이터 출력 함수 -> const화 
		// 함수명() const : 함수 안에서 데이터값 변경하지 마시오!
	};

	MyClass::MyClass(int c_id, const char* c_name, int c_age) {		
		// 클래스명:: 클래스에 소속된 메서드(){}
		// MyClass클래스에 소속되어 있는 메서드 MyClass(생성자)
		id = c_id;		// 속성 = 매개변수						
		name = new char[strlen(c_name) + 1];					// C++ - new 사용해서 동적 메모리 할당	(
		if (name != NULL) {
			strcpy(name, c_name);			// c_name 문자열을 동적할당 받은 name에 복사
		}
		age = c_age;
	}

	void MyClass::printData() const{		 // MyClass클래스에 소속되어 있는 메서드 printData 
		// const - 상수 멤버 함수(모든 멤버들을 상수화 시킴 - 변경 불허)
		cout << "동적할당 받기 id: " << id << ", 이름 : " << name << ", age: " << age << endl;
	}

	int main() {
		// MyClass 객체 obj 생성하고 , 생성자에 값 넘겨서 초기화
		MyClass obj(1, "김영수", 20);

		// obj객체의 데이터 출력
		obj.printData();

		return 0;
	}
	```
<br>

#### 상수 초기화
[C++](./Day2/09_init.cpp)
- 상수 - 객체 생성되기 전에 반드시 초기화시켜야 함! => 콜론 초기화 사용
```C++
class ConstClass {
private:
	int m_value;
	const int m_value2;	 // 상수
	
public:
	ConstClass(int value, int value2) : m_value2(value2) /* 선언과 동시에 초기화시켜야 함 */{m_value = value; }
};
```
<br>

#### 멤버 초기화
1. 상수 멤버변수
[C++](./Day2/12_init4.cpp)
2. 레퍼런스
[C++](./Day2/13_init5.cpp)
3. 객체를 멤버로 가지는 경우
[C++](./Day2/14_init6.cpp)
<br>

#### 2일차 복습
- [C++](./Day2/Human.cpp)

<hr>

### 3일차

#### 복사 생성자(Copy Constructor) 
- 객체를 복사할 때 호출되는 특별한 생성자
- 기본 생성자 호출 X
- 복사 생성사 호출(default 복사 생성자)
	[C++](./Day3/01_copyconstor.cpp)
- **객체가 매개변수인 경우 &(참조)로 받아야 함!**
	``` C++
	Person(const Person& other) {}
	```
	[C++](./Day3/02_copyconstor2.cpp)

- 얉은 복사(Shallow Copy)
	- 기본 생성자에 동적 메모리 할당, 복사 생성자 할당 X
	- 같은 메모리 주소 공유 (두 객체가 같은 메모리 주소를 가리키게 됨)
	- 이중 해제 오류 : 두 객체가 소멸될 때 같은 메모리를 두 번 해제하려고 함
	- 댕글링 포인터 : 한 객체가 소멸되면 다른 객체는 이미 해제된 메모리를 가리키게 됨

- 깊은 복사(Deep Copy)
	- 복사 생성자에도 할당
	- 메모리 안정성 : 각 객체가 자신만의 독립적인 메모리를 관리하도록 함
	- 독립성 보장 : 한 객체를 수정해도 다른 객체에 영향 X
	- 올바른 메모리 관리 : 소멸자에서 메모리 해제 시 충돌 발생 X
	[C++](./Day3/03_copyconstor3.cpp)
<br>

#### 변환 생성자
- 다른 타입의 객체로 변환될때 호출하는 생성자.
- 입력을 한 개만 가지는 생성자
	[C++](./Day3/04_변환생성자.cpp)
<br>

- 묵시적으로 변환하는 것을 막아줌
	```C++
	explicit 클래스명(){}
	```
- 명시적 생성자 호출해 직접 초기화 방식으로는 사용 가능함
	```C++
	클래스명 객체명 {값};
	```
<br>

#### 이동 생성자(T&&)
- l-value(변수) = r-value(변수, 리터럴)
- r-value reference를 파라미터로 갖는 이동 생성자
	``` C++
	클래스명(클래스명&& 객체명) noexcept {}
	// noexcept (이동 생성자는 이동시 예외 발생으로 중단됐을 경우 사라지기 때문에 noexcept 사용해서 예외 발생하지 못하도록 함)
	// 호출시
	클래스명 새객체명 (std::move(기존객체명));
	```
- 실습: BankingSystem 만들기 
	[C++](./BankingSystem/banksystem.cpp)
<br>

#### Operator
[C++](./Day3/12_operator.cpp)
[C++](./Day3/13_operator2.cpp)

<hr>

### 4일차
#### Operator 
- 연산자 오버로딩
	객체를 리턴 [C++](./Day4/02_operator2.cpp)
	참조를 리턴 [C++](./Day4/03_constructor.cpp)
	-> 복사 생성자가 출력됨
	```C++
	클래스명 operator연산자(+, -...)(const 클래스명& 객체명) {}
	
	p1.operator+(p2);
	p1 + p2;
	p1 + p2 + p3;	

	```
- 전역함수 오버로딩
	1. public
		- 객체 두 개가 다 입력으로 들어와야 함
	[C++](./Day4/06_operator5.cpp)
	2. private
		- 함수 원형에 **friend 선언**을 하면 외부에서 private 또는 protected 멤버의 접근이 허용됨
	[C++](./Day4/07_operator6.cpp)
	3. 단항 연산자
		- 반환형 operator[연산자]()
	[C++](./Day4/08_operator7.cpp)
<br>

#### 인라인(Inline) 함수, 매크로 함수
- 메크로 - 전처리기, inline 함수 - 컴파일러가 처리함
- 매크로 함수
[C++](./Day4/11_inline.cpp)
- 인라인 함수
[c++](./Day4/12_inline2.cpp)
<br>

#### 함수템플릿
- 여러 자료형을 템플릿 인자로 받아 함수 내부에서 활용
- 같은 함수 로직을 여러 타입에 대해 **재사용**할 수 있다.
- 템플릿은 선언과 함수정의가 분리될 수 없다.
- **다형성, 재활용**
	```C++
	template <typename T>
	T Add(T a, T b) {
	return a + b;
	}
	```
	[C++](./Day4/13_template.cpp)

- 템플릿 특수화 
	- 템플릿 일반화 중 특별한 타입을 처리할 경우
	```C++
	template <>							// 템플릿 특수화-템플릿 일반화 중 특별한 타입만 처리할 경우
	int func<int>(int a, int b){		// 명시적으로 int 자료형으로 표현되어 있음
		cout << "type: <int>" << endl;
		return a + b;
	}
	```
	[C++](./Day4/14_template2.cpp)
	- 템플릿 typename이 여러 개인 경우
		-> typename을 여러개 지정해주면 됨
	```C++
	template <typename T, typename T2>
	```
	[C++](./Day4/15_template3.cpp)
<br>

#### 클래스 템플릿

```C++
template <typename T>
class CTemplate {
private:
T data;
public:
CTemplate(T d) {data = d;}
T getData() { return data; }
};
```
[C++](./Day4/16_template4.cpp)
- 클래스 템플릿의 특수화
	- 클래스 템플릿은 인스턴스 생성 시 반드시 **typename을 작성**해야 함!
	[C++](./Day4/17_template5.cpp)

- 템플릿 매개변수
	[C++](./Day4/18_template6.cpp)

<hr>


### 5일차

#### 상속(Inheritance)
- private, public, protected
- is a(무엇은 무엇이다.), has a(소유) 관계가 성립해야 함
- 상속 받은 멤버들은 상속한 부모 클래스의 생성자에서초기화 해야 함
- 콜론 초기화로 부모의 속성 받아와야 속성 상속 받을 수 있음
	[C++](./Day5/01_inheritance.cpp)

- protected 접근 제어는 상속 받은 자식이 접근 가능함
	[C++](./Day5/02_inheritance2.cpp)

- 상속 관계에서 이니셜라이즈 사용하기
	[C++](./Day5/03_inheritance3.cpp)

- 상속 관계에서 객체 생성 및 소멸
- 생성자의 호출과 생성자의 실행은 다름
	[C++](./Day5/04_inheritance4.cpp)
<br>

#### 객체 포인터
- 객체 포인터
	[C++](./Day5/05_objPointer.cpp)

- 객체 동적 생성
	[C++](./Day5/06_objPointer2.cpp)
	[C++](./Day5/07_objPointer3.cpp)

- nullptr
	[C++](./Day5/08_objPointer4.cpp)

- 추상클래스 -> 객체를 새성할 수 없음
- 상속에서 객체 포인터
	부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모 타입으로 업캐스팅된다.
	[C++](./Day5/09_objPointer5.cpp)

- 다운캐스팅 : 자식 포인터로 부모 객체를 가리킬 수 없다
	[C++](./Day5/10_objPoint6.cpp)

#### 가상함수
- 파생클래스에서 재정의할 것을 약속받은 멤버 함수를 말하며 클래스의 멤버함수에 virtual 키워드를 사용하여 만든다.
- 프로그램 실행 중 호출된 함수가 결정될 형태 -> 동적 바이딩
	[C++](./Day5/11_virtual.cpp)
<br>

#### Virtual Class
- 순수 가상함수를 가지는 클래스 
- 순수 지정자를 가지는 메서드 : 순수 가상 함수
- 추상클래스는 객체 생성 불가능
	-> 순수 가상 함수를 가지고 있기 때문
	[C++](./Day5/12_virtual2.cpp)

- 추상자료형을 이용해 동적 할당된 객체를 참조할 때는 메모리 해제시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생
-> 상위 클래스의 소멸자를 가상(소멸자)으로 만들어 실제타입의 소멸자 호출을 유도
[C++](./Day5/13_virtual3.cpp)
<br>

#### 형변환
- 기본 자료형의 형변환으로 컴파일 타임에 타입을 변환
	```C++
	static_cast<바꾸려는 타입>(대상);
	```
	[C++](./Day5/14_static_cast.cpp)
	[C++](./Day5/15_static_cast2.cpp)
<br>

<hr>

### 6일차
#### dynamic cast
- 기본 클래스를 참조하는 lvalue를 파생된 클래스에 대한 참조로 변환
- 상속관계에서 안전하게 형변환을 지원
- 다운캐스팅 - 다형성을 위해 virtual 메서드가 꼭 있어야 함! 
	-> 부모 클래스에 virtual(가상)함수가 없다면 다운 캐스팅 불가능
[C++](./Day6/01_dynamic_cast.cpp)
[C++](./Day6/02_dynamic_cast2.cpp)
<br>

#### const vast
- const 선언을 해지
[C++](./Day6/03_const_cast.cpp)
[C++](./Day6/04_const_cast2.cpp)
<br>

#### reinterpret_cast
- 포인터 -> 포인터, 포인터 -> 변수, 변수 -> 포인터로 하는 주로 포인터 관련 연산자
[C++](./Day6/05_reinterpret.cpp)
<br>

#### temp_object
- 임시 객체 (이름 없는 객체) -> 다음 항에서 바로 사라짐
[C++](./Day6/06_tempobj.cpp)
[C++](./Day6/07_tempobj1.cpp)
[C++](./Day6/08_tempobj2.cpp)
<br>

#### 스마트 포인터
- 객체의 생명 주기를 객체에 맡김으로 프로그래머의 메모리 관리 부담을 줄여줌
- unique_ptr - 소유권을 독점적으로 관리하는 스마트 포인터(auto_ptr을 대체)
[C++](./Day6/09_unique_prt.cpp)

- shared_ptr - 참조 카운트를 통해 객체의 소유권을 공유한다.
- make_shared - 객체와 참조 카운트를 하나의 메모리 블록에 같이 할당시킴

- weak_ptr - 레퍼런스 카운트에 영향을 주지 않는 스마트 포인터, 순환참조를 방지한다.
<br>

#### STL(Standard Template Library)
- container : 객체를 저장하고 관리하는 자료 구조
- 컨테이너 종류
	1. 시퀀스 컨테이너 - 선형적으로 데이터 저장(순서), vector, list, queue
	2. 연관 컨테이너 - 일정한 규칙으로 저장, set, multiset, map, multimap
	3. 컨테이너 어댑터 - 변형
<br>

#### Vector
[C++](./STL/01_vector.cpp)

- push_back(n) - 마지막 원소 뒤에 n을 추가한다.
- v.insert(idx, val): idx번째 위치에 val을 넣는다.
- v.capacity(): 벡터에 할당된 메모리 크기를 리턴한다.
- v.pop_back(): 맨 마지막에 있는 원소 제거
- v.erase(): 찾는 원소를 제거
- v.front(): 첫 번째 원소를 리턴
- v.back(): 마지막 원소를 리턴
- iterator 타입 : iterator, begin(), end()


#### iterator
- vector<int>::iterator iter : 순방향 반복자 선언!
but, 이것을 생략하고 auto로 선언해도 사용 가능

- vector<int>::reverse_iterator rit : 역방향 반복자 선언 
but, 이것을 생략하고 auto로 선언해도 사용 가능
	- rbegin()은 마지막 주소, rend()은 처음 원소의 이전 주소
	