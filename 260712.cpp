/* 1
#include <iostream>
using namespace std;

char getA() { 
	return 'A'; 
}
char getP() {
	return 'P';
}
char getL() {
	return 'L';
}
char getE() { 
	return 'E'; 
}
int main()
{
	cout << "사과를 영어로?" << endl;
	cout << getA() << getP() << getP() << getL() << getE() << endl;
	return 0;
}*/

// 2
//#include <iostream>
//using namespace std;
//
//int time(int start, int end)
//{
//	int result = 1;
//	for (int i = 1; i <= end; i++)
//	{
//		result *= start;
//		start++;
//	}
//	return result;
//}
//void main()
//{
//	cout << time(1, 8) << endl;
//}

//#include <iostream>
//using namespace std;
//
//int square(int n) { return n * n; }
//int main()
//{
//	cout << square(5) << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//string printMenu(string name) { return name; }
//string printMenu(string name, int ml) {
//	return name + " (우유" + to_string(ml) + "ml)";
//}
//void main()
//{
//	string menus[2] = { printMenu("아메리카노"), printMenu("라떼", 50) };
//	for (int i = 0; i < 2; i++)
//		cout << menus[i] << endl;
//}

//#include <iostream>
//using namespace std;
//
//int square(int n);
//int main()
//{
//	cout << square(5) << endl;
//}
//int square(int n) { return n * n; }

//#include <iostream>
//#include <string>
//using namespace std;
//
//string printMenu(string name);
//string printMenu(string name, int ml);
//
//void main()
//{
//	string menus[2] = {printMenu("아메리카노"), printMenu("라떼", 50)};
//	for (int i = 0; i < 2; i++)
// 	cout << menus[i] << endl;
//}
//
//string printMenu(string name) { return name; }
//string printMenu(string name, int ml) {	return name + " (우유" + to_string(ml) + "ml)"; }

//#include <iostream>
//using namespace std;
//char rightType(char type) {
//	if (type != 'A' && type != 'B') 
//	{
//		cout << "주문할 수 없는 햄버거입니다.\n";
//		return 'C';
//	}
//	return type;
//}
//void makeHamburger(char type, int count) {
//	if (type == 'A')
//		cout << "A타입 햄버거 ";
//	else cout << "B타입 햄버거 ";
//	cout << count << "개 나왔습니다." << endl;
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	cout << "어느타입 햄버거를 주문하시겠습니까? (A or B)"<< endl;
//	cin >> ham_type;
//	if (rightType(ham_type) == 'C')
//		return -1;
//	cout << "햄버거 몇 개 주문하시겠습니까?" << endl;
//	cin >> ham_count;
//	makeHamburger(ham_type, ham_count);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//void main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	cout << "결과 : " << data1 << endl;
//}

// 1
//#include <iostream>
//using namespace std;
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//void main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	cout << "결과 : " << data1 << endl;
//}

// vector (선생님)
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int main()
//{
//    int a = 10, & b = a, c = a;
//
//    vector<int> v = { 2,1,3,54,2,4,56,7 };
//    v.push_back(177);
//    v.insert(v.begin(), 54);
//
//    for (int i = 0; i < v.size(); i++)  cout << v[i] << ' ';  cout << endl;
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)  cout << *it << ' ';  cout << endl;
//    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)  cout << *it << ' ';  cout << endl;
//    for (auto it = v.rbegin(); it != v.rend(); it++)  cout << *it << ' ';  cout << endl;
//
//    for (auto& k : v) cout << k << ' '; cout << endl;
//
//    int n; cin >> n;
//    vector<int> kk(n);
//    for (auto& k : kk) cin >> k;
//}

// vector 예제
#include <iostream>
#include <vector>
using namespace std;
//
//void main()
//{
//	vector<int> v;
//	for (int i = 0; i < 5; i++)
//		v.push_back(i);
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//
//	cout << v[2] << endl;
//	cout << v.front() << endl;
//	cout << v.back() << endl;
//}

//int main()
//{
//	vector<int> v1;
//	for (int i = 1; i <= 5; i++)
//		v1.push_back(i);
//
//	// Iterator로 Vector의 아이템을 출력
//    // begin() : 첫번째 위치의 Iterator를 리턴
//    // v1.end() : 마지막 아이템 다음 위치의 Iterator를 리턴
//	for (auto i = v1.begin(); i != v1.end(); i++)
//		cout << *i << " ";
//
//	// 반대 방향으로 아이템을 출력
//    // rbegin(), rend()는 역순(reverse)의 Iterator를 리턴
//	cout << "\n";
//	for (auto ir = v1.rbegin(); ir != v1.rend(); ir++)
//		cout << *ir << " ";
//
//	// 배열처럼 Vector[index] 으로 아이템 출력
//	cout << "\n";
//	for (int i = 0; i < v1.size(); i++)
//		cout << v1[i] << " ";
//
//	// Vector.at(index)로 아이템 출력
//	cout << "\n";
//	for (int i = 0; i < v1.size(); i++)
//		cout << v1.at(i) << " ";
//
//	return 0;
//}