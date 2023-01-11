#include"Harl.hpp"

int main(int argc, char **argv)
{
	std::string filter;
	std::size_t i;
	Harl relou;

	if (argc != 2)
	{
		std::cout << "Usage : ./ex06 [DEBUG / INFO / WARNING / ERROR]" << std::endl;
		return (1);
	}
	filter = argv[1];
	i = relou.HarlFilter(filter);
	switch (i) {
	case 1:
		std::cout << "Probably complaining about insignificant problems" << std::endl;
		return (1);
		break;
	default:
		break;
	}
	relou.complain("DEBUG");
	relou.complain("INFO");
	relou.complain("WARNING");
	relou.complain("ERROR");
	relou.complain("RANDOM");
	relou.complain("");
return 0;
}
