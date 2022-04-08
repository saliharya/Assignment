#include <iostream>
#include <fstream>
#include "../library/input.h"

int main(){
	Input input;
	input.menu();
	input.cetak();
	input.toFile();
	return 0;
}
