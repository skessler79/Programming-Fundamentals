#import<iostream>
float i,s,t,n;char f(auto &s,auto n){char c;s/=n;(s<60)?c='F':(s<70)?c='D':(s<80)?c='C':(s<90)?c='B':c='A';return c;}main(){std::cin>>n;for(;i++<n;s+=t)std::cin>>t;std::cout<<f(s,n);}
