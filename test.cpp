#include "T.h"
#include "HuffmanTree.h"
#include<time.h>
void test()
{
	Filecompare f;
	f.Compress("file1.txt");
	f.Uncompress("file1.txt");
}
int main()
{
	int begin = clock();
	test();
	int end = clock();
	cout << "����ʱ�䣺" << end - begin;
	getchar();
	return 0;
}