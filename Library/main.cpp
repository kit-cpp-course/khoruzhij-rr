#include <fstream>
#include "Dungeon.h"

int main()
{
	
    std::ofstream out("filename.txt");
	//if (!out.is_open()) // ���� ���� �� ������
		//std::cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
	//std::cout << "Enter width and height of the dungeon" << std::endl << "width";
	//std::cin 
	Dungeon d(79, 24);
	d.generate(50);
	d.print(out);

	std::cout << "Press Enter to quit... ";
	std::cin.get();

	return 0;
}