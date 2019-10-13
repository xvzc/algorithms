char s[50];main(i,n,m){scanf("%s",s);for(i=0,n=0,m=0;s[i];i++){if(s[i]==40)n++;else if(s[i]==41)m++;}printf(n&&!(n-m)?"YES":"NO");}
