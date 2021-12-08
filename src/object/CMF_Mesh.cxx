#include <utility>
#include "CMF_Mesh.hpp"

namespace CMF {
	namespace Object {
		inline Mesh::Mesh(const std::vector<Polygon>& obj){
			m_obj = std::move(obj);
		}
	};
};

