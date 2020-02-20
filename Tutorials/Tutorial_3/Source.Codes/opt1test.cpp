#import<iostream>
float t,a;main(){char*s[]={"first","second","third"};for(auto i:s)printf("\nPlease input the %s grade\n",i),std::cin>>t,a+=t/3;printf("\nThe average of the three grades is %.2f\n",a);}
