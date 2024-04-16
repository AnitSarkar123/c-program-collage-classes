#include<stdio.h>
//#include<stdlib.h>
int main(){
//int a,b,d;
char c;
//printf("please give two numbers\n");
//scanf("%d %d",&a,&b);
//printf(" your first num:%d\n",a);
//printf(" your second num:%d\n",b);
//printf("+.for'+'\n");
//printf("-.for'-'\n");
//printf("*.for'x'\n");
//printf("/.for'/'\n");
//__fpurge(stdin);
printf("please give your character\n");
scanf(" %c",&c);
switch(c){
case 'A':
	case 'a':

case 'E':
	case 'e':

case 'I':
	case 'i':

case 'O':
	case 'o':

case 'U':
	case 'u':
printf("That is an vowel\n");
break;
default:
printf(" That is an constant\n");
}
return 0;
}
