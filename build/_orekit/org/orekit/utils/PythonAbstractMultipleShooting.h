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
      namespace numerical {
        class NumericalPropagator;
      }
      class SpacecraftState;
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
          mid_init$_8d9a40e4963acd76,
          mid_computeAdditionalConstraints_5c4ec51dfa4e445c,
          mid_computeAdditionalJacobianMatrix_8b899bcca8eef41a,
          mid_finalize_7ae3461a92a43152,
          mid_getAugmentedInitialState_881fd9055e653db3,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
