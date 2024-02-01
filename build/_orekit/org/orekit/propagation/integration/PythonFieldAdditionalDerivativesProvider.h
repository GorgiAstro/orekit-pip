#ifndef org_orekit_propagation_integration_PythonFieldAdditionalDerivativesProvider_H
#define org_orekit_propagation_integration_PythonFieldAdditionalDerivativesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace integration {
        class FieldCombinedDerivatives;
        class FieldAdditionalDerivativesProvider;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

        class PythonFieldAdditionalDerivativesProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_combinedDerivatives_1031021bd411f1f1,
            mid_finalize_ff7cb6c242604316,
            mid_getDimension_d6ab429752e7c267,
            mid_getName_d2c8eb4129821f0e,
            mid_init_357211ab77703f3f,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_yields_712e981f67f3ccbe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFieldAdditionalDerivativesProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFieldAdditionalDerivativesProvider(const PythonFieldAdditionalDerivativesProvider& obj) : ::java::lang::Object(obj) {}

          PythonFieldAdditionalDerivativesProvider();

          ::org::orekit::propagation::integration::FieldCombinedDerivatives combinedDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          void finalize() const;
          jint getDimension() const;
          ::java::lang::String getName() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          jboolean yields(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFieldAdditionalDerivativesProvider);
        extern PyTypeObject *PY_TYPE(PythonFieldAdditionalDerivativesProvider);

        class t_PythonFieldAdditionalDerivativesProvider {
        public:
          PyObject_HEAD
          PythonFieldAdditionalDerivativesProvider object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonFieldAdditionalDerivativesProvider *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonFieldAdditionalDerivativesProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonFieldAdditionalDerivativesProvider&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
