#include <stdio.h>
#include <stdlib.h>
int main(){
  int tab[10],i,temp,j;

      printf("entrer les 5 valeurs: \n");
      for (i=0;i<=5;i++)
      {
      scanf("%d",&tab[i]);
    }
    //
    for(i=1;i<=5;i++)
       {
          temp=tab[i];
          j=i;

		  while((j>0) &&(tab[j-1]>temp))
               {
                tab[j]=tab[j-1];
                j=j-1;
            }
           tab[j]=temp;
  }
    for (i=0;i<=5;i++)
    printf("%d ",tab[i]);
      return 0;

}
