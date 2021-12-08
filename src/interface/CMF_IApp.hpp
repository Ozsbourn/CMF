#include "..\errorhandler\CMF_Error.hpp"

#ifndef CMF_IAPP_HPP_
#define CMF_IAPP_HPP_

namespace CMF {
	class ICMFApp {
	public:
		// err_t InitRender(void) = 0;
		// err_t Render(void) 	   = 0;

		virtual err_t LoadFile(void)   = 0;
		virtual err_t ParseFile(void)  = 0;
		virtual err_t SaveFile(void)   = 0;
	};
};

#endif // CMF_IAPP_HPP_