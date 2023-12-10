#ifndef org_orekit_bodies_CR3BPFactory_H
#define org_orekit_bodies_CR3BPFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CR3BPSystem;
      class CelestialBody;
    }
    namespace time {
      class TimeScale;
      class AbsoluteDate;
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
    namespace bodies {

      class CR3BPFactory : public ::java::lang::Object {
       public:
        enum {
          mid_getEarthMoonCR3BP_5fad4f68327f5e3d,
          mid_getSunEarthCR3BP_2a04e203dd5a7815,
          mid_getSunJupiterCR3BP_2a04e203dd5a7815,
          mid_getSystem_806055d4cfef5676,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CR3BPFactory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CR3BPFactory(const CR3BPFactory& obj) : ::java::lang::Object(obj) {}

        static ::org::orekit::bodies::CR3BPSystem getEarthMoonCR3BP();
        static ::org::orekit::bodies::CR3BPSystem getSunEarthCR3BP(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScale &);
        static ::org::orekit::bodies::CR3BPSystem getSunJupiterCR3BP(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScale &);
        static ::org::orekit::bodies::CR3BPSystem getSystem(const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(CR3BPFactory);
      extern PyTypeObject *PY_TYPE(CR3BPFactory);

      class t_CR3BPFactory {
      public:
        PyObject_HEAD
        CR3BPFactory object;
        static PyObject *wrap_Object(const CR3BPFactory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
