#ifndef org_orekit_propagation_integration_FieldCombinedDerivatives_H
#define org_orekit_propagation_integration_FieldCombinedDerivatives_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class FieldCombinedDerivatives : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2c0fd42a693364fa,
            mid_getAdditionalDerivatives_41762fd4377ff26e,
            mid_getMainStateDerivativesIncrements_41762fd4377ff26e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldCombinedDerivatives(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldCombinedDerivatives(const FieldCombinedDerivatives& obj) : ::java::lang::Object(obj) {}

          FieldCombinedDerivatives(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &);

          JArray< ::org::hipparchus::CalculusFieldElement > getAdditionalDerivatives() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getMainStateDerivativesIncrements() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldCombinedDerivatives);
        extern PyTypeObject *PY_TYPE(FieldCombinedDerivatives);

        class t_FieldCombinedDerivatives {
        public:
          PyObject_HEAD
          FieldCombinedDerivatives object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldCombinedDerivatives *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldCombinedDerivatives&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldCombinedDerivatives&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
