#ifndef org_orekit_utils_units_UnitsCache_H
#define org_orekit_utils_units_UnitsCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
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
    namespace utils {
      namespace units {

        class UnitsCache : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_getUnits_d6c2d8d5a508daeb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnitsCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnitsCache(const UnitsCache& obj) : ::java::lang::Object(obj) {}

          UnitsCache();

          ::org::orekit::utils::units::Unit getUnits(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        extern PyType_Def PY_TYPE_DEF(UnitsCache);
        extern PyTypeObject *PY_TYPE(UnitsCache);

        class t_UnitsCache {
        public:
          PyObject_HEAD
          UnitsCache object;
          static PyObject *wrap_Object(const UnitsCache&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
