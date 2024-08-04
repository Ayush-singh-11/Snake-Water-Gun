#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int stonepaperciger(char you,char com){
if(you==com){
return 0;    
}
if(you=='s' &&  com=='p'){
return -1;
}
else if(you=='p' &&  com=='s'){
return 1;
}
if(you=='s' &&  com=='c'){
return 1;
}
else if(you=='c' &&  com=='s'){
return -1;
}
if(you=='c' &&  com=='p'){
return 1;
}
else if(you=='p' &&  com=='c'){
return -1;

}
}

int main(){
char you,com;
srand(time(0));
int num=rand()%90 + 1;
if(num<=30){
com='s';
}
if(num>=30 && num<=60){
com='p';
}
if(num>=60){
com='c';
}
printf("Stone for 's',Paper for 'p',Ciger for 'c'\n");
scanf("%c",&you);
int result=stonepaperciger(you,com);
if(result==0){
printf("match draw!\n");
}
else if(result==1){
printf("you won!\n");
}
else if(result==-1){
printf("you lose!\n");
}
printf("you chose %c and com chose %c\n",you,com);
return 0;
}