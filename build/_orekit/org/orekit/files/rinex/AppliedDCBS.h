#ifndef org_orekit_files_rinex_AppliedDCBS_H
#define org_orekit_files_rinex_AppliedDCBS_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
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
      namespace rinex {

        class AppliedDCBS : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fa93d9a85da578d5,
            mid_getProgDCBS_d2c8eb4129821f0e,
            mid_getSatelliteSystem_fb0bd27fcc3ba9fc,
            mid_getSourceDCBS_d2c8eb4129821f0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AppliedDCBS(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AppliedDCBS(const AppliedDCBS& obj) : ::java::lang::Object(obj) {}

          AppliedDCBS(const ::org::orekit::gnss::SatelliteSystem &, const ::java::lang::String &, const ::java::lang::String &);

          ::java::lang::String getProgDCBS() const;
          ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
          ::java::lang::String getSourceDCBS() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        extern PyType_Def PY_TYPE_DEF(AppliedDCBS);
        extern PyTypeObject *PY_TYPE(AppliedDCBS);

        class t_AppliedDCBS {
        public:
          PyObject_HEAD
          AppliedDCBS object;
          static PyObject *wrap_Object(const AppliedDCBS&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
