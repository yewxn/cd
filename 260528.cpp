//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//void main()
//{
//	srand((unsigned int)time(NULL));
//
//	int n;
//	cin >> n;
//
//	int *buff = new int[n];
//	for (int i = 0; i < n; i++) {
//		buff[i] = rand() % 5 + 5;
//	}
//
//	cout << "new : ";
//	for (int i = 0; i < n; i++) {
//		cout << buff[i] << " ";
//	}
//	cout << endl;
//
//	delete buff;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstdlib>
//#include <ctime>
//
//void main()
//{
//	int n = 0;
//	int *buff = new int[n];
//	srand((unsigned int)time(NULL));
//	scanf("%d", &n);
//	
//	for (int i = 0; i < n; i++) {
//		buff[i] = rand() % 101;
//	}
//
//	for (int i = 0; i < n; i++) {
//		printf("%d번째 학생(%d) - ", i+1, buff[i]);
//		printf("%c", 4 - buff[i] / 20 + 'A');
//		printf("\n");
//	}
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//    string s(10, '_');
//    cout << s << endl;
//    cout << s.length() << endl;
//    cout << s.empty() << endl;
//
//    s.clear();
//    cout << s.empty() << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "Hello, World!";
//	cout << s.substr(7, 5) << endl;
//
//	s.append(" :)");
//	s += "\n hi";
//	cout << s << endl;
//	s.insert(5, "??");
//	cout << s << endl;
//	printf("%s", s.c_str());
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "Hello!";
//	cout << s[0]      << endl;
//	cout << s.at(1)   << endl;
//	cout << s.front() << endl;
//	cout << s.back()  << endl;
//}
#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s = "example string";
	char search = 'e';
	int at = s.find(search, 0);
	cout << "'e' is at" << at << "" << endl;
	cout << s.rfind("e") << endl;
	if (s.find("xyz") == string::npos)
		cout << "없음" << endl;
}