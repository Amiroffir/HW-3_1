#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#pragma warning(disable : 4996)


int main() {

	//Exercise 1

	int nums[10];
	printf("Please enter 10 numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
	}

	FILE* p = malloc(sizeof(int) * 10);
	
	p = fopen("numsArr.bin", "w");
	if (p != NULL) {
	
			fwrite(nums, sizeof(int), 10, p);
		
		
		fclose(p);
	}
	

	//Exercise 2

	struct MyStruct
	{
		int val;
		char name[100];
		short answer;
	};

	struct MyStruct a;
	struct MyStruct b;
	struct MyStruct c;

	
		printf("Please enter name and value:\n");
		scanf("%s %d", &a.name, &a.val);
		if (a.val > 10 && strlen(a.name) > 5) {
			a.answer = 1;
		}
		else {
			a.answer = 0;
		}

		printf("Please enter name and value:\n");
		scanf("%s %d", &b.name,&b.val);
		if (b.val > 10 && strlen(b.name) > 5) {
			a.answer = 1;
		}
		else {
			a.answer = 0;
		}
		printf("Please enter name and value:\n");
		scanf("%s %d", &c.name, &c.val);
		if (c.val > 10 && strlen(c.name) > 5) {
			a.answer = 1;
		}
		else {
			a.answer = 0;
		}
	
		FILE* pt = malloc(sizeof(struct MyStruct) * 3);
		pt = fopen("structers.bin", "a");
		if (pt != NULL) {
			fwrite(&a, sizeof(struct MyStruct), 1, pt);
			fwrite(&b, sizeof(struct MyStruct), 1, pt);
			fwrite(&c, sizeof(struct MyStruct), 1, pt);
		}
	

}