 #include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("Unknow"){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
	*this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	(void)copy;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

void	PresidentialPardonForm::execute(const Bureaucrat  &executor) const{
	if (!this->Form::isSign())
		throw NotSigned();
	if(executor.getGrade() > this->Form::getExe())
		throw GradeTooLowException();
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}