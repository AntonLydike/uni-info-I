#include <stdio.h>

int main(int argc, char * argv[])
{
	if (argc < 3) {
		printf("Sie haben weniger als 2 Parameter eingegeben");
	} else if (argc == 3) {
		printf("Sie haben genau 2 Parameter eingegeben");
	} else {
		printf("Sie haben mehr als 2 Parameter eingegeben");
	}
	return 0;
}
