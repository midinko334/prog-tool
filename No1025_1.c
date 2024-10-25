#include <stdio.h>
#define ROW 3
#define COLUMN 4

void input(int a[ROW][COLUMN]){

  for(int i=0;i<ROW;i++) for(int j=0;j<COLUMN;j++) a[i][j]=COLUMN*i+j;

}
void output(int a[ROW][COLUMN]){

  for(int i=0;i<ROW;i++){
    for(int j=0;j<COLUMN;j++) printf("%d ",a[i][j]);
    printf("\n");
  }

}

int main(){

  int num[ROW][COLUMN];
  input(num);
  output(num);

}
