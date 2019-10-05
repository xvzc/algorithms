main(a,b,i,j,n){
	int c[3];
	int d[3];

	scanf("%d %d",&a,&b);

	c[0] = a/100*100;
	c[1] = (a-c[0])/10*10;
	c[2] = a-(c[1]+c[0]);

	d[0] = b/100*100;
	d[1] = (b-d[0])/10*10;
	d[2] = b-(d[1]+d[0]);

	b=1; n=0;
	for(i=2;i>=0;i--){
		a=0;

		for(j=2;j>=0;j--)
			a+=d[i]*c[j];

		n+=a; printf("%d\n",a/b); b*=10;
	}
	printf("%d",n);
}
