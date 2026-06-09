//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "This is a sample string";
//	cout << s << endl;
//	cout << s.replace(10, 6, "useful") << endl;
//}
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void main()
//{//"1E" -> 30
//
//	int s;
//	scanf("%x", &s);
////	int  n = stoi(s);
//	printf("16 -> %x", s);
//	printf("\n10 -> %d", s);
//}
{
	string s;
	cin >> s;
	//int  n = stoi(s);
	cout << "16 -> " << s << endl;
    int n = 0, t=0;
	size_t len = s.length();
	int result = 0;
	for (int k = 1; k <= len; k++) {
		
		if ((s[len - k] >= '0') && (s[len - k] <= '9'))
			n = s[len - k] - '0'
		else if ((s[len - k] >= 'A') && (s[len - k] <= 'F'))
			n = s[len - k] - 'A' + 10;
	result = result+ n ;
	}
	printf("\n10 -> %d", result);

	//while (1) {
	//	if (n <= 9)
	//		printf("%d", n);
	//	else if ((n > 9) && (n <= 15))
	//		printf("%c", 'A' + n - 10);
	//}
	//printf("16 -> %x", s);
	//printf("\n10 -> %d", s);
}