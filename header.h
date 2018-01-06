
 #define NOM ((int)100)
 #define REP ((int)50)
#define CARTE ((int)10)
#define PLAYER ((int)10)

#ifndef HEADER_H
#define HEADER_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct Carte{   
        int valeur;
        int blazon;
    }carte;
    
    typedef struct Main{   
        carte card[CARTE];
    }Main;
    
    typedef struct BlackJack{
        char nom[NOM];
        Main jeu; 
        int count;
        int done; //done = 0 : Continue
                  //done = 1 : Stop
        int win; // 0 = init
                 // 1 = gagné
                 // 2 = perdu
        
       
    }bjack;
    
    int intPlayer();
    int aleaCarte(int,int);
    int aleaCarteBanque(int,int,int);//(tour,joueur,total) 
    void affichage(carte);
    
 void attente();
void winBlack(int); 
 
void jack();
 int choixAs();
int Alpha(int, bjack tab[]);  
void Beta(int, bjack tab[],int);
void winBlack(int); 
int choixCarte(int);
 void bank();
 
#ifdef __cplusplus
}
#endif

#endif /* HEADER_H */

















