#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string replace(const std::string& str, const std::string& s1, const std::string& s2)
{
	std::string result;
	size_t 		pos = 0;
	size_t 		found;

	if (s1.empty())
		return str;

	while (pos < str.length())
	{
		found = str.find(s1, pos);
		if (found == std::string::npos)
		{
			result += str.substr(pos);
			break;
		}
		result += str.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	return result;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "usage ./sed_is_for_losers filename s1 s2" << std::endl;
		return (1);
	}

	std::ifstream 	inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: input_file cannot open." << std::endl;
		return (1);
	}

	std::string	outFilename = std::string(argv[1]) + ".replace";
	std::ofstream	outFile(outFilename.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: output_file cannot open." << std::endl;
		return (1);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	std::stringstream ss;
	ss << inputFile.rdbuf();
	std::string content = ss.str();

	std::string result = replace(content, s1, s2);
	outFile << result;

	inputFile.close();
	outFile.close();
	
	return 0;
}
