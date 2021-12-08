#include "..\errorhandler\CMF_Error.hpp"
#include "..\errorhandler\CMF_ErrorHandler.hpp"
#include "..\object\CMF_Model.hpp"

#ifndef CMF_VIEWPORT_HPP_
#define CMF_VIEWPORT_HPP_

namespace CMF {
	namespace VP {
		class ViewPort : public ICMFApp {
		public:
			inline explicit ViewPort(void) = default;

			inline err_t InitRender(void);

			inline err_t Render(const mdl_t& model) const;
			inline err_t Render(const mdl_t& model, const mtl_t& texture) const;
		
			inline ~ViewPort(void) = default;
		};
	};
};

#endif // CMF_VIEWPORT_HPP_