#include <stdio.h>
int main(void) {
	int low, mid, high, n, item, guess;
	int list[] = {1, 3, 5, 7, 9, 11};				//array
	n = sizeof(list) / sizeof(list[0]);					//array size
	low = 0;				//begin of array
	high = n - 1;				//end of array
	printf("Insert the number: ");
	scanf("%d", &item);					//item - the number the programm will look for
	while (low <= high) {
		mid = (low + high) / 2;
		guess = list[mid];					//the middle is always taken
		if (guess == item) {
			printf("The index of item is %d\n", mid);
			return 0;
		}
		else if (guess > item) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return 0;
}