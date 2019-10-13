#define j(x) k<2?0:f(k/x)+k%x+1 
f(k){int a,b;a=j(2);b=j(3);return a<b?a:b;}main(n){scanf("%d",&n);printf("%d\n",f(n));}
