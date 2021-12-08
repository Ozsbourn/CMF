#include "CMF_Polygon.hpp"

namespace CMF {
	namespace Object {
		inline Polygon::Polygon(Vertex a, Vertex b, Vertex c){
			this->m_comp[0] = a;
			this->m_comp[1] = b;
			this->m_comp[2] = c; 
		}	
	};
};