#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include <time.h>
#include <direct.h>
#include <windows.h>



 #define NOM ((int)100)
 #define REP ((int)50)
 #define PLAYER ((int)10)




void quitter(bjack tab []);


int main(int argc, char** argv) {
    jack();
    return (EXIT_SUCCESS);
}



void jack(){
     bjack b;
    int i,j=0;
    int end=0;
    int max=0;
    
    int n=0;
    int tour;   // = nombre de carte tirées
    int joueur; // = numero du joueur 
    carte c;
    srand(time(0));
    //aleaCarte(tour,joueur);
    
    bjack tab[(PLAYER)];
    for(i=0;i<PLAYER;i++){
        tab[i].count = 0;
        tab[i].done = 0;
        tab[i].win = 0 ;
        for(j=0;j<CARTE;j++){
            tab[i].jeu.card[j].blazon=0;
            tab[i].jeu.card[j].valeur=0;
    }
    } 
   
    n=intPlayer();
    
    end = Alpha(n, tab);    
    
    if (end==0){
        Beta(n, tab,0); //tour 2
        
        Beta(n, tab,1); //tour 3
        Beta(n, tab,2); //tour 4
}
    
    bank(tab);
    max = maxCard(n,tab);
    printf("\n\nLe plus gros score des joueurs est %d",max);
    compare(max,n,tab);
}


void quitter(bjack tab[PLAYER]){
    int a=0;
    printf("\npour quitter : 0");
    scanf("%d",&a);
    if(a == 0){
        
    }
}

