#ifndef org_orekit_propagation_integration_FieldAdditionalDerivativesProvider_H
#define org_orekit_propagation_integration_FieldAdditionalDerivativesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace integration {
        class FieldCombinedDerivatives;
      }
      class FieldSpacecraftState;
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

        class FieldAdditionalDerivativesProvider : public ::java::lang::Object {
         public:
          enum {
            mid_combinedDerivatives_1031021bd411f1f1,
            mid_getDimension_d6ab429752e7c267,
            mid_getName_d2c8eb4129821f0e,
            mid_init_357211ab77703f3f,
            mid_yields_712e981f67f3ccbe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldAdditionalDerivativesProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldAdditionalDerivativesProvider(const FieldAdditionalDerivativesProvider& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::propagation::integration::FieldCombinedDerivatives combinedDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          jint getDimension() const;
          ::java::lang::String getName() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldAdditionalDerivativesProvider);
        extern PyTypeObject *PY_TYPE(FieldAdditionalDerivativesProvider);

        class t_FieldAdditionalDerivativesProvider {
        public:
          PyObject_HEAD
          FieldAdditionalDerivativesProvider object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldAdditionalDerivativesProvider *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldAdditionalDerivativesProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldAdditionalDerivativesProvider&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
