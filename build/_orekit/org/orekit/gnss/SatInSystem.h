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
          mid_init$_251a323db6b24aab,
          mid_equals_72faff9b05f5ed5e,
          mid_getPRN_d6ab429752e7c267,
          mid_getSystem_fb0bd27fcc3ba9fc,
          mid_getTwoDigitsRinexPRN_d6ab429752e7c267,
          mid_hashCode_d6ab429752e7c267,
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
