#include <fstream>
#include <string>
#include <ctime>
#include "CMF_ErrorHandler.hpp"

inline void ErrorHandler::OpenLogFile(void){
	std::time_t curTime = std::time(0);
	std::tm* local = std::localtime(&t);
	std::cout << put_time(local, "%D") << std::endl;
	// this->m_logFile = fopen(m_LOG_FILENAME, ios_base::app);
}

inline void LogLastError(void){
	
}

inline std::string GetLastError(void){
	return std::string("ok");
}

inline void FlushLastError(void){
	this->m_lastError = 0;
}

inline void CloseLogFile(void){
	if (m_logFile.is_open() == true) {
		m_logFile.close();
	}
}
