
#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;
	if (argc == 2)
		harl.complain(argv[1]);
	else
		harl.complain("irrelevant string");
	return (0);
}
