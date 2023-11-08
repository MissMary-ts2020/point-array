#include <stdio.h>

int main() {
	int arr[10] = { 0 };//整数数组
	char ch[5] = { 0 };//字符数组
	char* par[3];//指针数组。指针类型为char*。这个数组由指针组成。
	
	int a = 10;
	int b = 20, c = 30, d = 40;
	int* pin[4] = { &a,&b,&c,&d };
	int i = 0;
	for (; i < 4; i++) {
		printf("第%d个元素，元素内容为%p，访问为%d\n", i, pin[i], *pin[i]);
	}//不是这样用的

	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* arrs[] = { arr1,arr2,arr3 };//保存的都是首元素的地址
	
	return 0;
}