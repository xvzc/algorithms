k,x,l;

main(i,M,N,j){
	scanf("%d%d",&M,&N);

	char *p = calloc(N,1);
	char *t = malloc(N*7);

	for( ; i<N; ) 
		if(!p[++i]){
			if(i>=M){
				l=0;

				if(i>9)
					++l;

				if(i>99)
					++l;

				if(i>999)
					++l;

				if(i>9999)
					++l;

				if(i>99999)
					++l;

				for(x=i, k+=l; x; x/=10) 
					t[k--] = x%10 +'0';

				k += l+2;
				t[k++]='\n';

			}

			for(j=i*2;j<=N;j+=i) 
				p[j]=1;
		}

	t[k]='\0';puts(t);

}

