#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv) 

{
	int t, i, mas[9][9];

	
	for(t = 0; t < 9; t++){
	for ( i = 0; i < 9; i++){
	mas[t][i] = (t*i)*0;
	mas[i][t] = 1;
	}
	}

	
	for(t = 0; t < 9; t++){
	for(i = 0; i < 9; i++)
	printf("%3d", mas[t][i]);
	printf("\n");
	}
	
	system("pause");
	return 0;
}
