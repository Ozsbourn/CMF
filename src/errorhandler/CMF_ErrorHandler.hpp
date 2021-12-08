#include <fstream>
#include "CMF_Error.hpp"

#ifndef CMF_ERRORHANDLER_HPP_
#define CMF_ERRORHANDLER_HPP_

namespace CMF {
	class ErrorHandler {
	private:
		err_t 		 m_lastError;
		std::fstream m_logFile;
	public:
		inline explicit ErrorHandler(void) = default;

		inline void OpenLogFile(void);

		inline void LogLastError(void);
		friend inline std::string GetLastError(void);
		inline void FlushLastError(void);

		inline void CloseLogFile(void);

		inline ~ErrorHandler(void);
	};
};

#endif // CMF_ERRORHANDLER_HPP_