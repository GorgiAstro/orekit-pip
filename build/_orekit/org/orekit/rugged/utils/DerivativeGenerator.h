#ifndef org_orekit_rugged_utils_DerivativeGenerator_H
#define org_orekit_rugged_utils_DerivativeGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Derivative;
      }
    }
    class Field;
  }
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        class DerivativeGenerator : public ::java::lang::Object {
         public:
          enum {
            mid_constant_4b4caf8b2e5f103f,
            mid_getField_577649682b9910c1,
            mid_getSelected_d751c1a57012b438,
            mid_variable_5105964eed6b48bf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DerivativeGenerator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DerivativeGenerator(const DerivativeGenerator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::differentiation::Derivative constant(jdouble) const;
          ::org::hipparchus::Field getField() const;
          ::java::util::List getSelected() const;
          ::org::hipparchus::analysis::differentiation::Derivative variable(const ::org::orekit::utils::ParameterDriver &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        extern PyType_Def PY_TYPE_DEF(DerivativeGenerator);
        extern PyTypeObject *PY_TYPE(DerivativeGenerator);

        class t_DerivativeGenerator {
        public:
          PyObject_HEAD
          DerivativeGenerator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DerivativeGenerator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DerivativeGenerator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DerivativeGenerator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
