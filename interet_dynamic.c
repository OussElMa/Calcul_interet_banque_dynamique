#include <stdio.h>

int main() 
{
    int an[100], i, t, s;
    float interet;
    i=1;
    printf("Quel est votre capital? \n");
    scanf("%d",&s);
    printf("Sur combien d'années souhaitez-vous calculer votre bénéfice? \n");
    scanf("%d",&i);
    printf("A quel taux d'intêret (en pourcent): ");
    scanf("%f", &interet);
    t=1;
    while(t<=i && t>=0)
    {
       s=s+s*interet/100;
       an[t] = s;
       printf("A %d ans tu auras %d$.\n", t, an[t]);
       t++;
    }
  return 0; 
}