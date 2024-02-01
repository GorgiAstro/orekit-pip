#ifndef org_orekit_orbits_PythonLibrationOrbit_H
#define org_orekit_orbits_PythonLibrationOrbit_H

#include "org/orekit/orbits/LibrationOrbit.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class CR3BPSystem;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace orbits {
      class CR3BPDifferentialCorrection;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class PythonLibrationOrbit : public ::org::orekit::orbits::LibrationOrbit {
       public:
        enum {
          mid_init$_2ace0c1a76c4c810,
          mid_applyCorrectionOnPV_6705c201ee6823b5,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
