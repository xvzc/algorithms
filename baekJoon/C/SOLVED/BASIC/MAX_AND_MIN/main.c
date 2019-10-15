main(a,m,n,i){
        for(scanf("%d",&i),m=-1000000,n=1000000;i>0;i--){
                scanf("%d",&a);
                m=a>m?a:m;
                n=a<n?a:n;
        }
        printf("%d %d",n,m);

}
