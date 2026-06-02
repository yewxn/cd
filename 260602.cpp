//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s = "example string";
//	char search = 'e';
//	int at = s.find(search, 0);
//	cout << "'e' is at " << at << "" << endl;
//	cout << s.rfind("e") << endl;
//	if (s.find("xyz") == string::npos)
//		cout << "없음" << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//void main()
//{
//	string s;
//	cin >> s;
//	
//	for (size_t len = s.length(); len > 0; len--) {
//		cout << s[len-1];
//	}
//	cout << endl;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void main()
{
	string a;
	char s;
	int r;
	cin >> a;

	while (1) {
	    cin >> s;
		size_t result = a.find(s);
		if (result == string::npos)
			cout << "없음";
		else cout << result+1 << "에 있음\n";
	    printf("1:계속 진행, 2:종료");
		scanf(" %d", &r);
		if (r == 2)
			break;
	}
	cout << endl;
}