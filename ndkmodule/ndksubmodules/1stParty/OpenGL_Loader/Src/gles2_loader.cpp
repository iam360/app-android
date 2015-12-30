#include <GLES2/gl2_loader.h>
#include <EGL/egl.h>
#include <dlfcn.h>
#include <pthread.h>
namespace GLES2
{

PFNGLACTIVETEXTUREPROC glActiveTexture = NULL;
PFNGLATTACHSHADERPROC glAttachShader = NULL;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = NULL;
PFNGLBINDBUFFERPROC glBindBuffer = NULL;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = NULL;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = NULL;
PFNGLBINDTEXTUREPROC glBindTexture = NULL;
PFNGLBLENDCOLORPROC glBlendColor = NULL;
PFNGLBLENDEQUATIONPROC glBlendEquation = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate = NULL;
PFNGLBLENDFUNCPROC glBlendFunc = NULL;
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = NULL;
PFNGLBUFFERDATAPROC glBufferData = NULL;
PFNGLBUFFERSUBDATAPROC glBufferSubData = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = NULL;
PFNGLCLEARPROC glClear = NULL;
PFNGLCLEARCOLORPROC glClearColor = NULL;
PFNGLCLEARDEPTHFPROC glClearDepthf = NULL;
PFNGLCLEARSTENCILPROC glClearStencil = NULL;
PFNGLCOLORMASKPROC glColorMask = NULL;
PFNGLCOMPILESHADERPROC glCompileShader = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D = NULL;
PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D = NULL;
PFNGLCREATEPROGRAMPROC glCreateProgram = NULL;
PFNGLCREATESHADERPROC glCreateShader = NULL;
PFNGLCULLFACEPROC glCullFace = NULL;
PFNGLDELETEBUFFERSPROC glDeleteBuffers = NULL;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = NULL;
PFNGLDELETEPROGRAMPROC glDeleteProgram = NULL;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = NULL;
PFNGLDELETESHADERPROC glDeleteShader = NULL;
PFNGLDELETETEXTURESPROC glDeleteTextures = NULL;
PFNGLDEPTHFUNCPROC glDepthFunc = NULL;
PFNGLDEPTHMASKPROC glDepthMask = NULL;
PFNGLDEPTHRANGEFPROC glDepthRangef = NULL;
PFNGLDETACHSHADERPROC glDetachShader = NULL;
PFNGLDISABLEPROC glDisable = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = NULL;
PFNGLDRAWARRAYSPROC glDrawArrays = NULL;
PFNGLDRAWELEMENTSPROC glDrawElements = NULL;
PFNGLENABLEPROC glEnable = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = NULL;
PFNGLFINISHPROC glFinish = NULL;
PFNGLFLUSHPROC glFlush = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = NULL;
PFNGLFRONTFACEPROC glFrontFace = NULL;
PFNGLGENBUFFERSPROC glGenBuffers = NULL;
PFNGLGENERATEMIPMAPPROC glGenerateMipmap = NULL;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = NULL;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = NULL;
PFNGLGENTEXTURESPROC glGenTextures = NULL;
PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib = NULL;
PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform = NULL;
PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = NULL;
PFNGLGETBOOLEANVPROC glGetBooleanv = NULL;
PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = NULL;
PFNGLGETERRORPROC glGetError = NULL;
PFNGLGETFLOATVPROC glGetFloatv = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv = NULL;
PFNGLGETINTEGERVPROC glGetIntegerv = NULL;
PFNGLGETPROGRAMIVPROC glGetProgramiv = NULL;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv = NULL;
PFNGLGETSHADERIVPROC glGetShaderiv = NULL;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat = NULL;
PFNGLGETSHADERSOURCEPROC glGetShaderSource = NULL;
PFNGLGETSTRINGPROC glGetString = NULL;
PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv = NULL;
PFNGLGETUNIFORMFVPROC glGetUniformfv = NULL;
PFNGLGETUNIFORMIVPROC glGetUniformiv = NULL;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = NULL;
PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv = NULL;
PFNGLHINTPROC glHint = NULL;
PFNGLISBUFFERPROC glIsBuffer = NULL;
PFNGLISENABLEDPROC glIsEnabled = NULL;
PFNGLISFRAMEBUFFERPROC glIsFramebuffer = NULL;
PFNGLISPROGRAMPROC glIsProgram = NULL;
PFNGLISRENDERBUFFERPROC glIsRenderbuffer = NULL;
PFNGLISSHADERPROC glIsShader = NULL;
PFNGLISTEXTUREPROC glIsTexture = NULL;
PFNGLLINEWIDTHPROC glLineWidth = NULL;
PFNGLLINKPROGRAMPROC glLinkProgram = NULL;
PFNGLPIXELSTOREIPROC glPixelStorei = NULL;
PFNGLPOLYGONOFFSETPROC glPolygonOffset = NULL;
PFNGLREADPIXELSPROC glReadPixels = NULL;
PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler = NULL;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = NULL;
PFNGLSAMPLECOVERAGEPROC glSampleCoverage = NULL;
PFNGLSCISSORPROC glScissor = NULL;
PFNGLSHADERBINARYPROC glShaderBinary = NULL;
PFNGLSHADERSOURCEPROC glShaderSource = NULL;
PFNGLSTENCILFUNCPROC glStencilFunc = NULL;
PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate = NULL;
PFNGLSTENCILMASKPROC glStencilMask = NULL;
PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate = NULL;
PFNGLSTENCILOPPROC glStencilOp = NULL;
PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate = NULL;
PFNGLTEXIMAGE2DPROC glTexImage2D = NULL;
PFNGLTEXPARAMETERFPROC glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glTexParameteriv = NULL;
PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D = NULL;
PFNGLUNIFORM1FPROC glUniform1f = NULL;
PFNGLUNIFORM1FVPROC glUniform1fv = NULL;
PFNGLUNIFORM1IPROC glUniform1i = NULL;
PFNGLUNIFORM1IVPROC glUniform1iv = NULL;
PFNGLUNIFORM2FPROC glUniform2f = NULL;
PFNGLUNIFORM2FVPROC glUniform2fv = NULL;
PFNGLUNIFORM2IPROC glUniform2i = NULL;
PFNGLUNIFORM2IVPROC glUniform2iv = NULL;
PFNGLUNIFORM3FPROC glUniform3f = NULL;
PFNGLUNIFORM3FVPROC glUniform3fv = NULL;
PFNGLUNIFORM3IPROC glUniform3i = NULL;
PFNGLUNIFORM3IVPROC glUniform3iv = NULL;
PFNGLUNIFORM4FPROC glUniform4f = NULL;
PFNGLUNIFORM4FVPROC glUniform4fv = NULL;
PFNGLUNIFORM4IPROC glUniform4i = NULL;
PFNGLUNIFORM4IVPROC glUniform4iv = NULL;
PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = NULL;
PFNGLUSEPROGRAMPROC glUseProgram = NULL;
PFNGLVALIDATEPROGRAMPROC glValidateProgram = NULL;
PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = NULL;
PFNGLVIEWPORTPROC glViewport = NULL;

static bool           g_initialized = false;
static pthread_once_t g_once        = PTHREAD_ONCE_INIT;

template<typename T> inline T LoadGLFunction(const char *name)
{
  T proc = (T)eglGetProcAddress(name);
  if(!proc) proc = (T)dlsym(RTLD_NEXT, name);
  return proc;
}

static void LoadGLFunctionsInternal(void)
{
  if((glActiveTexture = LoadGLFunction<PFNGLACTIVETEXTUREPROC>("glActiveTexture"))==NULL) return;
  if((glAttachShader = LoadGLFunction<PFNGLATTACHSHADERPROC>("glAttachShader"))==NULL) return;
  if((glBindAttribLocation = LoadGLFunction<PFNGLBINDATTRIBLOCATIONPROC>("glBindAttribLocation"))==NULL) return;
  if((glBindBuffer = LoadGLFunction<PFNGLBINDBUFFERPROC>("glBindBuffer"))==NULL) return;
  if((glBindFramebuffer = LoadGLFunction<PFNGLBINDFRAMEBUFFERPROC>("glBindFramebuffer"))==NULL) return;
  if((glBindRenderbuffer = LoadGLFunction<PFNGLBINDRENDERBUFFERPROC>("glBindRenderbuffer"))==NULL) return;
  if((glBindTexture = LoadGLFunction<PFNGLBINDTEXTUREPROC>("glBindTexture"))==NULL) return;
  if((glBlendColor = LoadGLFunction<PFNGLBLENDCOLORPROC>("glBlendColor"))==NULL) return;
  if((glBlendEquation = LoadGLFunction<PFNGLBLENDEQUATIONPROC>("glBlendEquation"))==NULL) return;
  if((glBlendEquationSeparate = LoadGLFunction<PFNGLBLENDEQUATIONSEPARATEPROC>("glBlendEquationSeparate"))==NULL) return;
  if((glBlendFunc = LoadGLFunction<PFNGLBLENDFUNCPROC>("glBlendFunc"))==NULL) return;
  if((glBlendFuncSeparate = LoadGLFunction<PFNGLBLENDFUNCSEPARATEPROC>("glBlendFuncSeparate"))==NULL) return;
  if((glBufferData = LoadGLFunction<PFNGLBUFFERDATAPROC>("glBufferData"))==NULL) return;
  if((glBufferSubData = LoadGLFunction<PFNGLBUFFERSUBDATAPROC>("glBufferSubData"))==NULL) return;
  if((glCheckFramebufferStatus = LoadGLFunction<PFNGLCHECKFRAMEBUFFERSTATUSPROC>("glCheckFramebufferStatus"))==NULL) return;
  if((glClear = LoadGLFunction<PFNGLCLEARPROC>("glClear"))==NULL) return;
  if((glClearColor = LoadGLFunction<PFNGLCLEARCOLORPROC>("glClearColor"))==NULL) return;
  if((glClearDepthf = LoadGLFunction<PFNGLCLEARDEPTHFPROC>("glClearDepthf"))==NULL) return;
  if((glClearStencil = LoadGLFunction<PFNGLCLEARSTENCILPROC>("glClearStencil"))==NULL) return;
  if((glColorMask = LoadGLFunction<PFNGLCOLORMASKPROC>("glColorMask"))==NULL) return;
  if((glCompileShader = LoadGLFunction<PFNGLCOMPILESHADERPROC>("glCompileShader"))==NULL) return;
  if((glCompressedTexImage2D = LoadGLFunction<PFNGLCOMPRESSEDTEXIMAGE2DPROC>("glCompressedTexImage2D"))==NULL) return;
  if((glCompressedTexSubImage2D = LoadGLFunction<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>("glCompressedTexSubImage2D"))==NULL) return;
  if((glCopyTexImage2D = LoadGLFunction<PFNGLCOPYTEXIMAGE2DPROC>("glCopyTexImage2D"))==NULL) return;
  if((glCopyTexSubImage2D = LoadGLFunction<PFNGLCOPYTEXSUBIMAGE2DPROC>("glCopyTexSubImage2D"))==NULL) return;
  if((glCreateProgram = LoadGLFunction<PFNGLCREATEPROGRAMPROC>("glCreateProgram"))==NULL) return;
  if((glCreateShader = LoadGLFunction<PFNGLCREATESHADERPROC>("glCreateShader"))==NULL) return;
  if((glCullFace = LoadGLFunction<PFNGLCULLFACEPROC>("glCullFace"))==NULL) return;
  if((glDeleteBuffers = LoadGLFunction<PFNGLDELETEBUFFERSPROC>("glDeleteBuffers"))==NULL) return;
  if((glDeleteFramebuffers = LoadGLFunction<PFNGLDELETEFRAMEBUFFERSPROC>("glDeleteFramebuffers"))==NULL) return;
  if((glDeleteProgram = LoadGLFunction<PFNGLDELETEPROGRAMPROC>("glDeleteProgram"))==NULL) return;
  if((glDeleteRenderbuffers = LoadGLFunction<PFNGLDELETERENDERBUFFERSPROC>("glDeleteRenderbuffers"))==NULL) return;
  if((glDeleteShader = LoadGLFunction<PFNGLDELETESHADERPROC>("glDeleteShader"))==NULL) return;
  if((glDeleteTextures = LoadGLFunction<PFNGLDELETETEXTURESPROC>("glDeleteTextures"))==NULL) return;
  if((glDepthFunc = LoadGLFunction<PFNGLDEPTHFUNCPROC>("glDepthFunc"))==NULL) return;
  if((glDepthMask = LoadGLFunction<PFNGLDEPTHMASKPROC>("glDepthMask"))==NULL) return;
  if((glDepthRangef = LoadGLFunction<PFNGLDEPTHRANGEFPROC>("glDepthRangef"))==NULL) return;
  if((glDetachShader = LoadGLFunction<PFNGLDETACHSHADERPROC>("glDetachShader"))==NULL) return;
  if((glDisable = LoadGLFunction<PFNGLDISABLEPROC>("glDisable"))==NULL) return;
  if((glDisableVertexAttribArray = LoadGLFunction<PFNGLDISABLEVERTEXATTRIBARRAYPROC>("glDisableVertexAttribArray"))==NULL) return;
  if((glDrawArrays = LoadGLFunction<PFNGLDRAWARRAYSPROC>("glDrawArrays"))==NULL) return;
  if((glDrawElements = LoadGLFunction<PFNGLDRAWELEMENTSPROC>("glDrawElements"))==NULL) return;
  if((glEnable = LoadGLFunction<PFNGLENABLEPROC>("glEnable"))==NULL) return;
  if((glEnableVertexAttribArray = LoadGLFunction<PFNGLENABLEVERTEXATTRIBARRAYPROC>("glEnableVertexAttribArray"))==NULL) return;
  if((glFinish = LoadGLFunction<PFNGLFINISHPROC>("glFinish"))==NULL) return;
  if((glFlush = LoadGLFunction<PFNGLFLUSHPROC>("glFlush"))==NULL) return;
  if((glFramebufferRenderbuffer = LoadGLFunction<PFNGLFRAMEBUFFERRENDERBUFFERPROC>("glFramebufferRenderbuffer"))==NULL) return;
  if((glFramebufferTexture2D = LoadGLFunction<PFNGLFRAMEBUFFERTEXTURE2DPROC>("glFramebufferTexture2D"))==NULL) return;
  if((glFrontFace = LoadGLFunction<PFNGLFRONTFACEPROC>("glFrontFace"))==NULL) return;
  if((glGenBuffers = LoadGLFunction<PFNGLGENBUFFERSPROC>("glGenBuffers"))==NULL) return;
  if((glGenerateMipmap = LoadGLFunction<PFNGLGENERATEMIPMAPPROC>("glGenerateMipmap"))==NULL) return;
  if((glGenFramebuffers = LoadGLFunction<PFNGLGENFRAMEBUFFERSPROC>("glGenFramebuffers"))==NULL) return;
  if((glGenRenderbuffers = LoadGLFunction<PFNGLGENRENDERBUFFERSPROC>("glGenRenderbuffers"))==NULL) return;
  if((glGenTextures = LoadGLFunction<PFNGLGENTEXTURESPROC>("glGenTextures"))==NULL) return;
  if((glGetActiveAttrib = LoadGLFunction<PFNGLGETACTIVEATTRIBPROC>("glGetActiveAttrib"))==NULL) return;
  if((glGetActiveUniform = LoadGLFunction<PFNGLGETACTIVEUNIFORMPROC>("glGetActiveUniform"))==NULL) return;
  if((glGetAttachedShaders = LoadGLFunction<PFNGLGETATTACHEDSHADERSPROC>("glGetAttachedShaders"))==NULL) return;
  if((glGetAttribLocation = LoadGLFunction<PFNGLGETATTRIBLOCATIONPROC>("glGetAttribLocation"))==NULL) return;
  if((glGetBooleanv = LoadGLFunction<PFNGLGETBOOLEANVPROC>("glGetBooleanv"))==NULL) return;
  if((glGetBufferParameteriv = LoadGLFunction<PFNGLGETBUFFERPARAMETERIVPROC>("glGetBufferParameteriv"))==NULL) return;
  if((glGetError = LoadGLFunction<PFNGLGETERRORPROC>("glGetError"))==NULL) return;
  if((glGetFloatv = LoadGLFunction<PFNGLGETFLOATVPROC>("glGetFloatv"))==NULL) return;
  if((glGetFramebufferAttachmentParameteriv = LoadGLFunction<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>("glGetFramebufferAttachmentParameteriv"))==NULL) return;
  if((glGetIntegerv = LoadGLFunction<PFNGLGETINTEGERVPROC>("glGetIntegerv"))==NULL) return;
  if((glGetProgramiv = LoadGLFunction<PFNGLGETPROGRAMIVPROC>("glGetProgramiv"))==NULL) return;
  if((glGetProgramInfoLog = LoadGLFunction<PFNGLGETPROGRAMINFOLOGPROC>("glGetProgramInfoLog"))==NULL) return;
  if((glGetRenderbufferParameteriv = LoadGLFunction<PFNGLGETRENDERBUFFERPARAMETERIVPROC>("glGetRenderbufferParameteriv"))==NULL) return;
  if((glGetShaderiv = LoadGLFunction<PFNGLGETSHADERIVPROC>("glGetShaderiv"))==NULL) return;
  if((glGetShaderInfoLog = LoadGLFunction<PFNGLGETSHADERINFOLOGPROC>("glGetShaderInfoLog"))==NULL) return;
  if((glGetShaderPrecisionFormat = LoadGLFunction<PFNGLGETSHADERPRECISIONFORMATPROC>("glGetShaderPrecisionFormat"))==NULL) return;
  if((glGetShaderSource = LoadGLFunction<PFNGLGETSHADERSOURCEPROC>("glGetShaderSource"))==NULL) return;
  if((glGetString = LoadGLFunction<PFNGLGETSTRINGPROC>("glGetString"))==NULL) return;
  if((glGetTexParameterfv = LoadGLFunction<PFNGLGETTEXPARAMETERFVPROC>("glGetTexParameterfv"))==NULL) return;
  if((glGetTexParameteriv = LoadGLFunction<PFNGLGETTEXPARAMETERIVPROC>("glGetTexParameteriv"))==NULL) return;
  if((glGetUniformfv = LoadGLFunction<PFNGLGETUNIFORMFVPROC>("glGetUniformfv"))==NULL) return;
  if((glGetUniformiv = LoadGLFunction<PFNGLGETUNIFORMIVPROC>("glGetUniformiv"))==NULL) return;
  if((glGetUniformLocation = LoadGLFunction<PFNGLGETUNIFORMLOCATIONPROC>("glGetUniformLocation"))==NULL) return;
  if((glGetVertexAttribfv = LoadGLFunction<PFNGLGETVERTEXATTRIBFVPROC>("glGetVertexAttribfv"))==NULL) return;
  if((glGetVertexAttribiv = LoadGLFunction<PFNGLGETVERTEXATTRIBIVPROC>("glGetVertexAttribiv"))==NULL) return;
  if((glGetVertexAttribPointerv = LoadGLFunction<PFNGLGETVERTEXATTRIBPOINTERVPROC>("glGetVertexAttribPointerv"))==NULL) return;
  if((glHint = LoadGLFunction<PFNGLHINTPROC>("glHint"))==NULL) return;
  if((glIsBuffer = LoadGLFunction<PFNGLISBUFFERPROC>("glIsBuffer"))==NULL) return;
  if((glIsEnabled = LoadGLFunction<PFNGLISENABLEDPROC>("glIsEnabled"))==NULL) return;
  if((glIsFramebuffer = LoadGLFunction<PFNGLISFRAMEBUFFERPROC>("glIsFramebuffer"))==NULL) return;
  if((glIsProgram = LoadGLFunction<PFNGLISPROGRAMPROC>("glIsProgram"))==NULL) return;
  if((glIsRenderbuffer = LoadGLFunction<PFNGLISRENDERBUFFERPROC>("glIsRenderbuffer"))==NULL) return;
  if((glIsShader = LoadGLFunction<PFNGLISSHADERPROC>("glIsShader"))==NULL) return;
  if((glIsTexture = LoadGLFunction<PFNGLISTEXTUREPROC>("glIsTexture"))==NULL) return;
  if((glLineWidth = LoadGLFunction<PFNGLLINEWIDTHPROC>("glLineWidth"))==NULL) return;
  if((glLinkProgram = LoadGLFunction<PFNGLLINKPROGRAMPROC>("glLinkProgram"))==NULL) return;
  if((glPixelStorei = LoadGLFunction<PFNGLPIXELSTOREIPROC>("glPixelStorei"))==NULL) return;
  if((glPolygonOffset = LoadGLFunction<PFNGLPOLYGONOFFSETPROC>("glPolygonOffset"))==NULL) return;
  if((glReadPixels = LoadGLFunction<PFNGLREADPIXELSPROC>("glReadPixels"))==NULL) return;
  if((glReleaseShaderCompiler = LoadGLFunction<PFNGLRELEASESHADERCOMPILERPROC>("glReleaseShaderCompiler"))==NULL) return;
  if((glRenderbufferStorage = LoadGLFunction<PFNGLRENDERBUFFERSTORAGEPROC>("glRenderbufferStorage"))==NULL) return;
  if((glSampleCoverage = LoadGLFunction<PFNGLSAMPLECOVERAGEPROC>("glSampleCoverage"))==NULL) return;
  if((glScissor = LoadGLFunction<PFNGLSCISSORPROC>("glScissor"))==NULL) return;
  if((glShaderBinary = LoadGLFunction<PFNGLSHADERBINARYPROC>("glShaderBinary"))==NULL) return;
  if((glShaderSource = LoadGLFunction<PFNGLSHADERSOURCEPROC>("glShaderSource"))==NULL) return;
  if((glStencilFunc = LoadGLFunction<PFNGLSTENCILFUNCPROC>("glStencilFunc"))==NULL) return;
  if((glStencilFuncSeparate = LoadGLFunction<PFNGLSTENCILFUNCSEPARATEPROC>("glStencilFuncSeparate"))==NULL) return;
  if((glStencilMask = LoadGLFunction<PFNGLSTENCILMASKPROC>("glStencilMask"))==NULL) return;
  if((glStencilMaskSeparate = LoadGLFunction<PFNGLSTENCILMASKSEPARATEPROC>("glStencilMaskSeparate"))==NULL) return;
  if((glStencilOp = LoadGLFunction<PFNGLSTENCILOPPROC>("glStencilOp"))==NULL) return;
  if((glStencilOpSeparate = LoadGLFunction<PFNGLSTENCILOPSEPARATEPROC>("glStencilOpSeparate"))==NULL) return;
  if((glTexImage2D = LoadGLFunction<PFNGLTEXIMAGE2DPROC>("glTexImage2D"))==NULL) return;
  if((glTexParameterf = LoadGLFunction<PFNGLTEXPARAMETERFPROC>("glTexParameterf"))==NULL) return;
  if((glTexParameterfv = LoadGLFunction<PFNGLTEXPARAMETERFVPROC>("glTexParameterfv"))==NULL) return;
  if((glTexParameteri = LoadGLFunction<PFNGLTEXPARAMETERIPROC>("glTexParameteri"))==NULL) return;
  if((glTexParameteriv = LoadGLFunction<PFNGLTEXPARAMETERIVPROC>("glTexParameteriv"))==NULL) return;
  if((glTexSubImage2D = LoadGLFunction<PFNGLTEXSUBIMAGE2DPROC>("glTexSubImage2D"))==NULL) return;
  if((glUniform1f = LoadGLFunction<PFNGLUNIFORM1FPROC>("glUniform1f"))==NULL) return;
  if((glUniform1fv = LoadGLFunction<PFNGLUNIFORM1FVPROC>("glUniform1fv"))==NULL) return;
  if((glUniform1i = LoadGLFunction<PFNGLUNIFORM1IPROC>("glUniform1i"))==NULL) return;
  if((glUniform1iv = LoadGLFunction<PFNGLUNIFORM1IVPROC>("glUniform1iv"))==NULL) return;
  if((glUniform2f = LoadGLFunction<PFNGLUNIFORM2FPROC>("glUniform2f"))==NULL) return;
  if((glUniform2fv = LoadGLFunction<PFNGLUNIFORM2FVPROC>("glUniform2fv"))==NULL) return;
  if((glUniform2i = LoadGLFunction<PFNGLUNIFORM2IPROC>("glUniform2i"))==NULL) return;
  if((glUniform2iv = LoadGLFunction<PFNGLUNIFORM2IVPROC>("glUniform2iv"))==NULL) return;
  if((glUniform3f = LoadGLFunction<PFNGLUNIFORM3FPROC>("glUniform3f"))==NULL) return;
  if((glUniform3fv = LoadGLFunction<PFNGLUNIFORM3FVPROC>("glUniform3fv"))==NULL) return;
  if((glUniform3i = LoadGLFunction<PFNGLUNIFORM3IPROC>("glUniform3i"))==NULL) return;
  if((glUniform3iv = LoadGLFunction<PFNGLUNIFORM3IVPROC>("glUniform3iv"))==NULL) return;
  if((glUniform4f = LoadGLFunction<PFNGLUNIFORM4FPROC>("glUniform4f"))==NULL) return;
  if((glUniform4fv = LoadGLFunction<PFNGLUNIFORM4FVPROC>("glUniform4fv"))==NULL) return;
  if((glUniform4i = LoadGLFunction<PFNGLUNIFORM4IPROC>("glUniform4i"))==NULL) return;
  if((glUniform4iv = LoadGLFunction<PFNGLUNIFORM4IVPROC>("glUniform4iv"))==NULL) return;
  if((glUniformMatrix2fv = LoadGLFunction<PFNGLUNIFORMMATRIX2FVPROC>("glUniformMatrix2fv"))==NULL) return;
  if((glUniformMatrix3fv = LoadGLFunction<PFNGLUNIFORMMATRIX3FVPROC>("glUniformMatrix3fv"))==NULL) return;
  if((glUniformMatrix4fv = LoadGLFunction<PFNGLUNIFORMMATRIX4FVPROC>("glUniformMatrix4fv"))==NULL) return;
  if((glUseProgram = LoadGLFunction<PFNGLUSEPROGRAMPROC>("glUseProgram"))==NULL) return;
  if((glValidateProgram = LoadGLFunction<PFNGLVALIDATEPROGRAMPROC>("glValidateProgram"))==NULL) return;
  if((glVertexAttrib1f = LoadGLFunction<PFNGLVERTEXATTRIB1FPROC>("glVertexAttrib1f"))==NULL) return;
  if((glVertexAttrib1fv = LoadGLFunction<PFNGLVERTEXATTRIB1FVPROC>("glVertexAttrib1fv"))==NULL) return;
  if((glVertexAttrib2f = LoadGLFunction<PFNGLVERTEXATTRIB2FPROC>("glVertexAttrib2f"))==NULL) return;
  if((glVertexAttrib2fv = LoadGLFunction<PFNGLVERTEXATTRIB2FVPROC>("glVertexAttrib2fv"))==NULL) return;
  if((glVertexAttrib3f = LoadGLFunction<PFNGLVERTEXATTRIB3FPROC>("glVertexAttrib3f"))==NULL) return;
  if((glVertexAttrib3fv = LoadGLFunction<PFNGLVERTEXATTRIB3FVPROC>("glVertexAttrib3fv"))==NULL) return;
  if((glVertexAttrib4f = LoadGLFunction<PFNGLVERTEXATTRIB4FPROC>("glVertexAttrib4f"))==NULL) return;
  if((glVertexAttrib4fv = LoadGLFunction<PFNGLVERTEXATTRIB4FVPROC>("glVertexAttrib4fv"))==NULL) return;
  if((glVertexAttribPointer = LoadGLFunction<PFNGLVERTEXATTRIBPOINTERPROC>("glVertexAttribPointer"))==NULL) return;
  if((glViewport = LoadGLFunction<PFNGLVIEWPORTPROC>("glViewport"))==NULL) return;
  g_initialized = true;
}

bool LoadGLFunctions(void)
{
  if(pthread_once(&g_once, LoadGLFunctionsInternal) == 0)
    return g_initialized;
  return false;
}


} // namespace GLES2
