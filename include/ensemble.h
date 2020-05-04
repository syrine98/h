#ifndef ENSEMBLE_H
#define ENSEMBLE_H



struct noeud
        {
            int val ;
            noeud * next ;
        };

class ensemble
{
    public:
        ensemble();
        ensemble (const ensemble & e1);
        virtual ~ensemble();
        ensemble operator = (const ensemble &e1);
        void add (int);
        void del (int);
        bool est_pres (int);
        bool est_vide ();
        int plus_petit ();
    private:
        noeud* head ;




};

#endif // ENSEMBLE_H
