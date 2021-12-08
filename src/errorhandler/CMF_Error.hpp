#include <cstddef>

#ifndef CMF_ERROR_HPP_
#define CMF_ERROR_HPP_

namespace CMF {
	using err_t = size_t;

	enum class ErrorID {
		SUCCESSFULLY 		 = 0,

		// FileManager Errors
		NOT_SPEC_CMF 		 = 1,
		FAILED_OPENING_CMF   = 2,
		FAILED_SAVING_CMF	 = 3,
		NOTICED_FILE_NOT_CMF = 4

		// Viewport Errors

		// Internal Errors
	};

	// class enum ErrorDescriptions {
	// 	"No Error!",						// errID = 0

	// 	"Not specified a *.cmf file!",		// errID = 1
	// 	"Failed to open a *.cmf file!",		// errID = 2
	// 	"Failed to save a *.cmf file!",		// errID = 3
	// 	"Noticed file isn't a *.cmf file!"	// errID = 4
	// };
};

#endif // CMF_ERROR_HPP_