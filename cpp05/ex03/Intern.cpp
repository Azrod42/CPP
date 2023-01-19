 #include"Intern.hpp"

Intern::Intern(){
	return ;
}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy) {
	(void)copy;
	return (*this);
}

Intern::~Intern() {
	return ;
}

Form	*Intern::makeForm(const std::string name, const std::string target) const {
	t_func tab[] = {{"presidential pardon", new PresidentialPardonForm(target)}, {"robotomy request", new RobotomyRequestForm(target)}, {"shrubbery creation", new ShrubberyCreationForm(target)}}; 
	Form *ret = NULL;

	for(int i = 0; i < 3; i++) {
		if (tab[i].name == name)
			ret = tab[i].form;
		else
			delete tab[i].form;
	}
	ret == NULL ? std::cout << "Unknow form type : " << name << std::endl : std::cout << "Intern creates " << name << std::endl;
	return (ret);
}
