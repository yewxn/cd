//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//        scanf("%d", &arr[i]);
//	}
//
//	printf("\n\n");
//
//	for (int k = 0; k < 5; k++) 
//	{
//		printf("%d", arr[k]);
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//        scanf("%d", &arr[i]);
//    }
//	printf("\n");
//
//	int k;
//	int n;
//	int flag_while = 1;
//	while (flag_while)
//	{
//		printf("¼ýÀÚ>>");
//		scanf("%d", &k);
//		for (n = 0; n < 10; n++)
//		{
//			if (k == arr[n]) {
//				printf("exist");
//				flag_while = 0;
//				break;
//			}
//		}
//		if (flag_while == 0) {
//			break;
//		}
//	}
//}
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int one, two;
//	int max = 0;
//	cin >> one >> two;
//
//	if (one > two) max = one;
//	else           max = two;
//	cout << "max = " << max << endl;
//}
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) {
//		if (one > three) max = one;
//		else             max = three;
//	}
//	else {
//		if (one > three) max = two;
//		else             max = three;
//	}
//	cout << "max = " << max << endl;
//}