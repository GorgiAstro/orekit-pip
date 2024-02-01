#ifndef org_hipparchus_optim_linear_PivotSelectionRule_H
#define org_hipparchus_optim_linear_PivotSelectionRule_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
      namespace linear {
        class PivotSelectionRule;
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
  namespace hipparchus {
    namespace optim {
      namespace linear {

        class PivotSelectionRule : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_7ee13544a71c7b55,
            mid_values_bcdc02e9d3f3499c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PivotSelectionRule(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PivotSelectionRule(const PivotSelectionRule& obj) : ::java::lang::Enum(obj) {}

          static PivotSelectionRule *BLAND;
          static PivotSelectionRule *DANTZIG;

          static PivotSelectionRule valueOf(const ::java::lang::String &);
          static JArray< PivotSelectionRule > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        extern PyType_Def PY_TYPE_DEF(PivotSelectionRule);
        extern PyTypeObject *PY_TYPE(PivotSelectionRule);

        class t_PivotSelectionRule {
        public:
          PyObject_HEAD
          PivotSelectionRule object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PivotSelectionRule *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PivotSelectionRule&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PivotSelectionRule&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
