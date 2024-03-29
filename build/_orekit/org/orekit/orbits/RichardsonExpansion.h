#ifndef org_orekit_orbits_RichardsonExpansion_H
#define org_orekit_orbits_RichardsonExpansion_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CR3BPSystem;
    }
    namespace orbits {
      class LibrationOrbitFamily;
    }
    namespace utils {
      class PVCoordinates;
      class LagrangianPoints;
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
          mid_init$_afa868b056706e58,
          mid_computeHaloFirstGuess_476e672aac8c4e37,
          mid_computeLyapunovFirstGuess_02628d3a946752e3,
          mid_getCr3bpSystem_46ee78c3fbfe7bfc,
          mid_getHaloOrbitalPeriod_bf28ed64d6e8576b,
          mid_getLagrangianPoint_633f09b0beab6a42,
          mid_getLyapunovOrbitalPeriod_bf28ed64d6e8576b,
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
