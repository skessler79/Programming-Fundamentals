#import<iostream>
int i,n,c;main(int p){for(scanf("%d",&i),n=i;--i;p=p*i*i%n, printf("p: %d, n = %d, i = %d\n", p, n, i));putchar(48+p%n);}
