#ifndef org_orekit_rugged_utils_PythonDSGenerator_H
#define org_orekit_rugged_utils_PythonDSGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class DSGenerator;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        class PythonDSGenerator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_constant_f7de6915022fec9a,
            mid_finalize_ff7cb6c242604316,
            mid_getSelected_d751c1a57012b438,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_variable_d6efc665ff46347a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonDSGenerator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonDSGenerator(const PythonDSGenerator& obj) : ::java::lang::Object(obj) {}

          PythonDSGenerator();

          ::org::hipparchus::analysis::differentiation::DerivativeStructure constant(jdouble) const;
          void finalize() const;
          ::java::util::List getSelected() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure variable(const ::org::orekit::utils::ParameterDriver &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonDSGenerator);
        extern PyTypeObject *PY_TYPE(PythonDSGenerator);

        class t_PythonDSGenerator {
        public:
          PyObject_HEAD
          PythonDSGenerator object;
          static PyObject *wrap_Object(const PythonDSGenerator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
