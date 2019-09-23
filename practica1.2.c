/*
Practica 1.1
Jaime Dominguez Mauricio
*/

#include<stdio.h>
#include<conio.h>
int main (void){
printf("1.-suma\n");
printf("2.-resta\n");
printf("3.-multiplicacion\n");
printf("4.-division\n");
printf("introduce una opcion\n");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("introduce la primera cantidad\n");
scanf("%d",&a);
printf("introduce la segunda cantidad\n");
scanf("%d",&b);
int c;
if(opt==1){
c=a+b;
}
else{
if(opt==2){
c=a-b;
}
else{
if(opt==3){
c=a*b;
}
else {
if (b==0){
printf("no es posible dividir entre cero\n");
}
else{
c=a/b;
}
}
}
printf("el resultado es %d",c);
}
}
