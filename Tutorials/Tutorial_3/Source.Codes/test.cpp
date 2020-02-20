t[52],i;main(c){for(;i<52;)(c=getchar())<11?i+=26:t[i+c-97]++;
for(i=27;--i&&t[i-1]==t[i+25];);puts(i?"false":"true");}
