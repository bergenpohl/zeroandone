#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	zeroandone(char *a) {
	int i;

	i = atoi(a);
	if (i < 1)
		return;
	srand(time(NULL));
	printf("[0.%d", rand() % 100);	
	while (i > 1) {
		printf(", 0.%d", rand() % 100);
		i--;
	}
	puts("]");
}

int	main(int argc, char *argv[]) {
	if (argc == 2)
		zeroandone(argv[1]);
	return 0;
}
