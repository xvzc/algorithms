p[1000001];main(n,m,i,j){
	scanf("%d%d",&n,&m);
	for(i=2;i<=m;i++)
		if(!p[i])
			for(j = i+i; j <= m; j+=i)
				p[j] = 1;

	for(i=n<2?2:n;i<=m;i++)
		if(!p[i])
			printf("%d\n", i);
}

