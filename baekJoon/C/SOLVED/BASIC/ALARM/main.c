main(a,b){
	scanf("%d %d",&a,&b);
	if(b<45){
		if(a==0){
			a=23;
		}
		else
			a-=1;

		b+=15;
	}
	else
		b-=45;

	printf("%d %d",a,b);
}

