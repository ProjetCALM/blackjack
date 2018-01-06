
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include <time.h>
#include <direct.h>
#include <windows.h>



 #define NOM ((int)100)
 #define REP ((int)50)
 #define PLAYER ((int)10)



/*
 1;coeur  4:pique  2:carreau  3:trefle 34->37
 * ♠♡♢♣
 */
int maxCard();
void compare(int);

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
    int joueur; // = numero du joueur (1 => 5)
    carte c;
    srand(time(0));
    //aleaCarte(tour,joueur);
    n=intPlayer();
    bjack tab[(PLAYER)];
    
    for(i=0;i<PLAYER;i++){
        tab[i].count = 0;
        tab[i].done = 0;
        tab[i].win = 0;
        for(j=0;j<CARTE;j++){
            tab[i].jeu.card[j].blazon=0;
            tab[i].jeu.card[j].valeur=0;
    }
    }
    
    end = Alpha(n, tab);    
    
    if (end==0){
        Beta(n, tab,0); //tour 2
        
        Beta(n, tab,1); //tour 3
        Beta(n, tab,2); //tour 4
}
    
    bank();
    max = maxCard();
    printf("\n\nLe plus gros score des joueurs est %d",max);
    compare(max);
}

int maxCard(){
    bjack tab[PLAYER];
    int maximum=0  ;
    int i=0;
    for(i=1;i<(PLAYER-1);i++){
        if(((tab[i].count)>maximum) && tab[i].count<=21){
            maximum=tab[i].count;
        }
    }
    return(maximum);
}


void compare(int max){
    bjack tab[PLAYER];
    int i=0;
    
    if(max<tab[10].count){ //la banque gagne
        printf("\nC'est la banque qui gagne");
        for(i=0;i<(PLAYER-1);i++){
         tab[i].win=2;   
        }
    }
    
    else if(max>=tab[10].count){
        for(i=0;i<(PLAYER-1);i++){
            if(tab[i].count == max){
                tab[i].win=1;
            }
            else{
                tab[i].win=2;
            }
        }
    }
    
    for(i=0;i<PLAYER-1;i++){
        if(tab[i].win == 1){
            printf("\nJoueur %d : gagnant",i);
        }
        else{
            printf("\nJoueur %d : perdant",i);
        }
    }
    if(tab[10].win == 1){
            printf("\nBanque : gagnante");
        }
        else{
            printf("\nBanque : perdante");
        }
}

