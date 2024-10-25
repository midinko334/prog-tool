#include<stdio.h>
#define NUM 3

void output(char a[NUM][11],int i){

  for(int j=0;j<11;j++){
    printf("%c",a[i][j]);
    if(j==2||j==6) printf("-");
  }
  printf("\n");

}

int main(){

  char bango[NUM][11],dum,input[13];
  int people=1;
  for(int i=0;i<NUM;i++) for(int j=0;j<11;j++) bango[i][j]=0;
  for(int j=0;j<11;j++) input[j]=0;

  for(int i=0;i<NUM;i++){
    printf("%d人目:",i);
    scanf("%s%c",input,&dum);
    for(int j=0,t=0;j<11;j++){
      if(input[t]=='-') j--;
      else bango[i][j]=input[t];
      t++;
    }
  }

  while(people){
    printf("何人目を表示する？(0で終了):");
    scanf("%d",&people);
    if(people>0&&people<=NUM) output(bango,people-1);
    else if(people) printf("warning:%d人目は存在しません\n");
  }

}
