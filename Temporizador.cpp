// Implementación de temporizador

#include <iostream>
#include <chrono>
#include <thread>


// clase temporizador -- mide el tiempo de un bloque de código

class Temporizador	
{	
	
	std::chrono::time_point<std::chrono::steady_clock> inicio, fin;
	std::chrono::duration<float> duracion;

public:
	Temporizador()
	{
		inicioCronometro = std::chrono::high_resolution_clock::now();  // Inicio del cronometro
	
	}

	~Temporizador()
	{
		Parar();
	}
	void Parar()
	{
		auto finCronometro = std::chrono::high_resolution_clock::now();  // Fin del cronometro
		auto inicio = std::chrono::time_point_cast<std::chrono::microseconds>(inicioCronometro).time_since_epoch().count();
		auto fin= std::chrono::time_point_cast<std::chrono::microseconds>(finCronometro).time_since_epoch().count();
		
		auto duracion = fin - inicio;
		std::cout << "La duracion fue de " << duracion  << " microseg." << std::endl;

	}
private:
	std::chrono::time_point< std::chrono::high_resolution_clock> inicioCronometro;

};




