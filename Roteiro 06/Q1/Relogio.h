#ifndef Relogio_H
#define Relogio_H

class Relogio {
	private:
		int horas;
		int minutos;
		int segundos;
	public:
		int getHoras();
		int getMinutos();
		int getSegundos();

		bool setHorario();

		void avancarHorario();
}
#endif //Relogio_H
