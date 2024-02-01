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
            mid_init$_ff7cb6c242604316,
            mid_getBiasMode_d2c8eb4129821f0e,
            mid_getDeterminationMethod_d2c8eb4129821f0e,
            mid_getObservationSampling_d6ab429752e7c267,
            mid_getParameterSpacing_d6ab429752e7c267,
            mid_getTimeSystem_6110a08bedf3a63d,
            mid_setBiasMode_105e1eadb709d9ac,
            mid_setDeterminationMethod_105e1eadb709d9ac,
            mid_setObservationSampling_8fd427ab23829bf5,
            mid_setParameterSpacing_8fd427ab23829bf5,
            mid_setTimeSystem_70481f478101edcd,
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
