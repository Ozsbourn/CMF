#include <vector>
#include "CMF_Mesh.hpp"

#ifndef CMF_MODEL_HPP_
#define CMF_MODEL_HPP_

namespace CMF {
	namespace Object {
		class Model {
		private:
			std::vector<Mesh> m_mdl;
			//Material m_mtl;
		public:
			inline explicit Model(void) = default;
			// inline explicit Model(Mesh mdl, Material mtl);
			inline explicit Model(Mesh mdl);

			inline ~Model(void);
		};
	};
};

#endif // CMF_MODEL_HPP_