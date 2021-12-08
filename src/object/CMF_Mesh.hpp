#include <vector>
#include "CMF_Polygon.hpp"

#ifndef CMF_MESH_HPP_
#define CMF_MESH_HPP_

namespace CMF {
	namespace Object {
		class Mesh {
		private:
			std::vector<Polygon> m_obj;
		public:
			inline explicit Mesh(void) = default;
			inline explicit Mesh(const std::vector<Polygon>& obj);

			inline ~Mesh(void) = default;
		};
	};
};

#endif // CMF_MESH_HPP_