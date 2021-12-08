#ifndef CMF_VERTEXTEXTURE_HPP_
#define CMF_VERTEXTEXTURE_HPP_

namespace CMF {
	namespace Object {
		class VertexTexture {
		private:
			float m_x;
			float m_y;
		public:
			inline explicit VertexTexture(void) = default;
			inline explicit VertexTexture(float x, float y);

			inline float	getXComponent(void) const;
			inline float 	getYComponent(void) const;

			inline ~VertexTexture(void);
		};
	};
};

#endif // CMF_VERTEXTEXTURE_HPP_