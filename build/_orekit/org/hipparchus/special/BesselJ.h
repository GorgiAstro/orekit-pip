#ifndef org_hipparchus_special_BesselJ_H
#define org_hipparchus_special_BesselJ_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
    }
    namespace special {
      class BesselJ$BesselJResult;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace special {

      class BesselJ : public ::java::lang::Object {
       public:
        enum {
          mid_init$_17db3a65980d3441,
          mid_rjBesl_eb97d40b875daae9,
          mid_value_dcbc7ce2902fa136,
          mid_value_86ffecc08a63eff0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BesselJ(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BesselJ(const BesselJ& obj) : ::java::lang::Object(obj) {}

        BesselJ(jdouble);

        static ::org::hipparchus::special::BesselJ$BesselJResult rjBesl(jdouble, jdouble, jint);
        jdouble value(jdouble) const;
        static jdouble value(jdouble, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      extern PyType_Def PY_TYPE_DEF(BesselJ);
      extern PyTypeObject *PY_TYPE(BesselJ);

      class t_BesselJ {
      public:
        PyObject_HEAD
        BesselJ object;
        static PyObject *wrap_Object(const BesselJ&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
