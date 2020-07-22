#include <stdio.h>


/*int main(){
	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int size_days = sizeof(days);
	int num_elts = sizeof(days) / sizeof(days[0]);

	for (int i = 0; i < num_elts; i++) {
		printf("Month %d has %d days. \n", i + 1, days[i]);
	}
}*/
void main() {
	//char str[20] = "Data Structure!";

	/*char str1[12] = "Programming!";
	char str2[12] = {"P", "r", "o", "g", "r", "a", "m", "m", "i", "n", "g", "!"};


	int i;

	printf("\n문자 배열 str1[] : ");
	for (i = 0; str1[i]; i++) {
		printf("%c", str1[i]);
	}
	printf("\n문자 배열 str2[] : ");
	for (i = 0; str2[i]; i++) {
		printf("%c", str2[i]);
	}

	getchar();*/


/*	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++) {
		printf("\n 학생 %d의 이름 : ", i + 1);
		gets(student[i][0]);
		printf("\n 학생 %d의 학과 : ", i + 1);
		gets(student[i][1]);
		printf("\n 학생 %d의 학번 : ", i + 1);
		gets(student[i][2]);
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n 학생%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++) {
				printf("%c", student[i][j][k]);
			}
		}
	}getchar();
	*/


	int i = 10, j = 20;

	printf("\n i의값 = %d \n j의값 = %d", i, j);
	printf("\n i주소(&i) = %u \j주소(&j) = %u", &i, &j);

	int* ptr;
	ptr = &i;
	printf("\n ptr주소(&ptr) = %u", &ptr);
	printf("\n ptr의 값(ptr) = %u", ptr);
	printf("\n ptr의 참조 값(*ptr) = %d", *ptr);

}
