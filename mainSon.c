
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>


int BeepMelo(int melo)
{
    switch(melo)
    {
        case 1:
        Beep((DWORD)496.88,(DWORD)500); //La fonction permettant de faire un beep avec l'uc est simplement Beep()
        Beep((DWORD)496.88,(DWORD)500); //Le "(DWORD)" permet de convertir le nombre de type double, ici 496.88 et 500,
        Beep((DWORD)496.88,(DWORD)500); //en valeur de type DWORD. Car sinon Dev-cpp cri :/ 
        Beep((DWORD)496.88,(DWORD)500); //Ensuite rien de bien compliqué
        Beep((DWORD)440,(DWORD)500); //Have Fun
        Beep((DWORD)392,(DWORD)500); //lilxam
        Beep((DWORD)392,(DWORD)500);
        Beep((DWORD)370,(DWORD)500);
        Beep((DWORD)329.63,(DWORD)500);
        Beep((DWORD)329.63,(DWORD)500);
        Beep((DWORD)392,(DWORD)500);
        Beep((DWORD)496.88,(DWORD)500);
        Beep((DWORD)659.26,(DWORD)500);
        Beep((DWORD)659.26,(DWORD)500);
        Beep((DWORD)659.26,(DWORD)500);
        Beep((DWORD)659.26,(DWORD)500);
        Beep((DWORD)87.33,(DWORD)500);
        break;

        case 2:
        Beep((DWORD)475,(DWORD)800);
        Beep((DWORD)475,(DWORD)800);
        Beep((DWORD)475,(DWORD)300);
        Beep((DWORD)475,(DWORD)350);
        Sleep(150);
        Beep((DWORD)560,(DWORD)800);
        Beep((DWORD)540,(DWORD)600);
        Beep((DWORD)540,(DWORD)600);
        Sleep(100);
        Beep((DWORD)479,450);
        Beep((DWORD)479,(DWORD)450);
        Beep((DWORD)465,(DWORD)600);
        Beep((DWORD)477,(DWORD)600);
        break;

        case 3:
        Beep((DWORD)700,(DWORD)720);
        Beep((DWORD)550,(DWORD)720);
        Beep((DWORD)650,(DWORD)770);
        Beep((DWORD)700,(DWORD)950);
        Sleep(500);
        Beep((DWORD)700,(DWORD)950);
        Beep((DWORD)650,(DWORD)800);
        Sleep(500);
        Beep((DWORD)700,(DWORD)950);
        Beep((DWORD)650,(DWORD)770);
        Beep((DWORD)700,(DWORD)1200);
        Beep((DWORD)470,(DWORD)800);
        Beep((DWORD)550,(DWORD)800);
        Beep((DWORD)650,(DWORD)800);
        Beep((DWORD)700,(DWORD)720);
        break;
        case 4:
             
              Beep (330,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (392,100);Sleep(700);
        Beep (196,100);Sleep(700);
        Beep (262,300);Sleep(300);
        Beep (196,300);Sleep(300);
        Beep (164,300);Sleep(300);
        Beep (220,300);Sleep(100);
        Beep (246,100);Sleep(300);
        Beep (233,200);
        Beep (220,100);Sleep(300);
        Beep (196,100);Sleep(150);
        Beep (330,100);Sleep(150);
        Beep (392,100);Sleep(150);
        Beep (440,100);Sleep(300);
        Beep (349,100);Sleep(100);
        Beep (392,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (247,100);Sleep(500);
        Beep (262,300);Sleep(300);
        Beep (196,300);Sleep(300);
        Beep (164,300);Sleep(300);
        Beep (220,300);Sleep(100);
        Beep (246,100);Sleep(300);
        Beep (233,200);
        Beep (220,100);Sleep(300);
        Beep (196,100);Sleep(150);
        Beep (330,100);Sleep(150);
        Beep (392,100);Sleep(150);
        Beep (440,100);Sleep(300);
        Beep (349,100);Sleep(100);
        Beep (392,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (247,100);Sleep(900);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (207,100);Sleep(100);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(500);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (523,100);Sleep(300);
        Beep (523,100);Sleep(100);
        Beep (523,100);Sleep(1100);
        Beep (392,100);Sleep(100);
        Beep (370,100);Sleep(100);
        Beep (349,100);Sleep(100);
        Beep (311,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (207,100);Sleep(100);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (220,100);Sleep(100);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(500);
        Beep (311,300);Sleep(300);
        Beep (296,300);Sleep(300);
        Beep (262,300);Sleep(1300);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(300);
        Beep (330,200);Sleep(50);
        Beep (262,200);Sleep(50);
        Beep (220,200);Sleep(50);
        Beep (196,100);Sleep(700);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);
        Beep (330,100);Sleep(700);
        Beep (440,100);Sleep(300);
        Beep (392,100);Sleep(500);
        Beep (262,100);Sleep(100);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(300);
        Beep (330,200);Sleep(50);
        Beep (262,200);Sleep(50);
        Beep (220,200);Sleep(50);
        Beep (196,100);Sleep(700);
        /*Intro*/
        Beep (330,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (330,100);Sleep(300);
        Beep (392,100);Sleep(700);
        Beep (196,100);Sleep(700);
        Beep (196,100);Sleep(125);
        Beep (262,100);Sleep(125);
        Beep (330,100);Sleep(125);
        Beep (392,100);Sleep(125);
        Beep (523,100);Sleep(125);
        Beep (660,100);Sleep(125);
        Beep (784,100);Sleep(575);
        Beep (660,100);Sleep(575);
        Beep (207,100);Sleep(125);
        Beep (262,100);Sleep(125);
        Beep (311,100);Sleep(125);
        Beep (415,100);Sleep(125);
        Beep (523,100);Sleep(125);
        Beep (622,100);Sleep(125);
        Beep (830,100);Sleep(575);
        Beep (622,100);Sleep(575);
        Beep (233,100);Sleep(125);
        Beep (294,100);Sleep(125);
        Beep (349,100);Sleep(125);
        Beep (466,100);Sleep(125);
        Beep (587,100);Sleep(125);
        Beep (698,100);Sleep(125);
        Beep (932,100);Sleep(575);
        Beep (932,100);Sleep(125);
        Beep (932,100);Sleep(125);
        Beep (932,100);Sleep(125);
        Beep (1046,675);
             break;
        default:
        Beep((DWORD)500,(DWORD)500);
        break;
    }
}
int main(int argc, char *argv[])
{
   int melodie;
    for(;;)
    {
           
       printf("Melodie 1, 2 ou 3  ou 4  mario: ");
       scanf("%d",&melodie);
        
        BeepMelo(melodie); 
        /*
        int i=0;
        for(i=700;i<=5000;i=i+50){
         Beep(i,500);
         if(i>1000)i=200;
         Beep(200,200); Beep(100,300);
         int k=0;
         while(k<=2){Beep(20,100);k++;}
         Sleep(100);
         }
    */
    }
 
  system("PAUSE");	
  return 0;
}
