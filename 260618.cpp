//#include <stdio.h>
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}

//#include <stdio.h>
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("%d의 위치 - %d의 위치",
//		*ptrFibo4, *ptrFibo1);
//	printf(" >> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d", ptrFibo[1]);
//	printf("%d", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int arr[5] = { 0 };
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	int* ptr;
//	ptr = arr;
//
//	ptr += 2;
//	printf("\n-> %d", *ptr);
//}

//#include <stdio.h>
//int main()
//{
//	int number[2] = { 1,2 };
//	void* p = number;
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//
//	pt--;
//	*pt++ += 20;
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	char str[] = "도구는 사람을 증폭시킨다. AI도 도구다.";
//	char* ptr = &str[1];
//
//	printf("%s\n\n", str);
//
//	printf("%s\n\n", ptr);
//	str[15] = 'a';
//	str[23] = 'b';
//	str[25] = 'c';
//	printf("%s\n\n", str);
//}

//#include <stdio.h>
//void main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA = &numArr[2];
//	void* ptr = numArr;
//
//	printf("%d\n", *(numptrA - 1));
//
//	printf("%d\n", *((int*)ptr + 4));
//}

//#include <stdio.h>
//void main()
//{
//	int a[100];
//	int* ptr = &a[99];
//
//	for (int i = 0; i < 100; i++) {
//		a[i] = i + 1;
//	}
//	for (int i = 99; i >= 0; i--) {
//        printf("%d ", *ptr);
//		ptr--;
//	}
//}

#include <stdio.h>
void main()
{
	int a[10];
	int* ptr = &a[4];

	for (int i = 0; i < 10; i++) {
		a[i] = i + 1;
	}

	//int k = 50;
	while (1) {
		*ptr++;
		if ((*ptr >= 5) && (*ptr <= 10))
			printf("%d ", *ptr);
		else if ((*ptr >= 1) && (*ptr <= 4)) {
			printf("%d ", *ptr);
		}
		else break;
	}


	//for(ptr=a; *ptr<=49; ptr++) {

	//}
}