#ifndef org_orekit_estimation_measurements_generation_SignSemantic_H
#define org_orekit_estimation_measurements_generation_SignSemantic_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          class SignSemantic;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          class SignSemantic : public ::java::lang::Enum {
           public:
            enum {
              mid_measurementIsFeasible_dd69c3ab2404bb71,
              mid_valueOf_6eb2bdb9f9e4160e,
              mid_values_2b60a43b42635daf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SignSemantic(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SignSemantic(const SignSemantic& obj) : ::java::lang::Enum(obj) {}

            static SignSemantic *FEASIBLE_MEASUREMENT_WHEN_NEGATIVE;
            static SignSemantic *FEASIBLE_MEASUREMENT_WHEN_POSITIVE;

            jboolean measurementIsFeasible(jdouble) const;
            static SignSemantic valueOf(const ::java::lang::String &);
            static JArray< SignSemantic > values();
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
        namespace generation {
          extern PyType_Def PY_TYPE_DEF(SignSemantic);
          extern PyTypeObject *PY_TYPE(SignSemantic);

          class t_SignSemantic {
          public:
            PyObject_HEAD
            SignSemantic object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SignSemantic *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SignSemantic&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SignSemantic&, PyTypeObject *);
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
