#include <string>
#include <exception>
//#include <>

#ifndef _Erreur_ // Ces lignes empèche l'inclusion multiple
#define _Erreur_

class Erreur : public std::exception
{

    private:
        int m_numero;               //Numéro de l'erreur
        std::string m_phrase;            //Description de l'erreur


    public:
        enum class NiveauErreur { INCONNU, SIMPLE, COMPLEXE, CRITIQUE }; //Niveau de l'erreur

        
        Erreur(int numero = 0, std::string const& phrase = "", NiveauErreur ne= NiveauErreur::INCONNU) throw()
            : m_numero(numero), m_phrase(phrase), m_niveau(ne)
        {}

        virtual const char* what() const throw()
        {
            return m_phrase.c_str();
        }

        std::string getNiveau() const throw()
        {
            switch (m_niveau)
            {
				case NiveauErreur::SIMPLE:
					return "Simple";
					break;
				case NiveauErreur::COMPLEXE:
					return "Complexe";
					break;
				case NiveauErreur::CRITIQUE:
					return "Critique";
					break;
				default:
					return "Inconnu";
					break;
			}
        }

        virtual ~Erreur() throw()
        {}

    private :
        NiveauErreur m_niveau;

};


#endif