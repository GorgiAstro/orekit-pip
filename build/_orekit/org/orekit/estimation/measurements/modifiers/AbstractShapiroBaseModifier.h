#ifndef org_orekit_estimation_measurements_modifiers_AbstractShapiroBaseModifier_H
#define org_orekit_estimation_measurements_modifiers_AbstractShapiroBaseModifier_H

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

          class AbstractShapiroBaseModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_77e0f9a1f260e2e5,
              mid_doModify_811f96960c94c1de,
              mid_shapiroCorrection_746d8b07ca1f2457,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractShapiroBaseModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractShapiroBaseModifier(const AbstractShapiroBaseModifier& obj) : ::java::lang::Object(obj) {}

            AbstractShapiroBaseModifier(jdouble);
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
          extern PyType_Def PY_TYPE_DEF(AbstractShapiroBaseModifier);
          extern PyTypeObject *PY_TYPE(AbstractShapiroBaseModifier);

          class t_AbstractShapiroBaseModifier {
          public:
            PyObject_HEAD
            AbstractShapiroBaseModifier object;
            static PyObject *wrap_Object(const AbstractShapiroBaseModifier&);
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
