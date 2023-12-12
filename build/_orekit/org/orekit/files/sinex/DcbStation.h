#ifndef org_orekit_files_sinex_DcbStation_H
#define org_orekit_files_sinex_DcbStation_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class DcbStation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f5ffdf29129ef90a,
            mid_addDcb_3534a70b26a70401,
            mid_getAvailableSatelliteSystems_6cac7769b34554a7,
            mid_getDcbData_05271a9caf0ddfcd,
            mid_getDescription_4d0641e2232580f1,
            mid_getSiteCode_3cffd47377eca18a,
            mid_setDescription_c4e21d1fdc63a330,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DcbStation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DcbStation(const DcbStation& obj) : ::java::lang::Object(obj) {}

          DcbStation(const ::java::lang::String &);

          void addDcb(const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::files::sinex::Dcb &) const;
          ::java::lang::Iterable getAvailableSatelliteSystems() const;
          ::org::orekit::files::sinex::Dcb getDcbData(const ::org::orekit::gnss::SatelliteSystem &) const;
          ::org::orekit::files::sinex::DcbDescription getDescription() const;
          ::java::lang::String getSiteCode() const;
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
        extern PyType_Def PY_TYPE_DEF(DcbStation);
        extern PyTypeObject *PY_TYPE(DcbStation);

        class t_DcbStation {
        public:
          PyObject_HEAD
          DcbStation object;
          static PyObject *wrap_Object(const DcbStation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
