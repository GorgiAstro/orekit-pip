#ifndef org_orekit_orbits_CR3BPDifferentialCorrection_H
#define org_orekit_orbits_CR3BPDifferentialCorrection_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class LibrationOrbitType;
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

      class CR3BPDifferentialCorrection : public ::java::lang::Object {
       public:
        enum {
          mid_init$_8711376640fe818b,
          mid_compute_8c47a766c47a33fc,
          mid_computeLyapunov_9b7c658c14883c84,
          mid_getOrbitalPeriod_dff5885c2c873297,
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
