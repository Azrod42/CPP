 #include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("Unknow"){
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
	*this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	(void)copy;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

void	RobotomyRequestForm::execute(const Bureaucrat  &executor) const{
	int rand = std::rand() % 2;

	if (!this->Form::isSign())
		throw NotSigned();
	if(executor.getGrade() > this->Form::getExe())
		throw GradeTooLowException();
	if (rand)
		std::cout << "bzzzzzZzzzZZZZZ " << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "bzzzzzZzzzZZZZZ " << this->_target << " has not been robotomized" << std::endl;
}