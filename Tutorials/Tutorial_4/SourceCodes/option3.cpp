#import<iostream>
char a,b;main(int t){puts("Please input \"I\" if you are in-state or \"O\" if you are out-of-state:");std::cin>>a;puts("Please input \"Y\" if you require room and board and \"N\" if you do not:");std::cin>>b;(b=='Y')?(a=='I')?t=5500:t=8e3:(a=='I')?t=3e3:t=4500;printf("Your total bill for this semester is $%d\n",t);}
