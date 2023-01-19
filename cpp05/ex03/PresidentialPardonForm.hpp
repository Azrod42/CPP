#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif
#include"Form.hpp"

class  PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(const std::string target);
		virtual ~PresidentialPardonForm();

		void	execute(const Bureaucrat  &executor) const;
	
		PresidentialPardonForm 		&operator=(const PresidentialPardonForm &copy);

	private:
		const std::string	_target;
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);
};

std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &PresidentialPardonForm);	

#endif