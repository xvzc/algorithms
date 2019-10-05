#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

main(a,i,j){
	int x[3]; 
	int **pp=NULL;
	int *p=NULL;

	scanf("%d",&a);
	pp=(int**)malloc(sizeof(int*)*(--a));

	for(i=0;i<a;i++){
		scanf("%d %d %d",&x[0],&x[1],&x[2]);
		pp[i]=(int*)malloc(sizeof(int)*3);
		for(j=0;j<3;j++){
			pp[i][j]=x[j];
		}
		printf("values : %d %d %d\n", pp[i][0], pp[i][1], pp[i][2]);
	}

	/** for(i=0;i<a;i++){ */
	/**     printf("values : "); */
	/**     for(j=0;j<3;j++){ */
	/**         printf("%d ", pp[i][j]); */
	/**     } */
	/**     printf("\n"); */
    /**  */
	/**     free(pp[i]); */
	/**     pp[i] = NULL; */
	/**     printf("usable size after free: %d \n", (int)malloc_usable_size((void*)pp[i])); */
	/** } */



	free(pp);
}

