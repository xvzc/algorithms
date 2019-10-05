#include "malloc.h"
#define  _ sizeof(int)

main(i,q,p,d,b)int**q;int*p;int**d;int*b;{
	int n[3];
	for(d=(q=(int**)malloc(scanf("%d",&i)*i*_));~(i=scanf("%d %d %d",n,n+4,n+8));){
		p=*(d++);
		for(b=(p=(int*)malloc(_*3));b;*(b++)=n[i--]){}
	}

	for(d=q;d;d++){
		printf("OUT PUT\n");
		for (b=p;b;b++) {
			printf("%d ",*b);
		}
		printf("\n");
	}

	/** printf("sizeof i %d",i); */
	/** printf("size of arr : %d",sizeof(arr)); */
	/** printf("size of n : %d",sizeof(n)); */
	/** printf("SIZE OF INT : %d\n", sizeof(int)); */
	/** printf("size :%d\n",malloc_usable_size(q)); */
	/** printf("%d",sizeof(n)); */
	free(q);
}
