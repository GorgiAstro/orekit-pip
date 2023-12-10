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
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace integration {
        class AdditionalDerivativesProvider;
        class CombinedDerivatives;
      }
      class SpacecraftState;
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
            mid_init$_0fa09c18fee449d5,
            mid_combinedDerivatives_4fc0958a0539e1d3,
            mid_finalize_0fa09c18fee449d5,
            mid_getDimension_570ce0828f81a2c1,
            mid_getName_11b109bd155ca898,
            mid_init_826b4eda94da4e78,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_yields_680f8463a473c3cb,
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
