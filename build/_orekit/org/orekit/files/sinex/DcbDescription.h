#ifndef org_orekit_files_sinex_DcbDescription_H
#define org_orekit_files_sinex_DcbDescription_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class TimeSystem;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_getBiasMode_1c1fa1e935d6cdcf,
            mid_getDeterminationMethod_1c1fa1e935d6cdcf,
            mid_getObservationSampling_55546ef6a647f39b,
            mid_getParameterSpacing_55546ef6a647f39b,
            mid_getTimeSystem_28830357acffb3e1,
            mid_setBiasMode_734b91ac30d5f9b4,
            mid_setDeterminationMethod_734b91ac30d5f9b4,
            mid_setObservationSampling_44ed599e93e8a30c,
            mid_setParameterSpacing_44ed599e93e8a30c,
            mid_setTimeSystem_885124f6a0a748ea,
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
