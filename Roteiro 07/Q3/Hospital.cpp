#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Ginecologista.h"

int main(){
    Cirurgiao cirurgiao;
    Oftalmologista oftalmologista;
    Ginecologista ginecologista;

    cout << "Medico " << cirurgiao.getEspec() << endl;
    cirurgiao.setProntuario("cirurgia");
    cout << "O medico esta realizando " << cirurgiao.getProntuario() << endl;

    cirurgiao.setProntuario("atendimento");
    cout << "O medico esta realizando " << cirurgiao.getProntuario() << endl;

    cout << "\nMedico " << oftalmologista.getEspec() << endl;
    oftalmologista.setProntuario("cirurgia");
    cout << "O medico esta realizando " << oftalmologista.getProntuario() << endl;

    cout << "\nMedico " << ginecologista.getEspec() << endl;
    ginecologista.setProntuario("atendimento");
    cout << "O medico esta realizando " << ginecologista.getProntuario() << endl;

}