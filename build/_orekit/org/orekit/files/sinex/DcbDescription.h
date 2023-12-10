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
            mid_init$_0fa09c18fee449d5,
            mid_getBiasMode_11b109bd155ca898,
            mid_getDeterminationMethod_11b109bd155ca898,
            mid_getObservationSampling_570ce0828f81a2c1,
            mid_getParameterSpacing_570ce0828f81a2c1,
            mid_getTimeSystem_47ed81afbc0cea8f,
            mid_setBiasMode_d0bc48d5b00dc40c,
            mid_setDeterminationMethod_d0bc48d5b00dc40c,
            mid_setObservationSampling_99803b0791f320ff,
            mid_setParameterSpacing_99803b0791f320ff,
            mid_setTimeSystem_188d9681dd6fbe69,
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
