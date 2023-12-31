#ifndef org_orekit_estimation_measurements_modifiers_AbstractRelativisticClockModifier_H
#define org_orekit_estimation_measurements_modifiers_AbstractRelativisticClockModifier_H

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

          class AbstractRelativisticClockModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_relativisticCorrection_2fa6405c70ee6844,
              mid_getScaleFactor_b74f83833fdad017,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractRelativisticClockModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractRelativisticClockModifier(const AbstractRelativisticClockModifier& obj) : ::java::lang::Object(obj) {}

            AbstractRelativisticClockModifier();
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
          extern PyType_Def PY_TYPE_DEF(AbstractRelativisticClockModifier);
          extern PyTypeObject *PY_TYPE(AbstractRelativisticClockModifier);

          class t_AbstractRelativisticClockModifier {
          public:
            PyObject_HEAD
            AbstractRelativisticClockModifier object;
            static PyObject *wrap_Object(const AbstractRelativisticClockModifier&);
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
