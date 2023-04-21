#include <stdio.h>
#include <iostream>
using namespace std;
//void Swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int& ra = a;
//	int& rra = a;
//	printf("%p\n", a);
//	printf("%p\n", ra);
//	printf("%p\n", rra);
//}
//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//}
//int& fun()
//{
//    int n = 0;
//	n++;
//	return n;
//}
//int main()
//{
//	int ret = fun();
//	printf("%d ", ret);
//}
//int main()
//{
//	//引用过程中，权限不能放大
//	const int a = 0;//表示a不能修改
//	int& b = a;//不能通过引用别名
//}
//int main()
//{/*
//	
//	int a=0;
//	auto pa=&a;//auto与指针和引用结合使用
//	auto* pa = &a;
//	auto&ra=a;
//	auto a = 1, b = 2;
//	auto c = 3, d = 4.0;
//}
int main()
{
	int arr[] = { 9,8,7,5,6,3,2,4 };
	for (auto x : arr)
	{
		x * 2;
	}
	int a[] = { 9,8,7,6,5,4,3,2,1 };
	int n = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}