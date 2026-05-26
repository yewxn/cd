// 문제 6
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[4] = { 4,3,1,2 };
//	int swap;
//	swap = a[0];
//	a[0] = a[2];
//	a[2] = swap;
//	swap = a[3];
//	a[3] = a[2];
//	a[2] = swap;
//	swap = a[1];
//	a[1] = a[2];
//	a[2] = swap;
//
//	cout << "a => ";
//	for (int i = 0; i < 4; i++) {
//        cout << a[i] ;
//	}
//	cout << endl;
//	
//}
// 문제 7
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a[4];
//	int swap = 0;
//	for (int i = 0; i < 4; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	for (int h = 3; h >= 1; h--)
//	{
//		for (int k = 0; k < h; k++) {
//			if (a[k] > a[k + 1])
//			{
//				swap = a[k];
//				a[k] = a[k + 1];
//				a[k + 1] = swap;
//			}
//		}
//	}
//
//
//	/*for (int k = 0; k < 3; k++) {
//		if (a[k] > a[k + 1])
//		{
//			swap = a[k];
//			a[k] = a[k + 1];
//			a[k + 1] = swap;
//		}
//	}
//
//	for (int k = 0; k < 2; k++) {
//		if (a[k] > a[k + 1])
//		{
//			swap = a[k];
//			a[k] = a[k + 1];
//			a[k + 1] = swap;
//		}
//	}
//
//	for (int k = 0; k < 1; k++) {
//		if (a[k] > a[k + 1])
//		{
//			swap = a[k];
//			a[k] = a[k + 1];
//			a[k + 1] = swap;
//		}*/
//
//	/*for (int k = 0; k < 4; k++) {
//		if (a[k] < a[k + 1]) a[k] = a[k];
//		else {
//			swap = a[k];
//			a[k] = a[k + 1];
//			a[k + 1] = swap;
//
//		}
//	}*/
//
//	printf("\n");
//	for (int f = 0; f <= 3; f++) {
//        printf("%d ", a[f]);
//	}
//	
//}
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int *buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//
//	cout << "new : " << buff[0] << " " << buff[1] << endl;
//	delete buff;
//}
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int n;
//	cin >> n;
//	int *buff = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> buff[i];
//	for (int i = 0; i < n; i++)
//		cout << buff[i] << " ";
//	delete buff;
//}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main()
{
	srand((unsigned int)time(NULL));

	int n;
	cin >> n;

	int* buff = new int[n];
	for (int i = 0; i < n; i++) {

	}
}