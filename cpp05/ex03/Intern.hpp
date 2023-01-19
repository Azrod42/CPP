#ifndef INTERN_HPP
# define INTERN_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class  Intern {
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();

		Intern 		&operator=(const Intern &copy);

		Form	*makeForm(const std::string name, const std::string target) const ;
	private:
		typedef struct s_func {
			std::string name;
			Form		*form;
		} t_func;

};

std::ostream	&operator<<(std::ostream &o, const Intern &Intern);	

#endif