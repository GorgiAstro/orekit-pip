#ifndef org_orekit_propagation_integration_CombinedDerivatives_H
#define org_orekit_propagation_integration_CombinedDerivatives_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class CombinedDerivatives : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ab4840ba016ef1da,
            mid_getAdditionalDerivatives_a53a7513ecedada2,
            mid_getMainStateDerivativesIncrements_a53a7513ecedada2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CombinedDerivatives(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CombinedDerivatives(const CombinedDerivatives& obj) : ::java::lang::Object(obj) {}

          CombinedDerivatives(const JArray< jdouble > &, const JArray< jdouble > &);

          JArray< jdouble > getAdditionalDerivatives() const;
          JArray< jdouble > getMainStateDerivativesIncrements() const;
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
        extern PyType_Def PY_TYPE_DEF(CombinedDerivatives);
        extern PyTypeObject *PY_TYPE(CombinedDerivatives);

        class t_CombinedDerivatives {
        public:
          PyObject_HEAD
          CombinedDerivatives object;
          static PyObject *wrap_Object(const CombinedDerivatives&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
