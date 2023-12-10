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
    namespace utils {
      class PVCoordinates;
    }
    namespace bodies {
      class CR3BPSystem;
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
          mid_init$_6ca73a52ae88cb29,
          mid_applyCorrectionOnPV_e2324264d8e2d238,
          mid_finalize_0fa09c18fee449d5,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
