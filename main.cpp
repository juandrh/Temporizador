#include <iostream>
#include "Temporizador.cpp"





int main(void)
{

	int num = 0;

	// ----- Se mide el tiempo dentro de un bloque ----------
	{   
		Temporizador Temporizador;   // realizar la medicion
		
		for (int i = 0; i < 100000; i++)
			num++;

	}
	std::cout << "num = " << num << std::endl;


	std::cin.get();

	

}