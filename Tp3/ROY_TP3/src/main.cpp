#include "main.hpp"

int main() {
#ifdef _WIN32
	// fixe l'affichage des accents dans la console sous windows
	SetConsoleOutputCP(65001);
#endif
	
	show_menu();
}