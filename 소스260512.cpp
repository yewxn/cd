//#include <iostream>
//using namespace std;
//
//
//void main()
//{
//	int number, count;
//	cin >> number >> count;
//
//	cout << "new : " << number << " " << count << endl;
//}
//#include <iostream>
//#include <bitset>
//using namespace std;
//void main()
//{
//	char a = 77;  // 01001101
//	char b = 8;   // 00001000
//	cout << bitset<8>(a) << "->" << (int)a << endl;
//	cout << bitset<8>(b) << "->" << (int)b << endl;
//
//	cout << "AND : " << bitset<8>(a & b) << endl;
//	cout << "OR  : " << bitset<8>(a | b) << endl;
//	cout << "XOR : " << bitset<8>(a ^ b) << endl;
//	cout << "NOT : " << bitset<8>(~a) << endl;
//
//	cout << "& >^: " << bitset<8>(a ^ a & b) << endl;
//}
//#include <iostream>
//#include <bitset>
//using namespace std;
//
//void main()
//{
//	char a = -1;
//	char b = a >> 5;
//	// 1111 1111 => 1111 1111
//	char c = 127 >> 1;
//	// 0111 1111 => 0011 1111
//
//	printf("%x (%d)\n", a, a);
//	printf("%x (%d)\n", a, b);
//	printf("%x (%d)\n", 127, c);
//
//	char d = 1 << 1;
//	char e = 1 << 4;
//	char f = 1 << 7;
//	printf("%x (%d)\n", d, d);
//	printf("%x (%d)\n", e, e);
//	printf("%x (%d)\n", f, f); 
//}
//#include <stdio.h>
//void main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}
//#include <stdio.h>
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}
//#include <stdio.h>
//void main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num의 안에 들어있는");
//	printf(" 1번째 숫자는? %d\n", num[1]);
//}
#include <stdio.h>
void main()
{
	char alpah[4] = { 'a', 'b', 'c', 'd' };
}
#include <iostream>
void main()
{
	int num[3] = { 3,6,9 };
	std::cout << "num의 안에 들어있는";
	std::cout << " 1번째 숫자는? " << num[1] << "\n" ;
}