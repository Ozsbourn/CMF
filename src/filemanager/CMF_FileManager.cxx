#include <utility>
#include "CMF_FileManager.hpp"
#include "errorhandler\CMF_Error.hpp"

namespace CMF {
	inline FileManager::FileManager(void) : m_name(nullptr), m_file(nullptr) {}

	inline FileManager::FileManager(const std::string& fileName) : m_name(fileName), m_file(nullptr) {}

	inline void FileManager::SaveHeader(void){
		m_file << m_info.fileSize;
		m_file << m_info.numberOfMaterialFiles;
		m_file << m_info->objectName;
		m_file << m_info->materialFileNames
	}

	inline err_t FileManager::SaveFile(const std::string& name){
		const register std::string identifier = "#CMF";

		std::fstream fout(const std::string& name, ios_base::out);
		if (fout.is_open() != true) {
			return ErrorID::FAILED_CREATE_CMF;
		} 
		m_file = std::move(fout);
		m_file << identifier;		

		this->SaveHeader();
		
		m_file.close();
		return ErrorID::SUCCESFULLY;
	}

	inline err_t FileManager::LoadFile(void){
		if (m_name == nullptr) {
			return ErrorID::NOT_SPEC_CMF;
		} else {
			std::ifstream fin(m_name, ios_base::in);

			if (fin == nullptr) {
				return ErrorID::FAILED_OPENING_CMF;
			} else {
				m_file = std::move(fin);
				return ErrorID::SUCCESFULLY;
			}
		}	
	}

	inline void FileManager::ParseHeader(void){
		m_file >> m_info.fileSize;
		m_file >> m_info.numberOfMaterialFiles;

		std::string tmp;
		m_file >> tmp;
		m_info.objectName  = new string;
		m_info->objectName = std::move(tmp);
		
		for (size_t i = m_info.numberOfMaterialFiles; i != 0; i--) {
			m_file >> tmp;
			m_info.materialFileNames  = new string;
			m_info->materialFileNames = std::move(tmp);
		}
	}

	inline err_t FileManager::ParseFile(void){
		std::string identifier;
		m_file >> identifier;

		if (identifier != "#CMF") {
			return ErrorID::NOTICED_FILE_NOT_CMF;
		}

		this->ParseHeader();

		std::vector<Vertex>  vertexes;
		std::vector<Polygon> polygons;

		std::string tmp;
		size_t numberOfRows;
		m_file >> tmp;
		if (tmp == "v") {
			m_file >> numberOfRows;
			for (size_t i = numberOfRows; i != 0; i--) {
				float x, y, z;
				m_file >> x; m_file >> y; m_file >> z;
				vertexes.push_back(Vertex(x, y, z));
			}
		}

		m_file >> tmp;
		if (tmp == "f") {
			m_file >> numberOfRows;
			for (size_t i = numberOfRows; i != 0; i--) {
				size_t v1, v2, v3;
				m_file >> v1; m_file >> v2; m_file >> v3;
				polygons.push_back(Polygon(vertexes[v1], vertexes[v2], vertexes[v3]));
			}
		}

		m_file.close();
		return ErrorID::SUCCESFULLY;
	}
};