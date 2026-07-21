//#include <iostream>
//using namespace std;
//
//int add(int n)
//{
//	if (n == 1) return 1;
//	return add(n - 1) + n;
//}
//void main()
//{
//	int n;
//	cin >> n;
//	cout << add(n) << endl;
//}

//#include <cstdio>
//struct BYTE
//{
//	char one;
//	char two;
//};
//void main()
//{
//	BYTE one;
//	one.one = 10;
//	one.two = 20;
//	printf("%d %d", one.one, one.two);
//}

//#include <cstdio>
//#include <string>
//using namespace std;
//struct student
//{
//	int id;
//	string name;
//	float aver;
//
//};
//void main()
//{
//	student s = { 1, "이샘", 90.5 };
//	printf("아이디: %d\n", s.id);
//	printf("이름: %s\n", s.name.c_str());
//	printf("백분율: %lf\n", s.aver);
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//struct GUN
//{
//	string name;
//	float bullet_type;
//	bool scope;
//};
//void main()
//{
//	GUN M416 = { "M416", 5.56, true };
//	cout << "화기명 : " << M416.name << endl;
//	printf("탄 종류 : %.2f\n", M416.bullet_type);
//	cout << "스코프 유무 : " << (M416.scope ? "true" : "false") << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//struct human
//{
//	string name;
//	int height;
//	int weight;
//};
//void main()
//{
//	human human;
//	cin >> human.name >> human.height >> human.weight;
//	printf("이름 : %s\n키 : %dcm\n몸무게 : %dkg\n", human.name.c_str(), human.height, human.weight);
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//struct BOOK
//{
//	string name;
//};
//struct LIB
//{
//	BOOK books[4];
//};
// 2
//void main()
//{
//	LIB lib;
//	for (int i = 0; i < 4; i++) {
//		BOOK book;
//		cin >> book.name;
//		lib.books[i] = book;
//	}
//	cout << "주문했습니다. \n목록 : ";
//	for (int i = 0; i < 4; i++)
//		printf("%s, ", lib.books[i].name.c_str());
//}
// 3
//void order(LIB& lib);
//void list(LIB lib);
//void main()
//{
//	LIB lib;
//	order(lib);
//	list(lib);
//}
//void order(LIB& lib)
//{
//	for (int i = 0; i < 4; i++) {
//		BOOK book;
//		cin >> book.name;
//		lib.books[i] = book;
//		//lib->books[i] = book; 
//		//포인터 사용할 경우
//	}
//}
//void list(LIB lib)
//{
//	cout << "주문했습니다. \n목록 : ";
//	for (int i = 0; i <= 2; i++)
//		printf("%s, ", lib.books[i].name.c_str());
//	printf("%s", lib.books [3] .name.c_str());
//}

#include <iostream>
using namespace std;
//void main()
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	cout << "값 : " << pt1 << endl;
//}

short getDefaultData()
{
	short pt1;
	cout << "입력>>";
	cin >> pt1;
	return pt1;
}
void main()
{
	short pt;
	pt = getDefaultData();
	cout << "값 : " << pt << endl;
}
//32767