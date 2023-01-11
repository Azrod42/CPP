#include <fstream>
#include <iostream>
#include <cstdio>
#include <string>

void ft_replace(std::string& line, std::string& replace, std::string& to_find)
{
	std::string buf;
	std::size_t pos = 0;
	// std::size_t oldpos;
	while (true){
		buf.reserve(line.size() + replace.size());
		buf.clear();
		// oldpos = pos;
		pos = line.find(to_find, pos);
		if (pos == std::string::npos)
			break;	
		buf.append(line, 0, pos);
		buf += replace;
		buf.append(line, pos + to_find.size(), 1000);
		line.swap(buf);
	}
}


int main(int argc, char **argv)
{
	std::string	to_find;
	std::string replace;
	std::ifstream file;
	std::ofstream out;
	std::string retfile;
	
	if (argc != 4)
	{
		std::cout << "Usage ./ex04 [filename] [ToReplace(.size() > 1)] [ReplaceBy]" << std::endl;
		return (1);
	}
	retfile = argv[1];
	to_find = argv[2];
	std::cout << to_find << std::endl;
	if (to_find.size() < 1)
	{
		std::cout << "Usage ./ex04 [filename] [ToReplace(.size() > 1)] [ReplaceBy]" << std::endl;
		return (1);
	}
	replace = argv[3];
	retfile += ".replace";
	std::remove(retfile.c_str());
	out.open(retfile, std::ios::app);
	file.open(argv[1]);
	for (std::string line; getline(file, line); ){
		ft_replace(line, replace, to_find);
		line += '\n';
		out << line;
	}
	return (0);
}
