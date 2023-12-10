#ifndef org_orekit_files_sinex_DcbDescription_H
#define org_orekit_files_sinex_DcbDescription_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class TimeSystem;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class DcbDescription : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_getBiasMode_0090f7797e403f43,
            mid_getDeterminationMethod_0090f7797e403f43,
            mid_getObservationSampling_f2f64475e4580546,
            mid_getParameterSpacing_f2f64475e4580546,
            mid_getTimeSystem_b58d3545739694ee,
            mid_setBiasMode_e939c6558ae8d313,
            mid_setDeterminationMethod_e939c6558ae8d313,
            mid_setObservationSampling_0a2a1ac2721c0336,
            mid_setParameterSpacing_0a2a1ac2721c0336,
            mid_setTimeSystem_4733fc8266dc541c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DcbDescription(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DcbDescription(const DcbDescription& obj) : ::java::lang::Object(obj) {}

          DcbDescription();

          ::java::lang::String getBiasMode() const;
          ::java::lang::String getDeterminationMethod() const;
          jint getObservationSampling() const;
          jint getParameterSpacing() const;
          ::org::orekit::gnss::TimeSystem getTimeSystem() const;
          void setBiasMode(const ::java::lang::String &) const;
          void setDeterminationMethod(const ::java::lang::String &) const;
          void setObservationSampling(jint) const;
          void setParameterSpacing(jint) const;
          void setTimeSystem(const ::org::orekit::gnss::TimeSystem &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        extern PyType_Def PY_TYPE_DEF(DcbDescription);
        extern PyTypeObject *PY_TYPE(DcbDescription);

        class t_DcbDescription {
        public:
          PyObject_HEAD
          DcbDescription object;
          static PyObject *wrap_Object(const DcbDescription&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
