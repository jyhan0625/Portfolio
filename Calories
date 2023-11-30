#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct food {

	char name[100];
	int cal;

};



int main() {

	struct food FOODS[100];
	int index = 0, sumcal = 0;

	while (true) {

		scanf("%s", FOODS[index].name);

		scanf("%d", &FOODS[index].cal);

		if (strcmp(FOODS[index].name, "끝") == 0) break;

		sumcal += FOODS[index].cal;

		index++;

	}

	printf("\n\n--- 음식 리스트 ---\n");

	for (int i = 0; i < index; i++) {

		printf("%s\t%d\n", FOODS[i].name, FOODS[i].cal);


	}

	printf("총 칼로리 = %d", sumcal);

}
