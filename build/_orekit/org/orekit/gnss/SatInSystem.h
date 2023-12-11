#ifndef org_orekit_gnss_SatInSystem_H
#define org_orekit_gnss_SatInSystem_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class SatInSystem : public ::java::lang::Object {
       public:
        enum {
          mid_init$_6f72787e871feff6,
          mid_equals_221e8e85cb385209,
          mid_getPRN_412668abc8d889e9,
          mid_getSystem_8b86408cc2633961,
          mid_getTwoDigitsRinexPRN_412668abc8d889e9,
          mid_hashCode_412668abc8d889e9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SatInSystem(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SatInSystem(const SatInSystem& obj) : ::java::lang::Object(obj) {}

        SatInSystem(const ::org::orekit::gnss::SatelliteSystem &, jint);

        jboolean equals(const ::java::lang::Object &) const;
        jint getPRN() const;
        ::org::orekit::gnss::SatelliteSystem getSystem() const;
        jint getTwoDigitsRinexPRN() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(SatInSystem);
      extern PyTypeObject *PY_TYPE(SatInSystem);

      class t_SatInSystem {
      public:
        PyObject_HEAD
        SatInSystem object;
        static PyObject *wrap_Object(const SatInSystem&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
