#ifndef org_orekit_utils_units_PowerTerm_H
#define org_orekit_utils_units_PowerTerm_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
}
namespace org {
  namespace hipparchus {
    namespace fraction {
      class Fraction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        class PowerTerm : public ::java::lang::Object {
         public:
          enum {
            mid_getBase_9736b107de4781a2,
            mid_getExponent_7ab72bcbb3909669,
            mid_getScale_b74f83833fdad017,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PowerTerm(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PowerTerm(const PowerTerm& obj) : ::java::lang::Object(obj) {}

          ::java::lang::CharSequence getBase() const;
          ::org::hipparchus::fraction::Fraction getExponent() const;
          jdouble getScale() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        extern PyType_Def PY_TYPE_DEF(PowerTerm);
        extern PyTypeObject *PY_TYPE(PowerTerm);

        class t_PowerTerm {
        public:
          PyObject_HEAD
          PowerTerm object;
          static PyObject *wrap_Object(const PowerTerm&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
