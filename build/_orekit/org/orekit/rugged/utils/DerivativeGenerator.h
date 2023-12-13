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
            mid_constant_9c238320e7e75505,
            mid_getField_04d1f63e17d5c5d4,
            mid_getSelected_e62d3bb06d56d7e3,
            mid_variable_6ed5c290251c003e,
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
