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

	printf("\n���� �迭 str1[] : ");
	for (i = 0; str1[i]; i++) {
		printf("%c", str1[i]);
	}
	printf("\n���� �迭 str2[] : ");
	for (i = 0; str2[i]; i++) {
		printf("%c", str2[i]);
	}

	getchar();*/


/*	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++) {
		printf("\n �л� %d�� �̸� : ", i + 1);
		gets(student[i][0]);
		printf("\n �л� %d�� �а� : ", i + 1);
		gets(student[i][1]);
		printf("\n �л� %d�� �й� : ", i + 1);
		gets(student[i][2]);
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n �л�%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++) {
				printf("%c", student[i][j][k]);
			}
		}
	}getchar();
	*/


	int i = 10, j = 20;

	printf("\n i�ǰ� = %d \n j�ǰ� = %d", i, j);
	printf("\n i�ּ�(&i) = %u \j�ּ�(&j) = %u", &i, &j);

	int* ptr;
	ptr = &i;
	printf("\n ptr�ּ�(&ptr) = %u", &ptr);
	printf("\n ptr�� ��(ptr) = %u", ptr);
	printf("\n ptr�� ���� ��(*ptr) = %d", *ptr);

}
