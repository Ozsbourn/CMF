#include "CMF_VertexTexture.hpp"

namespace CMF {
	namespace Object {
		inline VertexTexture::VertexTexture(float x, float y) : m_x(x), m_y(y) {}

		inline float VertexTexture::getXComponent(void) const {
			return this->m_x;
		}

		inline float VertexTexture::getYComponent(void) const {
			return this->m_y;
		}
	};
};