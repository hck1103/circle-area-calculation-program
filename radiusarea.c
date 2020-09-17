/*  원의 넓이(면적)을 구하는 프로그램
	개발 및 문의: hck1103@daelim.ac.kr
	현재 버전: 1.0
	본 프로그램은 OpenSource로 누구나 사용이 가능합니다.
	단, 수정은 가능하나 개발자의 허가없는 배포는 금지합니다.
*/

#include <stdio.h>
#define pi 3.1415926535																	//기호상수 값 지정;

int main(void) {
	float radius = 0;																	//반지름이 입력될 변수 선언 및 변수 초기화
	float area = 0;																		//원 넓이(면적) 구한 후 저장될 변수

	printf("원의 넓이(면적)를 구하는 프로그램(v1.0)\n\n");								//프로그램 소갯말

	printf("번지름을 입력해주세요...\n반지름 입력: ");									//반지름 입력하라는 멘트
	scanf_s("%f", &radius);																//반지름 입력

	area = radius * radius * pi;														//넓이(면적)계산 <반지름x반지름x3.14>

	printf("원의 반지름이 %f 일 때, 원의 넓이(면적)은 %f입니다.\n", radius, area);		//계산된 결과값 출력

	printf("\n\n프로그램 개발 및 문의: hck1103@daelim.ac.kr\n");						//하단 Credit 표시
	return 0;																			//프로그램 종료
}