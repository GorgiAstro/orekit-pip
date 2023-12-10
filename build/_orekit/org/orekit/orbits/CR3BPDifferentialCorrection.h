#ifndef org_orekit_orbits_CR3BPDifferentialCorrection_H
#define org_orekit_orbits_CR3BPDifferentialCorrection_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class PVCoordinates;
    }
    namespace orbits {
      class LibrationOrbitType;
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

      class CR3BPDifferentialCorrection : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0764f38e7971b396,
          mid_compute_2101d6a6956f957b,
          mid_computeLyapunov_6761e3f334368d44,
          mid_getOrbitalPeriod_456d9a2f64d6b28d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CR3BPDifferentialCorrection(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CR3BPDifferentialCorrection(const CR3BPDifferentialCorrection& obj) : ::java::lang::Object(obj) {}

        CR3BPDifferentialCorrection(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::bodies::CR3BPSystem &, jdouble);

        ::org::orekit::utils::PVCoordinates compute(const ::org::orekit::orbits::LibrationOrbitType &) const;
        ::org::orekit::utils::PVCoordinates computeLyapunov() const;
        jdouble getOrbitalPeriod() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(CR3BPDifferentialCorrection);
      extern PyTypeObject *PY_TYPE(CR3BPDifferentialCorrection);

      class t_CR3BPDifferentialCorrection {
      public:
        PyObject_HEAD
        CR3BPDifferentialCorrection object;
        static PyObject *wrap_Object(const CR3BPDifferentialCorrection&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
