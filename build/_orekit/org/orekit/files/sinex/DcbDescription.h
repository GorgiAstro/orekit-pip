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
            mid_init$_0640e6acf969ed28,
            mid_getBiasMode_3cffd47377eca18a,
            mid_getDeterminationMethod_3cffd47377eca18a,
            mid_getObservationSampling_412668abc8d889e9,
            mid_getParameterSpacing_412668abc8d889e9,
            mid_getTimeSystem_2700635415605e4d,
            mid_setBiasMode_f5ffdf29129ef90a,
            mid_setDeterminationMethod_f5ffdf29129ef90a,
            mid_setObservationSampling_a3da1a935cb37f7b,
            mid_setParameterSpacing_a3da1a935cb37f7b,
            mid_setTimeSystem_562aaa7511f66c1c,
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
