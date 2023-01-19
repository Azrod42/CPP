#include"Bureaucrat.hpp"
#include"Form.hpp"

int	main(void){
	
	Bureaucrat i("David", 5);
	Form f1("Augmentation bechir", 120, 6);
	Form f2("Augmentation abou", 120, 4);

	std::cout << i << std::endl;
	std::cout << f1 << std::endl;

	i.signForm(f1);
	i.signForm(f1);
	i.signForm(f2);

	try {
		Form f3("Augmentation alex", 151, 4);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try {
		Form f4("Augmentation alex", 0, 4);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try {
		Form f5("Augmentation alex", 6, 151);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
		try {
		Form f6("Augmentation alex", 6, 0);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	// std::cout << m.getGrade() << std::endl;
	// std::cout << n.getGrade() << std::endl;
}