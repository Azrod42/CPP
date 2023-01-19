#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"Form.hpp"
#include"Intern.hpp"

int	main(void){
	
	Bureaucrat i("David", 5);
	Bureaucrat j("Bastien", 150);
	Intern slave;
	Form *f1 = slave.makeForm("shrubbery creation", "Jardin");
	Form *f2 = slave.makeForm("presidential pardon", "Alois");
	Form *f3 = slave.makeForm("robotomy request", "Denis");
	Form *f0 = slave.makeForm("c'est de la zouille", "francis");
	
	std::cout << std::endl;
	std::cout << std::endl;
	(void)f0;
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