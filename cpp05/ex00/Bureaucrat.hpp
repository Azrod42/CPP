#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif

class  Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);

		std::string	getName() const;
		int 		getGrade() const;
		void		upgrade();
		void		downgrade();
	
		Bureaucrat 		&operator=(const Bureaucrat &copy);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Bureaucrat::exception : Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Bureaucrat::exception : Grade is too low");
				}
		};

	private:
		const std::string	_name;
		int 				_grade;
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);	

#endif