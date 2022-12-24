#include<stdio.h>
#include<conio.h>
int main()
{
    float tp=80000,nol,nom,nolm,noim,now,nolw,noiw;

    printf("Sr.No.\t\tGet Outcome                       Value\n\n");
    printf("1     \t\tTotal Population                  =%f\n",tp);
    nol=tp*0.48;
    printf("2     \t\tNumber of Literater (Men+Women)   =%f\n",nol);
    nom=tp*0.52;
    printf("3     \t\tNumber of Men                     =%f\n",nom);
    nolm=tp*0.35;
    printf("4     \t\tNumber of Literater Men           =%f\n",nolm);
    noim=nom-nolm;
    printf("5     \t\tNumber of illiterater Men         =%f\n",noim);
    now=tp-nom;
    printf("6     \t\tNumber of Women                   =%f\n",now);
    nolw=nol-nolm;
    printf("7     \t\tNumber of Literater Women         =%f\n",nolw);
    noiw=now-nolw;
    printf("8     \t\tNumber of illiterater women       =%f\n",noiw);
    return 0;
}
