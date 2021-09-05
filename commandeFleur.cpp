
#include <iostream>

class CommandFleur{
protected:
    int nbreCommand;

public:
    int getNbreCommand(){
        return nbreCommand;
    }
    void setNbreCommand(int nbre1){
        nbreCommand=nbre1;
    }
    void heureDeLivraison(){
        cout << "Notez que les commandes sont livrees entre 14h et 18h"<<endl;
    }
};

class ClientEntreprise:public CommandFleur{
private:
    int nbreEntreprise;

public:
    // cet accesseur permettra au chauffeur de voir combien des livraison il lui reste
    int getNbreEntreprise(){
        return nbreEntreprise;
    }
    void entrepriseFait(){
        nbreEntreprise--;
    }
    //gestionnaire donne les nombre des commande entreprise... ou sinon penser  au gestionnaire la gestion de cette classe
    //et au chauffeur le main
    void setNbrEntreprise(int nbreEntrep){
        nbreEntreprise=nbreEntrep;
    }
    void type(){
        cout<<"ceci est une commande pour entreprise"<<endl;
    }

};

class ClientIndividual:public CommandFleur{
private:
    int nbreCommandIndividual;
public:
    // accesseur pour le chauffeur
    int getNbreCommandIndividual(){
        return nbreCommandIndividual;
    }
    //accesseur chauffeur produit livree
    void commandIndividualFait(){
        nbreCommandIndividual--;
    }
    //accessuer gestionnaire
    void setNbreCommandIndividual(int commandIndividual){
        nbreCommandIndividual=commandIndividual;
    }

void type(){
        cout<<"Ceci est une commande individuelle"<<endl;
    }
};

class ClientFuneral:CommandFleur{
private:
    //permettre au gestionnaire d attribuer les nmbre de commande funeraire a faire une fois pour toute
    //penser a permettre aussi au chauffeur , une fois la commande faite , de confirmer en faisant diminuer l nbre funeraire
    int nbreFuneral;

public:
    // ici le chauffeur verra combien des commandes lui reste a livrer
    int getNbreFuneral(){
        return nbreFuneral;
    }
    // une fois la commande faites , le chauffeur appelera cette methode pour signifier que la commande a ete livrE
    void funeralFait(){
        nbreFuneral--;
    }
    //ici le gestionnaire donne le nombre des funeraire a livre
    void setFuneral_A_Livr(int nbrFuner){
        nbreFuneral=nbrFuner;
    }


};
