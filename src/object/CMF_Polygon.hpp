#include "CMF_Vertex.hpp"

#ifndef CMF_POLYGON_HPP_
#define CMF_POLYGON_HPP_

namespace CMF {
	namespace Object {
		class Polygon {
		private:
			Vertex m_comp[3];
		public:
			inline explicit Polygon(void) = default;
			inline explicit Polygon(Vertex a, Vertex b, Vertex c);

			inline ~Polygon(void) = default;
		};
	};
};

#endif // CMF_POLYGON_HPP_