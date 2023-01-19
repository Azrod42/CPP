#include"Bureaucrat.hpp"

int	main(void){
	
	Bureaucrat i("David", 5);


	std::cout << i.getName() << std::endl; 
	std::cout << i.getGrade() << std::endl; 
	try {
		i.upgrade();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << i << std::endl; 


	for (int j = 0; j < 3; j++) {
		try {
			i.upgrade();
			std::cout << i << std::endl; 
		}
		catch (std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}


	try {
		i.upgrade();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << i << std::endl; 

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Bureaucrat p("Francis", 146);


	std::cout << p.getName() << std::endl; 
	std::cout << p.getGrade() << std::endl; 
	try {
		p.downgrade();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << p.getGrade() << std::endl; 


	for (int j = 0; j < 3; j++) {
		try {
			p.downgrade();
			std::cout << p.getGrade() << std::endl; 
		}
		catch (std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}


	try {
		p.downgrade();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << p.getGrade() << std::endl; 


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	try {
		Bureaucrat m("Thomas", 151);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat n("Francis", 0);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	// std::cout << m.getGrade() << std::endl;
	// std::cout << n.getGrade() << std::endl;
}