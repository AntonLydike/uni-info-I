#include <stdio.h>

int main(int argc, char * argv[])
{
	switch (argc) {
	case 1:
	case 2:
		printf("Sie haben weniger als 2 Parameter eingegeben");
		break;
	case 3:
		printf("Sie haben genau 2 Parameter eingegeben");
		break;
	default:
		printf("Sie haben mehr als 2 Parameter eingegeben");
	}
	return 0;
}
