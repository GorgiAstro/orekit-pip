#ifndef org_orekit_orbits_LyapunovOrbit_H
#define org_orekit_orbits_LyapunovOrbit_H

#include "org/orekit/orbits/LibrationOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class RichardsonExpansion;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace bodies {
      class CR3BPSystem;
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
    namespace orbits {

      class LyapunovOrbit : public ::org::orekit::orbits::LibrationOrbit {
       public:
        enum {
          mid_init$_82a9a5ef43dffc29,
          mid_init$_2ace0c1a76c4c810,
          mid_applyCorrectionOnPV_6705c201ee6823b5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LyapunovOrbit(jobject obj) : ::org::orekit::orbits::LibrationOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LyapunovOrbit(const LyapunovOrbit& obj) : ::org::orekit::orbits::LibrationOrbit(obj) {}

        LyapunovOrbit(const ::org::orekit::orbits::RichardsonExpansion &, jdouble);
        LyapunovOrbit(const ::org::orekit::bodies::CR3BPSystem &, const ::org::orekit::utils::PVCoordinates &, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(LyapunovOrbit);
      extern PyTypeObject *PY_TYPE(LyapunovOrbit);

      class t_LyapunovOrbit {
      public:
        PyObject_HEAD
        LyapunovOrbit object;
        static PyObject *wrap_Object(const LyapunovOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
