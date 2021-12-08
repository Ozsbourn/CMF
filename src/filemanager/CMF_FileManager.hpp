#include <fstream>
#include <string>
#include "..\errorhandler\CMF_Error.hpp"

#ifndef CMF_FILEMANAGER_HPP_
#define CMF_FILEMANAGER_HPP_

namespace CMF {
	struct CMFHeader {
		size_t 		 fileSize;
		size_t 		 numberOfMaterialFiles;
		std::string* objectName;
		std::string* materialFileNames;
	}; 

	class FileManager : public ICMFApp {
	private:
		std::string  m_name;
		std::fstream m_file;
		CMFHeader 	 m_info;
	public:
		inline explicit FileManager(void) = default;
		inline explicit FileManager(const std::string& fileName);

		inline err_t SaveFile(const std::string& name);
		inline void  SaveHeader(void);

		inline err_t LoadFile(void);

		inline void ParseHeader(void);
		inline err_t  ParseFile(void);

		inline ~FileManager(void) = default;
	};
};

#endif // CMF_FILEMANAGER_HPP_