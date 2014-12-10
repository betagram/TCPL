#include <stdio.h>

#define OUT 0
#define IN 1

main()
{
	int c, n1, nw, nc, state;

	state = OUT;
	n1 = nw = nc = 0;
	while((c=getchar()) != EOF){
		++nc;
		if(c=='\n'){
			++n1;
		}
		if((c==' ') || (c=='\n') || (c=='\t')){
			state = OUT;
		}else if (state == OUT){
			state = IN;
			++nw;
		}else{;}
		printf("----------------\n");
		printf("%d %d %d\n", n1, nw, nc);
	}
}
