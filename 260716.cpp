//#include <iostream>
//using namespace std;

//void swap(int *arr)
//{
//	int k = arr[0];
//	arr[0] = arr[1];
//	arr[1] = k;
//}
//
//void main()
//{
//	int a[2] = { 1,2 };
//	swap(a);
//
//	cout << a[0] << " " << a[1] << endl;
//}

//void printBoard(int board[][3], int rows)
//{
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < 3; j++)
//			cout << board[i][j] << " ";
//		cout << endl;
//	}
//}
//
//void main() {
//	int board[3][3] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	printBoard(board, 3);
//}

//#include <iostream>
//using namespace std;
//
//int addnumber(int arr[][3])
//{
//    int result = 0;
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++)
//            result += arr[i][j];
//    }
//    return result;
//}
//void main()
//{
//    int arr[3][3];
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++)
//           cin >> arr[i][j]; 
//    }
//    cout << addnumber(arr) << endl;
//}

//#include <iostream>
//using namespace std;
//
//void calculate(int a[][3])
//{
//	int rows[3] = {};
//	int cols[3] = {};
//	for (int i = 0; i < 3; i++){
//		for (int j = 0; j < 3; j++)
//			rows[i] += a[i][j];
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++)
//			cols[i] += a[j][i];
//	}
//	printf("행 합계 : ");
//	for (int i = 0; i < 3; i++)
//		printf("%2d ", rows[i]);
//	printf("\n");
//	printf("열 합계 : ");
//	for (int i = 0; i < 3; i++)
//		printf("%2d ", cols[i]);
//}
//void main()
//{
//	int arr[3][3];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++)
//			cin >> arr[i][j];
//	}
//	calculate(arr);
//}

//#include <iostream>
//using namespace std;
//
//int minus_(int n) {
//	if (n <= 1) return -1;
//	return minus_(n - 1) - 1;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << minus_(n);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printNumber(n - 1);
//	cout << n;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	printNumber(n);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int fibonacci(int n)
//{
//	cout << n;
//	if (n <= 2) return 1;
//
//	cout << n << endl;
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << endl << fibonacci(n) << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

int add(int n)
{
    int k = 1;
    if (k <= n) return add(k - 1) + add(k);
}