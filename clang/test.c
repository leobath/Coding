#include <stdio.h>

void swap(int *x, int *y);

void printNum(int age);

int main() {
    int age;
    int age2 = 45;
    printf("Give age<-");
    scanf("%d", &age);
    // printf("hi c prog %d\n", age);
    // printf("\n");
    printNum(age);
    // printf("\nage=%d , and age2=%d", age, age2);
    printf("Before swap age=%p age2=%p", &age, &age2);
    swap(&age, &age2);
    printf("\nAfter swap age=%p age2=%p", &age, &age2);
    printf("\n");
    return 0;
}

void swap(int *x, int *y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

void printNum(int age) {
	int ageL = age;
	printf("%d", ageL);
}

