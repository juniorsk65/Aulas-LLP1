#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio {
	private:
		int horas;
		int minutos;
		int segundos;
	public:
		int getHoras();
		int getMinutos();
		int getSegundos();

		bool setHorario(int h,  int m, int s);

		void avancarHorario();
};
#endif //RELOGIO_H
