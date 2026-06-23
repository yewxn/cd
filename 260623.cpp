//#include <stdio.h>
//void main()
//{
//	int a[100];
//	for (int i = 0; i < 100; i++) {
//		a[i] = i + 1;
//	}
//
//    int* ptr = &a[50];
//
//	//for (ptr = &a[50]; (*ptr >= 51) && (*ptr <= 100); ptr++) {
//	//	printf("%d ", *ptr);
//	//}
//	//printf("\n");
//
//	//ptr -= 100;
//	//while (1) {
//	//	if ((*ptr >= 1) && (*ptr <= 49)) {
//	//		printf("%d ", *ptr);
//	//		ptr++;
//	//	}
//	//	else break;
//	//}
//
//	for (; *ptr != 50;ptr++) {
//		printf("%d ", *ptr);
//		if (*ptr == 100) {
//			ptr -= 100;
//			printf("\n");
//		}
//	}
//}

//#include <iostream>
//#include <iomanip> 
//using namespace std;
//
//int main()
//{
//	char arr[2][3] = {'1','2','3','4','5','6'};
//	int arr2[2][3] = { {'1','2','3'},{'4','5','6'} };
//	cout << setw(3) << sizeof(arr);
//	cout << setw(3) << sizeof(arr2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d", *p++);
//	}
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	const int M = 5;
//	const int N = 4;
//	int arr2d[M][N] = {
//		{662, 7, 4,74},
//		{8,396,299,95},
//		{66,73,86,0},
//		{116,26,586,42},
//		{84,7,41,11} };
//
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}

//¹®Á¦ 1
//#include <stdio.h>
//void main()
//{
//	const int M = 3;
//	const int N = 3;
//	int arr2d[M][N] = {
//		{2, 4, 6},
//		{8,10,12},
//		{14,16,18} };
//
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%2d ", arr2d[j][i]);
//		}
//		printf("\n");
//	}
//}

//#include <cstdio>
//void main()
//{
//	int rows = 3, cols = 4;
//	int** data = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new int[cols];
//		for (int j = 0; j < cols; j++) {
//			data[i][j] = 10 * i + j;
//		}
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++) {
//			printf("%3d", data[i][j]);
//		}
//		printf("\n");
//		delete data[i];
//	}
//	delete data;
//}

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
//	for (int i = 4; i >= 0; i--) {
//		for (int j = 4; j >= 0; j--) {
//			printf("%2d ", data[i][j]);
//		}
//		printf("\n");
//	}
//	delete data;
//}

//4
#include <cstdio>
void main()
{
	int r = 5, c = 5;
	int p = 1;

	int** data = new int* [r];
	for (int i = 0; i < r; i++)
	{
		data[i] = new int[c];
		for (int j = 0; j < c; j++) {
			data[i][j] = p++;
		}
	}
	int a2[25];
	for (int i=0 i<5; )
}