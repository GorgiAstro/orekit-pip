#ifndef org_orekit_orbits_PythonLibrationOrbit_H
#define org_orekit_orbits_PythonLibrationOrbit_H

#include "org/orekit/orbits/LibrationOrbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class CR3BPDifferentialCorrection;
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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class PythonLibrationOrbit : public ::org::orekit::orbits::LibrationOrbit {
       public:
        enum {
          mid_init$_61210a58b1c5967a,
          mid_applyCorrectionOnPV_57264af3b06f967f,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonLibrationOrbit(jobject obj) : ::org::orekit::orbits::LibrationOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonLibrationOrbit(const PythonLibrationOrbit& obj) : ::org::orekit::orbits::LibrationOrbit(obj) {}

        PythonLibrationOrbit(const ::org::orekit::bodies::CR3BPSystem &, const ::org::orekit::utils::PVCoordinates &, jdouble);

        ::org::orekit::utils::PVCoordinates applyCorrectionOnPV(const ::org::orekit::orbits::CR3BPDifferentialCorrection &) const;
        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(PythonLibrationOrbit);
      extern PyTypeObject *PY_TYPE(PythonLibrationOrbit);

      class t_PythonLibrationOrbit {
      public:
        PyObject_HEAD
        PythonLibrationOrbit object;
        static PyObject *wrap_Object(const PythonLibrationOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
