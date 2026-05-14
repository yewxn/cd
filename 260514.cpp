//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++){
//		cin >> arr[i];
//		cout << arr[i] << endl;
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//
//	cin >> arr[0];
//	cin >> arr[1];
//	cin >> arr[2];
//	cin >> arr[3];
//	cin >> arr[4];
//	cout << "\n\n";
//    cout << arr[0];
//    cout << arr[1];
//    cout << arr[2];
//    cout << arr[3];
//    cout << arr[4] << endl;
//
//	return 0;
//}
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int arr[5];
    int i = 0;

	scanf("%d", arr[i]);
	i++;
	scanf("%d", arr[i]);
	i++;
	scanf("%d", arr[i]);
	i++;
	scanf("%d", arr[i]);
	i++;
	scanf("%d", arr[i]);
	
	i = 0;
	printf("\n\n");
	printf("%d", arr[i]);
	i++;
	printf("%d", arr[i]);
	i++;
	printf("%d", arr[i]); 
	i++;
	printf("%d", arr[i]);
	i++;
	printf("%d", arr[i]);

	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int arr[5];
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d",arr[i]);
//		printf("")
//	}
//}