#ifndef org_orekit_models_earth_atmosphere_NRLMSISE00$FieldOutput_H
#define org_orekit_models_earth_atmosphere_NRLMSISE00$FieldOutput_H

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
    namespace models {
      namespace earth {
        namespace atmosphere {

          class NRLMSISE00$FieldOutput : public ::java::lang::Object {
           public:
            enum {
              mid_getDensity_8b3a1c735adfa4bc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NRLMSISE00$FieldOutput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NRLMSISE00$FieldOutput(const NRLMSISE00$FieldOutput& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::CalculusFieldElement getDensity(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          extern PyType_Def PY_TYPE_DEF(NRLMSISE00$FieldOutput);
          extern PyTypeObject *PY_TYPE(NRLMSISE00$FieldOutput);

          class t_NRLMSISE00$FieldOutput {
          public:
            PyObject_HEAD
            NRLMSISE00$FieldOutput object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NRLMSISE00$FieldOutput *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NRLMSISE00$FieldOutput&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NRLMSISE00$FieldOutput&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
