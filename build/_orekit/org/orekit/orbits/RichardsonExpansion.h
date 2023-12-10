#ifndef org_orekit_orbits_RichardsonExpansion_H
#define org_orekit_orbits_RichardsonExpansion_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class LagrangianPoints;
      class PVCoordinates;
    }
    namespace orbits {
      class LibrationOrbitFamily;
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

      class RichardsonExpansion : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7c0e827f658a0910,
          mid_computeHaloFirstGuess_981e0a2d070cf52a,
          mid_computeLyapunovFirstGuess_fadd635b5f68d5a2,
          mid_getCr3bpSystem_fd816a5468a737d0,
          mid_getHaloOrbitalPeriod_0ba5fed9597b693e,
          mid_getLagrangianPoint_08b2c4e71b2f5ee4,
          mid_getLyapunovOrbitalPeriod_0ba5fed9597b693e,
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
