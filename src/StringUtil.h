#include <string>
#include <boost/locale.hpp>

namespace Util
{
	namespace StringUtil
	{

		std::string gbk2utf8(const std::string& strgbk)
		{
			return boost::locale::conv::to_utf<char>(strgbk.c_str(), std::string("gb2312"));
		}

	}

}