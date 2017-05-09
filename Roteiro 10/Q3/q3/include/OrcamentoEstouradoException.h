#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

#include <stdexcept>
using namespace std;

class OrcamentoEstouradoException : public runtime_error
{
    public:
        OrcamentoEstouradoException();
};

#endif // ORÇAMENTOESTOURADOEXCEPTION_H
