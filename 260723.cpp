//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" 입력할 개수는 ? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d 번째 숫자 : ", i + 1);
//		scanf("%d", p + i);
//	}
//
//	for (i = 0; i < cnt; i++)
//		hap = hap + *(p + 1);
//
//	printf("입력 숫자 합 ==> %d\n", hap);
//
//	free(p);
//}

//#include <cstdio>
//#include <malloc.h>
//
//void main()
//{
//	int* p, * s;
//	int i, j;
//
//	printf("malloc() 함수 사용\n");
//	p = (int*)malloc(sizeof(int) * 3);
//	for (i = 0; i < 3; i++)
//		printf("할당된 곳의 초깃값 p[%d] ==> %d\n", i, p[i]);
//
//	free(p);
//
//	printf("\ncalloc() 함수 사용\n");
//	s = (int*)calloc(sizeof(int), 3);
//
//	for (j = 0; j < 3; j++)
//		printf("할당된 곳의 초깃값 s[%d] ==> %d\n", j, s[j]);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt = 0;
//	int data = 0;
//
//	p = (int*)malloc(sizeof(int) * 1);
//	printf(" 1 번째 숫자 : ");
//	scanf("%d", &p[0]);
//	cnt++;
//
//	for (i = 2; ; i++)
//	{
//		printf(" %d 번째 숫자 : ", i);
//		scanf("%d", data);
//
//		if (data != 0)
//			p = (int*)realloc(p, sizeof(int) * i);
//		else break;
//
//		p[i + 1] = data;
//		cnt++;
//	}
//
//	for (i = 0; i < cnt; i++)
//		hap = hap + p[i];
//}

//#include <iostream>
//using namespace std;
//
//short getDefaultData()
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	return pt1;
//}
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	cout << "값 : " << pt << endl;
//}
//
//#include <iostream>
//using namespace std;
//
//short getDefaultData();
//void printData(short pt2);
//short plus_(short pt3);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plus_(pt);
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	cout << "입력>>";
//	cin >> pt1;
//	return pt1;
//}
//void printData(short pt2)
//{
//	cout << "값 : " << pt2 << endl;
//}
//short plus_(short pt3)
//{
//	pt3 += 5;
//	return pt3;
//}


//#include <iostream>
//using namespace std;
//
//struct POINT {
//	short x, y;
//};
//
//POINT getDefaultData();
//void printData(POINT pt2);
//POINT plus_(POINT pt3);
//
//void main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plus_(pt);
//	printData(pt);
//}
//
//POINT getDefaultData()
//{
//	POINT pt1;
//	cout << "2개 입력>>";
//	cin >> pt1.x;
//	cin >> pt1.y;
//	return pt1;
//}
//void printData(POINT pt2)
//{
//	cout << "값 : " << pt2.x << ", " << pt2.y << endl;
//}
//POINT plus_(POINT pt3)
//{
//	pt3.x += 5;
//	pt3.y += 5;
//	return pt3;
//}

//#include <IOstream>
//using namespace std;
//
//struct Point {
//	short x, y;
//};
//Point makePoint(short x, short y) {
//	Point p = { x,y };
//	return p;
//}
//void main()
//{
//	Point p = makePoint(4, 9);
//	cout << p.x << " " << p.y << endl;
//}

//#include <cstdio>
//#include <string.h>
//struct MYDATA { int a; char b[25]; };
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct MYDATA data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'A';
//	printf("%d - %s\n", data.a, data.b);
//}

#include <iostream>
#include <cstring>
using namespace std;

struct GM {
	int no;
	string name;
	string part;
	int salary;
};
struct COMPANY {
	GM gms[5];
	int gmCount;
};
void HireGM_once(COMPANY gc);

void main()
{
	cout << "게임을 출시해보자!" << endl;
	COMPANY gameCo;

	cout << "먼저 GM부터 고용할까?" << endl;
	while (1) {
		gameCo = HireGM_once(gameCo);
		cout << "더 고용할까?(y/n) : ";
		string chice;
		cin >> chice;
		if (chice == "n") break;
	}
	cout << "GM %d명을 뽑았다!" << gameCo.gmCount;
}

void HireGM_once(COMPANY gc)
{
	GM gm;
	cin >> gm.no >> gm.name >> gm.part >> gm.salary;
}