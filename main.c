#include <stdio.h>
#include <stdlib.h>
int main(){
  int tab[10],i,temp,j;

      printf("entrer les 5 valeurs \n");
      for (i=0;i<=5;i++)
      {
      scanf("%d",&tab[i]);
    }

    for (i=1;i<=5;i++)
    {
    if ( tab[i-1]>tab[i])

         j=i;
  do
    {
    temp=tab[j];
    tab[j]=tab[j-1];
    tab[j-1]= temp;
    j=j-1;
    }
  while ( (j!=0 ) && ( tab[j-1]>=tab[j]));
    }
    for (i=0;i<=5;i++)
    printf("%d ",tab[i]);
      return 0;

}

