#include <stdio.h>
#define COLS 3
#define ROWS 2
int main () {
//	const int COLS = 3;
	//const int ROWS = 2;
	int m[ROWS] [COLS] = {
						  {11,12,13},
						  {21,22,23}
						 };
	int minElement = 0;
	int minRow = 0;
	int minCol = 0;
	int maxElement = 0;
	int maxRow = 0;
	int maxCol = 0;
	printf ("Test v8.01: OK.\n");
	printf ("COLS: %d\n", COLS );
	printf ("ROWS: %d\n", ROWS );
	for ( int row=0;row<ROWS; row++ ) {
		for ( int col=0; col<COLS; col++) {
			printf("%4d", m[row][col]);
		}
			printf("\n");
	}
	minElement = m[0][0];
	for (int row=0; row<ROWS; row++ ) {
		for ( int col=0; col<COLS; col++) {
			if(m[row][col]<minElement) {
			minElement =m[row][col];
			minRow=row;
			minCol=col;
			}
		}
	}
	maxElement = m[0][0];
	for (int row=0; row<ROWS; row++ ) {
		for ( int col=0; col<COLS; col++) {
			if (m[row][col]>maxElement) {
				maxElement = m[row][col];
				maxRow=row;
				maxCol=col;
			}
		}
	}
	printf("Min element m[%d][%d]: %d\n", minRow, minCol, minElement);
	printf("Max element m[%d][%d]: %d\n", maxRow, maxCol, maxElement);
	return 0;
}
