#include "PlugIn.h"
#ifndef __YOU_DLL_H__
#define __YOU_DLL_H__
namespace ASE
{
	class you_dll :
		public PlugIn
	{
	public:
		you_dll();
		bool Run();
		~you_dll();
	private:

	};

}
#endif // !__YOU_DLL_H__


