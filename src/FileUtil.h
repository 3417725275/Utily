#include <string>
#include <fstream>

namespace Util
{

	namespace FileUtil
	{

		//istreambuf_iterator<char>对象进入流的缓冲区，并直接读取下一个字符。（更明确地说，一个istreambuf_iterator<char> 对象从一个istream s中读取会调用s.rdbuf()->sgetc()来读s的下一个字符。）
		std::string loadFile(const std::string& filepath)
		{
			std::ifstream input(filepath.c_str());
			std::string content(istreambuf_iterator<char>(input), istreambuf_iterator<char>());
			return content;
		}
	}


}