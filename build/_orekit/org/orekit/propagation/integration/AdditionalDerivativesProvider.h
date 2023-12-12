#ifndef org_orekit_propagation_integration_AdditionalDerivativesProvider_H
#define org_orekit_propagation_integration_AdditionalDerivativesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
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
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class AdditionalDerivativesProvider : public ::java::lang::Object {
         public:
          enum {
            mid_combinedDerivatives_5fc55a092d474e7c,
            mid_getDimension_412668abc8d889e9,
            mid_getName_3cffd47377eca18a,
            mid_init_0472264ad6f40bc2,
            mid_yields_abdf3beb789bbd4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdditionalDerivativesProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdditionalDerivativesProvider(const AdditionalDerivativesProvider& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::propagation::integration::CombinedDerivatives combinedDerivatives(const ::org::orekit::propagation::SpacecraftState &) const;
          jint getDimension() const;
          ::java::lang::String getName() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(AdditionalDerivativesProvider);
        extern PyTypeObject *PY_TYPE(AdditionalDerivativesProvider);

        class t_AdditionalDerivativesProvider {
        public:
          PyObject_HEAD
          AdditionalDerivativesProvider object;
          static PyObject *wrap_Object(const AdditionalDerivativesProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
