#include <fstream>
#include "Dungeon.h"

int main()
{
	int width, height, feature;
	char* nameFile;
	//std::cout <<"Enter "

	
    std::ofstream out("filename.txt");
	//if (!out.is_open()) // если файл не открыт
		//std::cout << "File can't be open!\n"; // сообщить об этом
	/*std::cout << "Enter width and height of the dungeon" << std::endl << "Width: ";
	std::cin >> width;
	std::cout << std::endl << "Height: ";
	std::cin >> height;
	std::cout << std::endl << "Enter the number of features: ";
	std::cin >> feature;*/
	Dungeon d(49, 50);
	d.generate(50);
	d.print(out);

	std::cout << "Press Enter to quit... ";
	std::cin.get();

	return 0;
}