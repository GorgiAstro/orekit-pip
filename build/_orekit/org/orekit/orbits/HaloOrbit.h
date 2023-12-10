#ifndef org_orekit_orbits_HaloOrbit_H
#define org_orekit_orbits_HaloOrbit_H

#include "org/orekit/orbits/LibrationOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class LibrationOrbitFamily;
      class RichardsonExpansion;
    }
    namespace bodies {
      class CR3BPSystem;
    }
    namespace utils {
      class PVCoordinates;
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

      class HaloOrbit : public ::org::orekit::orbits::LibrationOrbit {
       public:
        enum {
          mid_init$_075542267323df55,
          mid_init$_6ca73a52ae88cb29,
          mid_applyCorrectionOnPV_e2324264d8e2d238,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit HaloOrbit(jobject obj) : ::org::orekit::orbits::LibrationOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HaloOrbit(const HaloOrbit& obj) : ::org::orekit::orbits::LibrationOrbit(obj) {}

        HaloOrbit(const ::org::orekit::orbits::RichardsonExpansion &, jdouble, const ::org::orekit::orbits::LibrationOrbitFamily &);
        HaloOrbit(const ::org::orekit::bodies::CR3BPSystem &, const ::org::orekit::utils::PVCoordinates &, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(HaloOrbit);
      extern PyTypeObject *PY_TYPE(HaloOrbit);

      class t_HaloOrbit {
      public:
        PyObject_HEAD
        HaloOrbit object;
        static PyObject *wrap_Object(const HaloOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
