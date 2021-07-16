#include<cstdio>
int main(){int c=0;char s[1000011];s[fread(s,1,1000011,stdin)]=0;for(int i=0;s[i];++i)if(s[i]>33&&s[i+1]<33)c++;printf("%d",c);}