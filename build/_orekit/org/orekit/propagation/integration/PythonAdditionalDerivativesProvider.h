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
        class AdditionalDerivativesProvider;
        class CombinedDerivatives;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_combinedDerivatives_f7e02f1d7093fbbb,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getDimension_55546ef6a647f39b,
            mid_getName_1c1fa1e935d6cdcf,
            mid_init_2d7f9a496c7e9781,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_yields_97df9017614a1945,
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
