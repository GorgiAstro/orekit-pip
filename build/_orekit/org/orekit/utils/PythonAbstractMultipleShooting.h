#ifndef org_orekit_utils_PythonAbstractMultipleShooting_H
#define org_orekit_utils_PythonAbstractMultipleShooting_H

#include "org/orekit/utils/AbstractMultipleShooting.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace numerical {
        class NumericalPropagator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonAbstractMultipleShooting : public ::org::orekit::utils::AbstractMultipleShooting {
       public:
        enum {
          mid_init$_fcb1b7dcba0178cf,
          mid_computeAdditionalConstraints_a16345554cd829da,
          mid_computeAdditionalJacobianMatrix_223f424c780300ce,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getAugmentedInitialState_f4730dd89e9880a0,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractMultipleShooting(jobject obj) : ::org::orekit::utils::AbstractMultipleShooting(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractMultipleShooting(const PythonAbstractMultipleShooting& obj) : ::org::orekit::utils::AbstractMultipleShooting(obj) {}

        PythonAbstractMultipleShooting(const ::java::util::List &, const ::java::util::List &, jdouble, jint, jboolean, const ::java::lang::String &);

        JArray< jdouble > computeAdditionalConstraints(const ::java::util::List &) const;
        JArray< JArray< jdouble > > computeAdditionalJacobianMatrix(const ::java::util::List &) const;
        void finalize() const;
        ::org::orekit::propagation::SpacecraftState getAugmentedInitialState(jint) const;
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
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PythonAbstractMultipleShooting);
      extern PyTypeObject *PY_TYPE(PythonAbstractMultipleShooting);

      class t_PythonAbstractMultipleShooting {
      public:
        PyObject_HEAD
        PythonAbstractMultipleShooting object;
        static PyObject *wrap_Object(const PythonAbstractMultipleShooting&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
