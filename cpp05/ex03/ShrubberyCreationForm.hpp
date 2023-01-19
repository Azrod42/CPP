#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
# ifndef FSTEAM 
#  define FSTEAM 
#  include<fstream>
# endif
#include"Form.hpp"

class  ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(const std::string target);
		virtual ~ShrubberyCreationForm();

		void	execute(const Bureaucrat  &executor) const;
	
		ShrubberyCreationForm 		&operator=(const ShrubberyCreationForm &copy);

	private:
		const std::string	_target;
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
};

std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &ShrubberyCreationForm);	

#endif