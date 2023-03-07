#include<stdio.h> // printf(), scanf()를 사용하기 위한 헤더 파일 포함
#pragma warning(disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메세지 무시

int a, b, c; // 정수를 지정하는 변수 선언
int product ( int x, int y ); // 사용자 함수 원형

void main () {
	printf ( "Enter a number between 1 and 100: " );
	scanf_s ( "%d", &a );

	printf ( "Enter another between 1 and 100: " );
	scanf_s ( "%d", &b );
	c = product ( a, b );
	printf ( "%d * %d= %d \n", a, b, c );
}

int product ( int x, int y ) {
	return (x * y);
}