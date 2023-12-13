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
          mid_init$_b25e272a068a28f1,
          mid_equals_460c5e2d9d51c6cc,
          mid_getPRN_55546ef6a647f39b,
          mid_getSystem_21bd759cc4a81606,
          mid_getTwoDigitsRinexPRN_55546ef6a647f39b,
          mid_hashCode_55546ef6a647f39b,
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
