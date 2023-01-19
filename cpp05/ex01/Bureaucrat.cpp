 #include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("David"), _grade(150){
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name){
	if (grade > 150)
		throw GradeTooLowException();
	if (grade <= 0)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	this->_grade = copy._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << bureaucrat.getName() << ", grade " << bureaucrat.getGrade();
	return (o);
}

Bureaucrat::~Bureaucrat() {
	return ;
}

std::string	Bureaucrat::getName() const {
	return (this->_name); 
}

int			Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::upgrade() {
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::downgrade() {
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form &form) {

	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl; 
	}
	catch (std::exception &e){
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl; 
	}
}