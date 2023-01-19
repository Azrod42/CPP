 #include"Form.hpp"

Form::Form() : _name("Unknow"), _signed(0), _gradeexec(150), _gradesign(150){
	return ;
}

Form::Form(const std::string name, const int gradeexe, const int gradesign) : _name(name), _signed(0){
	if (gradeexe > 150 || gradesign > 150)
		throw GradeTooLowException();
	if (gradeexe <= 0 || gradesign <= 0)
		throw GradeTooHighException();
	this->_gradeexec = gradeexe;
	this->_gradesign = gradesign;
}

Form::Form(const Form &copy) {
	*this = copy;
}

Form &Form::operator=(const Form &copy) {
	this->_gradeexec = copy._gradeexec;
	this->_gradesign = copy._gradesign;
	this->_signed = copy._signed;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Form &Form)
{
	std::string sign;

	if (Form.isSign() == 1)
		sign = "signed";
	else
		sign = "not signed";
	o << "Form " << Form.getName() << ", is : " << sign << ". Grade to sign : " << Form.getSign() << ", grade to execute : " << Form.getExe() << std::endl;
	return (o);
}

Form::~Form() {
	return ;
}

std::string	Form::getName() const {
	return (this->_name);
}

int			Form::getExe() const {
	return (this->_gradeexec);
}

int			Form::getSign() const {
	return (this->_gradesign);
}

int	Form::isSign() const{
	if (!this->_signed)
		return (0);
	return (1);
}

void	Form::beSigned(const Bureaucrat &employe) {
	if (employe.getGrade() > this->getSign())
		throw GradeTooLowException();
	if (this->_signed == true)
		throw AlreadySignedForm();
	this->_signed = true;
}