#ifndef FORM_HPP
# define FORM_HPP

# include"Bureaucrat.hpp"
# ifndef IOSTREAM
#  define IOSTREAM
#  include<iostream>
# endif

class Bureaucrat;

class  Form {
	public:
		Form();
		Form(const std::string name, const int gradeexe, const int gradesign);
		Form(const Form &copy);
		virtual ~Form();

		Form 		&operator=(const Form &copy);

		void				beSigned(const Bureaucrat &employe);
		virtual void		execute(const Bureaucrat &executor) const = 0;
		int					getExe() const;
		int					getSign() const;
		const std::string	getName() const;
		int					isSign() const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Form::exception : Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Form::exception : Grade is too low");
				}
		};
		class AlreadySignedForm : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Form::exception : Form already signed");
				}
		};
		class NotSigned : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Form::exception : Form no signed");
				}
		};
		class ErrorOpeningFile : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Form::exception : Error file open");
				}
		};

	private:
		const std::string	_name;
		bool				_signed;
		int 				_gradeexec;
		int 				_gradesign;
};

std::ostream	&operator<<(std::ostream &o, const Form &Form);	

#endif