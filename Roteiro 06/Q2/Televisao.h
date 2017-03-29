#ifndef TELEVISAO_H
#define TELEVISAO_H
#include <iostream>

using namespace std;

class Televisao{
    private:
        int volume, canal ;
    public:
        void setVolume(int vol);
        int getVolume();

        void setCanal(int cal);
        int getCanal();

        //Construtor
        Televisao(int _vol, int _canal);

        void aumentaVolume();
        void diminuiVolume();
        void sobeCanal();
        void desceCanal();
        void Volume();
        void Canal(); 
        void TV();
};

#endif // TELEVISAO_H