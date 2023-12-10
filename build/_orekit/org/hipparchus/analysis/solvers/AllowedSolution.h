#ifndef org_hipparchus_analysis_solvers_AllowedSolution_H
#define org_hipparchus_analysis_solvers_AllowedSolution_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class AllowedSolution;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        class AllowedSolution : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_049b389ba7d48c12,
            mid_values_2b4bdd6180bb891c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AllowedSolution(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AllowedSolution(const AllowedSolution& obj) : ::java::lang::Enum(obj) {}

          static AllowedSolution *ABOVE_SIDE;
          static AllowedSolution *ANY_SIDE;
          static AllowedSolution *BELOW_SIDE;
          static AllowedSolution *LEFT_SIDE;
          static AllowedSolution *RIGHT_SIDE;

          static AllowedSolution valueOf(const ::java::lang::String &);
          static JArray< AllowedSolution > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        extern PyType_Def PY_TYPE_DEF(AllowedSolution);
        extern PyTypeObject *PY_TYPE(AllowedSolution);

        class t_AllowedSolution {
        public:
          PyObject_HEAD
          AllowedSolution object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AllowedSolution *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AllowedSolution&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AllowedSolution&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
