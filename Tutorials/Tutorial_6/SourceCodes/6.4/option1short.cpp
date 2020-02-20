#import<iostream>
main(){int a,b;std::cin>>a>>b;a^=b^=a^=b;printf("%d %d",a,b);}
