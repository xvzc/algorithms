n;main(b){scanf("%d",&b);f(b,0);printf("%d",n);}void f(int a,int t){int d[3];if(n!=0&&t>=n)return;if(a==1){if(n==0)n=t;else n=n<t?n:t;return;}d[0]=a%3?-1:a/3;d[1]=a%2?-1:a/2;d[2]=a-1;for(int i=0;i<3;i++){if(d[i]!=-1)f(d[i],t+1);}return;}

