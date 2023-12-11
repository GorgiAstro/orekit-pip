#ifndef org_orekit_orbits_RichardsonExpansion_H
#define org_orekit_orbits_RichardsonExpansion_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CR3BPSystem;
    }
    namespace utils {
      class PVCoordinates;
      class LagrangianPoints;
    }
    namespace orbits {
      class LibrationOrbitFamily;
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

      class RichardsonExpansion : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7b30734ae83ea0af,
          mid_computeHaloFirstGuess_a94765ced70351f0,
          mid_computeLyapunovFirstGuess_1333e079d8988adc,
          mid_getCr3bpSystem_846281b3daba3578,
          mid_getHaloOrbitalPeriod_7e960cd6eee376d8,
          mid_getLagrangianPoint_d1c207a98448c759,
          mid_getLyapunovOrbitalPeriod_7e960cd6eee376d8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RichardsonExpansion(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RichardsonExpansion(const RichardsonExpansion& obj) : ::java::lang::Object(obj) {}

        RichardsonExpansion(const ::org::orekit::bodies::CR3BPSystem &, const ::org::orekit::utils::LagrangianPoints &);

        ::org::orekit::utils::PVCoordinates computeHaloFirstGuess(jdouble, const ::org::orekit::orbits::LibrationOrbitFamily &, jdouble, jdouble) const;
        ::org::orekit::utils::PVCoordinates computeLyapunovFirstGuess(jdouble, jdouble, jdouble) const;
        ::org::orekit::bodies::CR3BPSystem getCr3bpSystem() const;
        jdouble getHaloOrbitalPeriod(jdouble) const;
        ::org::orekit::utils::LagrangianPoints getLagrangianPoint() const;
        jdouble getLyapunovOrbitalPeriod(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(RichardsonExpansion);
      extern PyTypeObject *PY_TYPE(RichardsonExpansion);

      class t_RichardsonExpansion {
      public:
        PyObject_HEAD
        RichardsonExpansion object;
        static PyObject *wrap_Object(const RichardsonExpansion&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
