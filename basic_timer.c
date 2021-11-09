#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main(void) {
	system("Color 2");

	int hrs = 0;
	int min = 0;
	int sec = 0;

	while (1) {
		sec += 1;
		if (sec > 59) {
			sec = 0;
			min += 1;
		}
		if (min > 59) {
			min = 0;
			hrs += 1;
		}
		if (hrs > 23) {
			sec = 0;
			min = 0;
			hrs = 0;
		}

		Sleep(8);
		system("cls");
		printf("PRIMITIVE TIMER ON C LANG\n\n");
		printf("\n\nHOUR:MINUTE:SECOND");

		if (sec <= 9) {
			printf("\n\n%d%d:%d%d:%d%d", 0, hrs, 0, min, 0, sec);
		}
		else if (min <= 9) {
			printf("\n\n%d%d:%d%d:%d", 0, hrs, 0, min, sec);
		}
		else if (hrs <= 9) {
			printf("\n\n%d%d:%d:%d", 0, hrs, min, sec);
		}	
	}
	return 0;
}
