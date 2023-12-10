#ifndef org_orekit_estimation_measurements_modifiers_AbstractAmbiguityModifier_H
#define org_orekit_estimation_measurements_modifiers_AbstractAmbiguityModifier_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class AbstractAmbiguityModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_987a5fb872043b12,
              mid_getDrivers_a6156df500549a58,
              mid_doModifyWithoutDerivatives_811f96960c94c1de,
              mid_doModify_a5896dbcbe782924,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractAmbiguityModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractAmbiguityModifier(const AbstractAmbiguityModifier& obj) : ::java::lang::Object(obj) {}

            AbstractAmbiguityModifier(jint, jdouble);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(AbstractAmbiguityModifier);
          extern PyTypeObject *PY_TYPE(AbstractAmbiguityModifier);

          class t_AbstractAmbiguityModifier {
          public:
            PyObject_HEAD
            AbstractAmbiguityModifier object;
            static PyObject *wrap_Object(const AbstractAmbiguityModifier&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
