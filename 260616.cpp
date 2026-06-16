//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <math.h>
//using namespace std;
//void main()
//{
//	string s;
//	cin >> s;
//	//int  n = stoi(s);
//	cout << "16 -> " << s << endl;
//	int n = 0, t = 0;
//	size_t len = s.length();
//	int result = 0;
//	for (int k = 1; k <= len; k++) {
//		int tmp = 0;
//		if ((s[len - k] >= '0') && (s[len - k] <= '9')) {
//			tmp = (s[len - k] - '0');
//		}
//		else if ((s[len - k] >= 'A') && (s[len - k] <= 'F')) {
//			tmp = (s[len - k] - 'A' + 10);
//		}
//		double n = pow(16, k - 1) * tmp;
//		result = result + n;
//	}
//	printf("\n10 -> %d", result);
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int num = 100;
//	int *pNum = &num;
//
//	cout << "num = " << num << endl;
//	cout << "&num = " << &num << endl;
//	cout << "*pNum = " << *pNum << endl;
//	cout << "pNum = " << pNum << endl;
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int value = 50;
//	int* ptr = &value;
//
//	cout << "변경 전 value: " << value << endl;
//
//	*ptr = 100;
//	cout << "변경 후 value: " << value << endl;
//}

//#include <stdio.h>
//
//void main()
//{
//	char a = 'A';
//	char *pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC));
//}

#include <stdio.h>
void main()
{
	int* numptr;
	int num1 = 10;
	int num2 = 20;

	*numptr = num1;
	printf("%d\n", *numptr);

	*numptr = num2;
	printf("%s\n", *numptr);
}

//#include <iostream>
//void main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//}

//#include <iostream>
//void main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//	printf("두 포인터 간의 차는 %d입니다\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//}