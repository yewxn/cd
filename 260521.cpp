//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//	cout << "max = " << max << endl;
//}
// ¹®Á¦ 4
//#include <stdio.h>
//
//void main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int max = a[0], min = a[0];
//	int hap = 0;
//
//	for (int i = 1; i < 5; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("ÃÖ´ñ°ª => %d", max);
//
//	for (int k = 1; k < 5; k++) {
//		if (min > a[k])
//			min = a[k];
//	}
//	printf("\nÃÖ¼Ú°ª => %d", min);
//
//	for (int n = 0; n < 5; n++) {
//		hap = hap + a[n];
//	}
//	printf("\n¿ø¼ÒÀÇ ÃÑÇÕ => %d", hap);
//
//	int p = hap / 5;
//	printf("\nÆò±Õ => %d", p);
//}
// ¹®Á¦ 5
//#include <stdio.h>
//
//void main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int g_1 = 0, g_2 = 0, g_3 = 0, g_4 = 0, g_5 = 0, g_6 = 0;
//
//	for (int i = 0; i < 10; i++) {
//		if (a[i] == 1)
//			g_1 = g_1 + a[i];
//	}
//	for (int q = 0; q < 10; q++) {
//		if (a[q] == 2)
//			g_2 = g_2 + 1;
//	}
//	for (int w = 0; w < 10; w++) {
//		if (a[w] == 3)
//			g_3 = g_3 + 1;
//	}
//	for (int e = 0; e < 10; e++) {
//		if (a[e] == 4)
//			g_4 = g_4 + 1;
//	}
//	for (int r = 0; r < 10; r++) {
//		if (a[r] == 5)
//			g_5 = g_5 + 1;
//	}
//	for (int t = 0; t < 10; t++) {
//		if (a[t] == 6)
//			g_6 = g_6 + 1;
//	}
//
//	int b[6] = { g_1,g_2,g_3,g_4,g_5,g_6 };
//	
//	printf("È½¼ö => %d %d %d %d %d %d", b[0], b[1], b[2], b[3], b[4], b[5]);
//}
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	cout << "left = " << left << ", ";
//	cout << "right = " << right << endl;
//}
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int left = 3, right = 5, temp;
//	temp = left;
//	left = right;
//	right = temp;
//	cout << "left = " << left << ", ";
//	cout << "right = " << right << endl;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//
//	cout << "num[0] = " << num[0] << ", ";
//	cout << "num[1] = " << num[1] << endl;
//}
// ¹®Á¦ 6
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[4] = { 4,3,1,2 };
//	int swap;
//	swap = a[0];
//	a[0] = a[2];
//	a[2] = a[1];
//	a[1] = a[3];
//	a[3] = swap;
//
//	cout << "a => " << a[0] << a[1] << a[2] << a[3] << endl;
//}
// ¹®Á¦ 7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[4];
	for (int i = 0; i < 3; i++) {
		scanf("%d", a[i]);
	}

}