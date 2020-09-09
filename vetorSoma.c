#include<stdio.h>

int main(){

int v1[] = {1,8,5,7,10};
int v2[] = {8,9,1,7,3};
int soma[5];

for (int i=0; i<=4; i++){
    soma[i] = v1[i] + v2[i];
}

printf("VETOR 01 \n");

for(int i=0; i<=4; i++){
  printf("%d ", v1[i]);
}
printf("\nVETOR 02 \n");

for(int i=0; i<=4; i++){
  printf("%d ", v2[i]);
}

printf("\n\nVETOR SOMA \n");

for(int i=0; i<=4; i++){
  printf("%d ", soma[i]);

}



  return(0);
}
