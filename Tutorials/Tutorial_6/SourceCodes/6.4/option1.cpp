#import<iostream>
void s(int &a, int &b){a^=b^=a^=b;}main(){int a,b;std::cin>>a>>b;s(a,b);printf("%d %d",a,b);}
