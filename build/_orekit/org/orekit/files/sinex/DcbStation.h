#ifndef org_orekit_files_sinex_DcbStation_H
#define org_orekit_files_sinex_DcbStation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        class DcbDescription;
        class Dcb;
      }
    }
    namespace gnss {
      class SatelliteSystem;
    }
  }
}
namespace java {
  namespace lang {
    class Iterable;
    class Class;
    class String;
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
            mid_init$_734b91ac30d5f9b4,
            mid_addDcb_89b9223a0403fa13,
            mid_getAvailableSatelliteSystems_2827db9fa97d68f8,
            mid_getDcbData_919f393398371a59,
            mid_getDescription_e96c642b778d7ae9,
            mid_getSiteCode_1c1fa1e935d6cdcf,
            mid_setDescription_1a571fee8223b5dd,
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
