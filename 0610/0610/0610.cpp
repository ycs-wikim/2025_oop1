﻿// 0610.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Ccondes.h"

/// 생성자와 소멸자
///     선언할 때 권한을 반드시 public으로 선언해야 한다.
/// 생성자 : 클래스가 인스턴스화(객체화) 될 때, 자동으로 호출되는 함수
///     선언 : 반환값을 표시하지 않는다. 클래스 이름과 동일한 이름을 사용
///     생성자는 다수 개를 만들고 사용할 수 있다.
///     ==> 생성자는 인수를 받아서 객체를 생성할 수 있도록 구성
///     용도 : 초기화, 메모리 할당, 각종 연결 등등
/// 
/// 소멸자 : 메모리가 해제될 때, 자동으로 호출되는 함수
///     선언 : 반환값을 표시하지 않는다. 클래스 이름과 동일한 이름을 사용
///             함수 이름 앞에 ~를 붙인다.
///     소멸자는 반드시 한개만 만들 수 있다!!!
///     ==> 소멸자는 인수를 받을 수 없다!
///     용도 : 메모리 해제, 연결 해제 등등



int main()
{
    int x = 3;

    int y1 = x;
    int y(x);
    /// 객체지향 프로그램의 최종적인 목표 : 모든 것을 객체로 처리한다.
    ///     ==> 자료구조 또한 하나의 객체로 처리된다.
    /// 복사 생성자 : 이미 존재하는 동일한 객체의 정보를 이용하여
    ///             새로운 객체를 초기화하고 생성하는 방법
    ///     선언 : 클래스이름( const 클래스이름& obj )
    ///     CTest 클래스의 복사 생성자 예 : CTest( const CTest& obj )


    Ccondes cd;
    Ccondes ci(3);
    Ccondes cc('t');
    Ccondes cii(3, 5);
    //Ccondes ccc(3, 3, 3);     /// 인수가 다르면 객체 생성 불가

    Ccondes ccc = cd + ci;
    //Ccondes cccc = 1 + cd;
    Ccondes ccccc = cd + 1;

    /// 복사 생성자로 새로운 객체 생성
    Ccondes newC(cc);

    printf("m_value : %d\n", cii.m_value);
    printf("result : %d\n", cii + 77);

    std::cout << "Hello World!\n";
}
