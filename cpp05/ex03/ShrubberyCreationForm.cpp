 #include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("Unknow"){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	(void)copy;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

void	ShrubberyCreationForm::execute(const Bureaucrat  &executor) const{
	std::ofstream out;

	if (!this->Form::isSign())
		throw NotSigned();
	if(executor.getGrade() > this->Form::getExe())
		throw GradeTooLowException();
	out.open((this->_target + "_shrubbery").c_str(), std::ios::out);
	if (out.good() == false)
		throw ErrorOpeningFile();
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⣸⣷⣦⡀⠀⠀⠀⠀⣿⢷⡄⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣧⡀⠀⠀⢹⣷⠈⢿⣆⠀⠀⠀⣿⠈⣿⡄⠀⠀⣀⡴⢶⣿⡟⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⣿⣇⠀⠀⠈⢻⣆⠘⣿⠀⠀⣀⣽⣧⣸⣿⣴⡞⣉⣰⡞⢻⡇⢸⡇⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⣶⣶⣷⣄⣿⠛⢷⣶⣿⣸⣿⣿⣤⣄⡀⠀⠉⠻⣿⣶⠞⢉⣽⡿⢿⣿⠛⠛⠋⠁⠀⢸⣇⣸⡿⢾⣿⡛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣌⣿⠀⠹⣿⣦⠀⠙⣿⣿⠛⢷⣄⠉⠻⣿⠀⣀⢻⣷⡶⠛⠁⠀⢠⡇⠀⢠⣴⡄⠀⢸⡟⣫⣼⣿⣟⣛⣛⣛⣷⣦⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣬⣿⣿⡄⠀⣿⡟⠛⠶⠾⣿⡄⠀⠙⠛⠲⢿⣷⣿⠘⣿⠀⠀⠀⠀⣼⠁⠀⢸⡇⢻⣾⡿⠛⠋⠁⠀⠉⠉⠉⣿⠁⣨⠿⠛⢛⣿⠟⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⢠⣿⣷⣄⠈⣿⣍⠉⠛⠿⣶⣿⠃⠀⠀⠀⢸⣧⡀⠀⠀⠀⠀⠉⣿⡇⢿⣇⠀⠀⠀⣿⠀⠀⢸⡇⣸⡏⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣡⡤⠾⠋⠁⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⢀⣀⣿⡆⢿⡄⠈⠛⠶⠶⠶⠾⠿⣷⣄⠀⠀⠈⣿⣇⠀⠀⠀⠀⠀⣿⡇⠀⢿⣦⡀⠀⣿⠀⠀⠈⣷⣏⡀⠀⠀⠀⠀⠀⢀⣠⣾⠟⠉⠁⠀⢀⣠⣴⠶⢶⣶⣄⠀⠀" << std::endl;
out << "⠀⠀⠀⢸⣿⠻⣿⣼⡇⠀⠀⠀⠀⠀⠀⠀⠈⠻⢷⣦⣀⠘⢿⣆⠀⠀⠀⠀⣿⡇⠀⠀⠹⣧⣀⣿⠀⢠⡼⣿⡏⠻⣦⡀⢀⣤⣴⣿⣿⣥⣤⣤⣤⡶⣿⣿⡷⠶⠞⠛⠉⠀⠀" << std::endl;
out << "⠀⠀⠀⠈⢿⣄⠈⢻⡇⠀⢀⣤⣶⣶⣦⡤⠀⠀⠀⠈⠛⠻⢿⣿⣷⣄⠀⠀⣿⡇⠀⠀⠀⢻⣿⣿⡾⠋⢠⣾⣷⣄⢸⡏⠉⠉⠀⠀⠀⠀⠀⠉⠻⣷⣄⠉⢻⣦⡄⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⢸⡿⣿⣿⠶⣤⣿⣾⡿⣤⣤⠾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⣷⣄⣿⣿⠀⠀⠀⠈⣿⣿⠀⠀⣸⠏⢹⡏⠛⣿⠀⠀⠀⠀⠀⠀⢀⣀⡴⠟⠉⠛⠻⠿⠇⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⢸⣧⠈⢿⣆⠀⠈⢿⣧⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠙⢿⣿⣿⡄⠀⠀⠀⢹⣿⣤⠾⢻⡆⠸⣇⠀⠀⣀⣀⣀⣤⠶⠾⣿⡛⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠹⣷⣬⣿⠀⠀⠀⠹⣷⣄⡀⢀⣴⣾⣛⣩⣿⠟⠁⠀⠀⠀⠀⠀⠀⢻⣿⣿⠀⢀⣤⣿⣿⠋⠀⠈⢳⣴⣿⡶⠿⠛⠉⠉⠀⠀⠀⠈⠿⣦⣙⣷⡄⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠙⣿⣤⣀⡀⠀⠀⠙⢿⣮⣉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣶⡿⠋⢹⣿⠀⣠⣶⠟⠻⢷⣤⣤⣀⣀⣀⣤⣄⡀⠀⠀⠀⠉⠉⠀⠀⢀⣤⡴⢶⡆⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⠛⠿⠷⠾⠿⣿⣦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡿⠁⠀⢸⣿⣿⠋⠀⠀⠀⠀⠈⠉⠙⠛⠙⢻⡈⠛⣷⣄⠀⠀⢀⣴⣾⣯⣴⠾⠛⠃⠀" << std::endl;
out << "⢀⣀⡀⠀⠀⠀⠀⣀⣤⡶⣦⣄⣀⠀⠀⠀⠉⠻⠿⢿⣿⣿⣿⣿⣿⣶⣦⣤⣀⢸⣿⣇⠀⠀⣾⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣷⣦⣨⣿⠶⢾⣿⣿⠿⠿⣦⣀⡀⠀⠀" << std::endl;
out << "⢸⣏⡙⢷⣦⡀⠈⠽⠶⠶⠶⠿⢿⣀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠙⢿⣿⣿⣿⣿⠀⢀⣿⣿⠀⣀⣀⣀⣀⣤⣤⣶⡶⠾⢿⣟⢿⡍⠉⠀⢀⣿⣿⠉⠳⠶⣄⣹⣷⡄⠀" << std::endl;
out << "⠀⠙⠷⣶⣾⣿⠀⠀⠀⠀⠀⠀⠀⠙⢿⣦⣤⣤⣀⣀⣀⣠⣤⣤⣤⣤⣀⠀⠙⢿⣿⡟⠀⣼⣿⣿⣿⢿⣿⣿⣟⠛⠛⠉⠀⠀⢈⣿⠀⣿⣄⣀⣿⡏⣼⡇⠀⠀⠀⠉⠉⠀⠀" << std::endl;
out << "⠀⠀⠀⢈⣟⠻⢷⣦⣤⣤⣤⣤⣤⣤⡶⠿⠿⠛⠛⠛⠛⠋⠙⠛⠛⠻⢿⣿⣦⣼⣿⣇⣼⣿⠛⠁⠀⠀⠀⠉⠛⠛⢻⣿⣿⠛⠛⠻⣷⣿⠋⠉⠻⣿⣿⣧⣤⣶⡶⠶⣤⣄⡀" << std::endl;
out << "⠀⠀⢀⣾⠿⣦⠀⠀⠀⠀⠀⠀⣠⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⢸⡟⢹⣷⠀⠀⠀⠉⠀⠀⠀⠉⠀⠻⣿⡈⠻⣶⣴⠿⠟" << std::endl;
out << "⠀⠀⢸⣇⢠⣿⠀⠀⠀⠀⠀⠀⣿⡜⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⢸⣇⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣦⣬⣷⡄⠀" << std::endl;
out << "⠀⠀⠈⠻⣾⡋⠀⠀⠀⠀⠀⠀⠘⢿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⡿⠛⠻⣿⣍⠛⠿⣿⣿⣷⣶⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
out << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⠿⠿⠛⠋⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠈⠹⠟⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
}