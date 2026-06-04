//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string a;
//	char s;
//	int r;
//	cin >> a;
//
//	while (1) {
//		cin >> s;
//		size_t result = a.find(s);
//		if (result == string::npos)
//			cout << "없음";
//		else cout << result + 1 << "번째에 있음\n";
//		printf("1:계속 진행, 2:종료 - ");
//		scanf("%d", &r);
//		if (r == 2)
//			break;
//	}
//	cout << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s;
//	cin >> s;
//	cout << s.substr(7, 5) << endl;
//	cout << s << endl;
//
//	s.insert(5, "??");
//	cout << s << endl;
//}
// 
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "Hello, World!";
//	s.replace(7, 5, "C++");
//	cout << s << endl;
//	cout << s << endl;
//}
// 
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "apple";
//	cout << s.compare("Apple") << endl;
//	cout << s.compare("banana") << endl;
//	cout << s.compare("aaa") << endl;
//}
// 
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "42";
//	int n = stoi(s);
//	double d = stod("3.14");
//	string t = to_string(n * 2);
//	cout << n << " " << d << " " << t << endl;
//}
// 
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "apple,banana,cherry";
//	string delim = ",";
//	size_t pos = 0;
//	while ((pos - s.find(delim)) != string::npos) {
//		cout << s.substr(0, pos) << " ";
//		s.erase(0, pos + delim.length());
//	}
//}
// 
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
	int  n = stoi(s);
	printf("16 -> ");
	while (1) {
		if (n <= 9)
			printf("%d", n);
		else if ((n > 9) && (n <= 15))
			printf("%c",'A' + n - 10);

	}

	printf("16 -> %x", s);
	printf("\n10 -> %d", s);
}