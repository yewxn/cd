//2
//#include <cstdio>
//void main()
//{
//	int r = 5, c = 5;
//	int p = 1;
//
//	int** data = new int* [r];
//	for (int i = 0; i < r; i++)
//	{
//		data[i] = new int[c];
//		for (int j = 0; j < c; j++) {
//			data[i][j] = p++;
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%2d ", data[i][j]);
//		}
//		printf("\n");
//	}
//	delete data;
//}

//3
//#include <cstdio>
//void main()
//{
//	const int r = 5;
//	int p = 1;
//	int data[r][r];
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < r; j++) {
//			data[i][j] = p++;
//		}
//	}
//
//	for (int i = r-1; i >= 0; i--) {
//		for (int j = r-1; j >= 0; j--) {
//			printf("%2d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//4
//#include <cstdio>
//void main()
//{
//	int p = 1;
//    int a[5][5];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++) {
//			a[i][j] = p++;
//		}
//	}
//	int h = 0;
//	int a2[25];
//	for (int i = 0; i < 5; i++) {
//		for (int k = 0; k < 5; k++) {
//			a2[h++] = a[i][k];
//		}
//	}
//
//	for (int i = 0; i < 25; i++) {
//		printf("%2d ", a2[i]);
//	}
//}

//5
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//void main()
//{
//	int n = 0;
//	cin >> n;
//	int* data = new int[n];
//	for (int h = 0; h < n; h++) {
//		scanf("%d", &data[h]);
//	}
//
//	for (int h = 0; h < n; h++) {
//		for (int k = 1; k <= data[h]; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	delete data;
//}

//6
//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstdlib>
//#include <time.h>
//void main()
//{
//	int n = 0;
//	int k = 0;
//	srand(time(NULL));
//
//	scanf("%d", &n);
//
//	int** a = new int* [n];
//	for (int i = 0; i < n; i++) {
//		a[i] = new int[n];
//		for (int j = 0; j < n; j++) {
//			a[i][j] = rand() % 900 + 100;
//			printf("%3d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] % 2 == 1)
//				printf("* ");
//			else printf(". ");
//		}
//		printf("\n");
//		delete a[i];
//	}
//	delete a;
//}

//7
#include <cstdio>
void main()
{
	int a[5][5];
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = 0;
		}
	}

	for(i=0; i)
}