#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"Form.hpp"

int	main(void){
	
	Bureaucrat i("David", 5);
	Bureaucrat j("Bastien", 150);
	Form *f1 = new ShrubberyCreationForm("Jardin");
	Form *f2 = new PresidentialPardonForm("Francis");
	Form *f3 = new RobotomyRequestForm("Janno");
	
	try {
		i.executeForm(*f1);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	i.signForm(*f1);
	try {
		j.executeForm(*f1);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	i.executeForm(*f1);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	i.signForm(*f2);
	i.signForm(*f3);
	try {
		j.executeForm(*f2);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try {
		j.executeForm(*f3);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	i.executeForm(*f2);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	i.executeForm(*f3);
	i.executeForm(*f3);
	i.executeForm(*f3);
	i.executeForm(*f3);
}