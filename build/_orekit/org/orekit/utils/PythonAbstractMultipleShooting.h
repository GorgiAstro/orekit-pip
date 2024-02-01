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
          mid_init$_05850f9fd1cddc8a,
          mid_computeAdditionalConstraints_f7899d4480f6af2b,
          mid_computeAdditionalJacobianMatrix_f1fb8031f2a01da7,
          mid_finalize_ff7cb6c242604316,
          mid_getAugmentedInitialState_bc8abbf0245ce660,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
