nt f(int k){int a,b;if(k<2)return 0;a=f(k/2)+k%2+1;b=f(k/3)+k%3+1;if(a<b)return a;else return b;}main(n){scanf("%d",&n);printf("%d\n",f(n));}
