#ifndef org_orekit_propagation_integration_PythonAdditionalDerivativesProvider_H
#define org_orekit_propagation_integration_PythonAdditionalDerivativesProvider_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
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
            mid_init$_ff7cb6c242604316,
            mid_combinedDerivatives_3642c368f508585f,
            mid_finalize_ff7cb6c242604316,
            mid_getDimension_d6ab429752e7c267,
            mid_getName_d2c8eb4129821f0e,
            mid_init_14deaae988292d42,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_yields_34f098c1d43e614c,
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
