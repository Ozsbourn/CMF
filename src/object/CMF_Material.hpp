#include <vector>

#ifndef CMF_MATERIAL_HPP_
#define CMF_MATERIAL_HPP_

namespace CMF {
	namespace Object {
		class Material {
		private:
			// Texture tex;
			std::vector<VertexTexture> vt;
		public:
			inline explicit Material(void) = default;
			// inline explicit Material();

			inline ~Material(void);
		};
	};
};

#endif // CMF_MATERIAL_HPP_