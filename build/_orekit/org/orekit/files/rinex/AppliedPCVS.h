#ifndef org_orekit_files_rinex_AppliedPCVS_H
#define org_orekit_files_rinex_AppliedPCVS_H

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
      class SatelliteSystem;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        class AppliedPCVS : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3c3b8d2681241227,
            mid_getProgPCVS_3cffd47377eca18a,
            mid_getSatelliteSystem_8b86408cc2633961,
            mid_getSourcePCVS_3cffd47377eca18a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AppliedPCVS(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AppliedPCVS(const AppliedPCVS& obj) : ::java::lang::Object(obj) {}

          AppliedPCVS(const ::org::orekit::gnss::SatelliteSystem &, const ::java::lang::String &, const ::java::lang::String &);

          ::java::lang::String getProgPCVS() const;
          ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
          ::java::lang::String getSourcePCVS() const;
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
        extern PyType_Def PY_TYPE_DEF(AppliedPCVS);
        extern PyTypeObject *PY_TYPE(AppliedPCVS);

        class t_AppliedPCVS {
        public:
          PyObject_HEAD
          AppliedPCVS object;
          static PyObject *wrap_Object(const AppliedPCVS&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
