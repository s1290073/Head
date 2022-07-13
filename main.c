#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int randnumber;
  int count1=0,count2=0;
  char d[128];

  printf("Who are you?\n>");
  scanf("%s",d);
  printf("Hello,%s!\n",d);

  printf("Tossing a coin...\n");
  srand(time(NULL));

  for(int i=1 ; i < 4 ; i++){
    
    randnumber=rand()%2;
    if(randnumber==0){
      printf("Round %d: Heads\n",i);
      count1++;
    }
    else{
      printf("Round %d: Tails\n",i);
      count2++;
	}
  }
  printf("Heads: %d, Tails: %d\n",count1,count2);

  if(count1<count2){
    printf("%s lost\n",d);
  }
  else{
    printf("%s won\n",d);
  }
}
