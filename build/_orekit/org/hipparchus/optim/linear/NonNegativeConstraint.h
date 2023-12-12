#ifndef org_hipparchus_optim_linear_NonNegativeConstraint_H
#define org_hipparchus_optim_linear_NonNegativeConstraint_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        class NonNegativeConstraint : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ed2afdb8506b9742,
            mid_isRestrictedToNonNegative_89b302893bdbe1f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NonNegativeConstraint(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NonNegativeConstraint(const NonNegativeConstraint& obj) : ::java::lang::Object(obj) {}

          NonNegativeConstraint(jboolean);

          jboolean isRestrictedToNonNegative() const;
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
        extern PyType_Def PY_TYPE_DEF(NonNegativeConstraint);
        extern PyTypeObject *PY_TYPE(NonNegativeConstraint);

        class t_NonNegativeConstraint {
        public:
          PyObject_HEAD
          NonNegativeConstraint object;
          static PyObject *wrap_Object(const NonNegativeConstraint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
