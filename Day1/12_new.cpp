#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
	동적 할당받을 크기를 입력받고 원소를 저장하여 출력하시오
	-> C 스타일
*/
int main() {

	int size;
	int* p;
	printf("크기 입력 > ");
	scanf_s("%d", &size);

	p = (int*)malloc(size * sizeof(int));

	//printf("%d개의 원소 입력 >", size);
	for (int i = 0; i < size; i++) {
		printf("숫자 %d: ", i + 1);
		scanf_s("%d", &p[i]);  // Input each number into the array
	}

	// Print the entered values
	printf("입력된 값들: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");

	free(p);

	return 0;
}