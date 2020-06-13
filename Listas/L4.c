#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
int main(int argc,char *argu[]){
	while(--argc){
		puts(*(argu+argc));
	}
	return 0;
}
