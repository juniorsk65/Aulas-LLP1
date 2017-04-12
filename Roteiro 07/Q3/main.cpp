#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Ginecologista.h"

int main(){
    Cirurgiao cirurgiao;
    Oftalmologista oftalmologista;
    Ginecologista ginecologista;

    cout << "Medico " << cirurgiao.getNome() << endl;
    cout << "Especialização" << cirurgiao.getEspec() << endl;
    cirurgiao.setProntuario("cirurgia");
    cout << "O medico esta realizando " << cirurgiao.getProntuario() << endl;

    cirurgiao.setProntuario("atendimento");
    cout << "O medico esta realizando " << cirurgiao.getProntuario() << endl;
}