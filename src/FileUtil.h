#include <string>
#include <fstream>

namespace Util
{

	namespace FileUtil
	{

		//istreambuf_iterator<char>����������Ļ���������ֱ�Ӷ�ȡ��һ���ַ���������ȷ��˵��һ��istreambuf_iterator<char> �����һ��istream s�ж�ȡ�����s.rdbuf()->sgetc()����s����һ���ַ�����
		std::string loadFile(const std::string& filepath)
		{
			std::ifstream input(filepath.c_str());
			std::string content(istreambuf_iterator<char>(input), istreambuf_iterator<char>());
			return content;
		}
	}


}