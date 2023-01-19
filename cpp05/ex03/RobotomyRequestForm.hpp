#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
# ifndef CTIME
#  define CTIME
# include <ctime>
# include <cstdlib>
# endif
#include"Form.hpp"

class  RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(const std::string target);
		virtual ~RobotomyRequestForm();

		void	execute(const Bureaucrat  &executor) const;
	
		RobotomyRequestForm 		&operator=(const RobotomyRequestForm &copy);

	private:
		const std::string	_target;
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
};

std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &RobotomyRequestForm);	

#endif