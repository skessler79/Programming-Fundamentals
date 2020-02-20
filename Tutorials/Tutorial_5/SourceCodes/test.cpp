#import<iostream>
int a,b,p,n,c;main(){puts("Input a range of integers.");for(;a<2;std::cin>>a)puts("From integer a ( a must be greater than 1 ) :");for(;b<a;std::cin>>b)puts("To integer b ( b must be greater than or equal to a ) :");for(;a<b;p?printf("%d ",a),c++:a,a++)for(n=1,p=1;++n<a;p=p*a*a%n);printf("\n%d prime numbers.\n",c);}
