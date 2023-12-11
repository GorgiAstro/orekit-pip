#ifndef org_orekit_propagation_integration_PythonAdditionalDerivativesProvider_H
#define org_orekit_propagation_integration_PythonAdditionalDerivativesProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class CombinedDerivatives;
        class AdditionalDerivativesProvider;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class PythonAdditionalDerivativesProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_combinedDerivatives_5fc55a092d474e7c,
            mid_finalize_0640e6acf969ed28,
            mid_getDimension_412668abc8d889e9,
            mid_getName_3cffd47377eca18a,
            mid_init_0472264ad6f40bc2,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_yields_abdf3beb789bbd4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAdditionalDerivativesProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAdditionalDerivativesProvider(const PythonAdditionalDerivativesProvider& obj) : ::java::lang::Object(obj) {}

          PythonAdditionalDerivativesProvider();

          ::org::orekit::propagation::integration::CombinedDerivatives combinedDerivatives(const ::org::orekit::propagation::SpacecraftState &) const;
          void finalize() const;
          jint getDimension() const;
          ::java::lang::String getName() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          jboolean yields(const ::org::orekit::propagation::SpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(PythonAdditionalDerivativesProvider);
        extern PyTypeObject *PY_TYPE(PythonAdditionalDerivativesProvider);

        class t_PythonAdditionalDerivativesProvider {
        public:
          PyObject_HEAD
          PythonAdditionalDerivativesProvider object;
          static PyObject *wrap_Object(const PythonAdditionalDerivativesProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
