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
          mid_init$_d9bf154f5a0c8c94,
          mid_computeAdditionalConstraints_ae31e5696ec6455b,
          mid_computeAdditionalJacobianMatrix_11c2223c723fd443,
          mid_finalize_0fa09c18fee449d5,
          mid_getAugmentedInitialState_8f68ada11fb66675,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
