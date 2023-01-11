#include<iostream>

int	main(void){
	std::string str;
	std::string *stringPTR;
	
	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << ": this is str" << std::endl;
	std::cout << stringPTR << ": this is str ptr" << std::endl;
	std::cout << &stringREF << ": this is str ref adress" << std::endl << std::endl;
	std::cout << str << ": this is str" << std::endl;
	std::cout << *stringPTR << ": this is str ptr" << std::endl;
	std::cout << stringREF << ": this is str ref adress" << std::endl;
	return (0);
}
