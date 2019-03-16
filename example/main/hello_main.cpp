#include "hello_cpp.hpp"
#include "stdio.h"

extern "C" {
#include "hello_c.h"
}


int main(void)
{
	hello_c();
	hello_cpp();
	printf("If you see this information, Congratulation that the example test is OK!!\n");
	printf("\n");

	return 0;
}