#include "CMF_Vertex.hpp"

namespace CMF {
	namespace Object {
		inline Vertex::Vertex(float x = 0.0f, float y = 0.0f, float z = 0.0f) 
		: m_x(x), m_y(y), m_z(z) {}

		inline float Vertex::getXComponent(void) const {
 			return this->m_x;
		}

		inline float Vertex::getYComponent(void) const {
			return this->m_y;
		}

		inline float Vertex::getZComponent(void) const {
			return this->m_z;
		}

		inline void Vertex::operator()(float x, float y, float z){
			this->m_x = x;
			this->m_y = y;
			this->m_z = z;
		}
	};
};

