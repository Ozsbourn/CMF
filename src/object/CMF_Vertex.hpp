#ifndef CMF_VERTEX_HPP_
#define CMF_VERTEX_HPP_

namespace CMF {
	namespace Object {
		class Vertex {
		private:
			float m_x;
			float m_y;
			float m_z;
		public:
			inline explicit Vertex(void) = default;
			inline explicit Vertex(float x, float y, float z);

			inline float 	getXComponent(void) const;
			inline float 	getYComponent(void) const;
			inline float 	getZComponent(void) const;

			inline void operator()(float x, float y, float z);

			inline ~Vertex(void) = default;
		};
	};
};

#endif // CMF_VERTEX_HPP_