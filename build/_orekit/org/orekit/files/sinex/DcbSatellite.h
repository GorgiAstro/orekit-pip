#ifndef org_orekit_files_sinex_DcbSatellite_H
#define org_orekit_files_sinex_DcbSatellite_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace files {
      namespace sinex {
        class DcbDescription;
        class Dcb;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class DcbSatellite : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f5ffdf29129ef90a,
            mid_getDcbData_aa52836425be0e57,
            mid_getDescription_4d0641e2232580f1,
            mid_getPRN_3cffd47377eca18a,
            mid_getSatelliteSytem_8b86408cc2633961,
            mid_setDescription_c4e21d1fdc63a330,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DcbSatellite(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DcbSatellite(const DcbSatellite& obj) : ::java::lang::Object(obj) {}

          DcbSatellite(const ::java::lang::String &);

          ::org::orekit::files::sinex::Dcb getDcbData() const;
          ::org::orekit::files::sinex::DcbDescription getDescription() const;
          ::java::lang::String getPRN() const;
          ::org::orekit::gnss::SatelliteSystem getSatelliteSytem() const;
          void setDescription(const ::org::orekit::files::sinex::DcbDescription &) const;
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
        extern PyType_Def PY_TYPE_DEF(DcbSatellite);
        extern PyTypeObject *PY_TYPE(DcbSatellite);

        class t_DcbSatellite {
        public:
          PyObject_HEAD
          DcbSatellite object;
          static PyObject *wrap_Object(const DcbSatellite&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
