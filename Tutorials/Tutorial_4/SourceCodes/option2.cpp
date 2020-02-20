#import<iostream>
float t=12,a;main(){puts("How many shirts would you like ?");std::cin>>a;(a>30)?t*=.75:(a>20)?t*=.8:(a>10)?t*=.85:(a>4)?t*=.9:t;(a<0)?puts("Invalid Input: Please enter a nonnegative integer"):printf("The cost per shirt is $%.2f and the total cost is $%.2f\n",t,a*t);}
