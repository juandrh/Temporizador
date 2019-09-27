#include <iostream>
#include <chrono>
#include <thread>

int main(void)
{

	auto start = std::chrono::high_resolution_clock::now();  // Inicio del cronometro

	int num = 0;

	for (int i = 0; i < 1000; i++)
		num++;


	std::cout << "num = " << num << std::endl;
	

	auto end= std::chrono::high_resolution_clock::now();  // Fin del cronometro

	std::chrono:::duration<float> duracion = end - start;
	std::cout << duracion.count << "s" << std::endl;
	std::cin.get();






}
