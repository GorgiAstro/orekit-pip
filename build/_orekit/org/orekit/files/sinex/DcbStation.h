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
        class Dcb;
        class DcbDescription;
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
            mid_init$_e939c6558ae8d313,
            mid_addDcb_8d19eb512b93a6c6,
            mid_getAvailableSatelliteSystems_fa141f4fca81e737,
            mid_getDcbData_c1a9a5094c4575eb,
            mid_getDescription_d11de623496594e3,
            mid_getSiteCode_0090f7797e403f43,
            mid_setDescription_8b883f3a6778fd13,
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
