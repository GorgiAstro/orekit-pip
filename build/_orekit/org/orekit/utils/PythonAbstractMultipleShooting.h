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
          mid_init$_712b854f7aef1aab,
          mid_computeAdditionalConstraints_1122e29f2a25b86f,
          mid_computeAdditionalJacobianMatrix_29dc26d4c6c7bd43,
          mid_finalize_0640e6acf969ed28,
          mid_getAugmentedInitialState_d91edcd61f36fecc,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
