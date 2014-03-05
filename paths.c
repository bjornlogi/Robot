#include <stdio.h>
#include <stdlib.h>

int countPaths(int i, int j, int m, int n){
	if (i == m && j == n) return 1;

	int c1 = 0;
	int c2 = 0;

	if (i < m)
		c1 = countPaths(i+1,j,m,n);
	if (j < n)
		c2 = countPaths(i,j+1,m,n);
	return (c1 + c2);
}

int main(int argc, char *argv[]){
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);
	int count = countPaths(1,1,m,n);
	printf("The number of paths is: %d\n", count);

	return 0;
}
