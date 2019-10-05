a[300000];
main(n,m,i,j){
	for(i=scanf("%d%d",&n,&m);i<n+2;i++)
		scanf("%d", &a[i]);

	for(j=2; j<i;j++)
		printf("%d ", a[j]);
}
