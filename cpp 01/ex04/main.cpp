#include <fstream>
#include <iostream>
#include <string>

void ft_replace(std::string& line, std::string& replace, std::string& to_find)
{
	std::string buf;
	std::size_t pos = 0;
	std::size_t oldpos;
	while (true){
		buf.reserve(line.size() + replace.size());
		buf.clear();
		oldpos = pos;
		pos = line.find(to_find, pos);
		if (pos == std::string::npos)
			break;	
		buf.append(line, 0, pos);
		buf += replace;
		buf.append(line, pos + to_find.size(), 100);
		line.swap(buf);
	}
}


int main(int argc, char **argv)
{
	std::string	to_find(argv[2]);
	std::string replace(argv[3]);
	std::ifstream file;

	if (argc != 4 || to_find.size() < 1)
	{
		std::cout << "Usage ./ex04 [filename] [ToReplace] [ReplaceBy(.size() > 1)]" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	for (std::string line; getline(file, line); ){
		ft_replace(line, replace, to_find);
		std::cout << line << std::endl;
	}
	return (0);
}
