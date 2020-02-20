#import<iostream>
float t,a;main(int i){char*s[]={"excessive","typical","low"};for(;i<5;)printf("Please input your water bill for quarter %d:\n",i++),std::cin>>t,a+=t/12;(a<25)?i=2:(a>75)?i=0:i=1;printf("Your average monthly bill is $%.2f.\nYou are using %s amounts of water\n",a,s[i]);}
