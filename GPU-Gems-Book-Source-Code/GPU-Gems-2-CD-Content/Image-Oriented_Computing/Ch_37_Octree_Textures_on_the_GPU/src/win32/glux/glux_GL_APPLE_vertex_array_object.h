
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:32 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_APPLE_vertex_array_object__
#define __GLUX_GL_APPLE_vertex_array_object__

GLUX_NEW_PLUGIN(GL_APPLE_vertex_array_object);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_VERTEX_ARRAY_BINDING_APPLE
#  define GL_VERTEX_ARRAY_BINDING_APPLE 0x85B5
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glBindVertexArrayAPPLE
typedef void (APIENTRYP PFNGLUXBINDVERTEXARRAYAPPLEPROC) (GLuint array);
#endif
#ifndef __GLUX__GLFCT_glDeleteVertexArraysAPPLE
typedef void (APIENTRYP PFNGLUXDELETEVERTEXARRAYSAPPLEPROC) (GLsizei n, const GLuint *arrays);
#endif
#ifndef __GLUX__GLFCT_glGenVertexArraysAPPLE
typedef void (APIENTRYP PFNGLUXGENVERTEXARRAYSAPPLEPROC) (GLsizei n, const GLuint *arrays);
#endif
#ifndef __GLUX__GLFCT_glIsVertexArrayAPPLE
typedef GLboolean (APIENTRYP PFNGLUXISVERTEXARRAYAPPLEPROC) (GLuint array);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glBindVertexArrayAPPLE
extern PFNGLUXBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE;
#endif
#ifndef __GLUX__GLFCT_glDeleteVertexArraysAPPLE
extern PFNGLUXDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE;
#endif
#ifndef __GLUX__GLFCT_glGenVertexArraysAPPLE
extern PFNGLUXGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE;
#endif
#ifndef __GLUX__GLFCT_glIsVertexArrayAPPLE
extern PFNGLUXISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
