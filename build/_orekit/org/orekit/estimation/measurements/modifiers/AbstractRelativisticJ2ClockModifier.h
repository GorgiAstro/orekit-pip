#ifndef org_orekit_estimation_measurements_modifiers_AbstractRelativisticJ2ClockModifier_H
#define org_orekit_estimation_measurements_modifiers_AbstractRelativisticJ2ClockModifier_H

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

          class AbstractRelativisticJ2ClockModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2c56b6dd4d4b1dec,
              mid_relativisticJ2Correction_b358632edcce3ae8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractRelativisticJ2ClockModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractRelativisticJ2ClockModifier(const AbstractRelativisticJ2ClockModifier& obj) : ::java::lang::Object(obj) {}

            AbstractRelativisticJ2ClockModifier(jdouble, jdouble, jdouble);
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
          extern PyType_Def PY_TYPE_DEF(AbstractRelativisticJ2ClockModifier);
          extern PyTypeObject *PY_TYPE(AbstractRelativisticJ2ClockModifier);

          class t_AbstractRelativisticJ2ClockModifier {
          public:
            PyObject_HEAD
            AbstractRelativisticJ2ClockModifier object;
            static PyObject *wrap_Object(const AbstractRelativisticJ2ClockModifier&);
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
