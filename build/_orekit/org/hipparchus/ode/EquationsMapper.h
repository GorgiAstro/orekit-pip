#ifndef org_hipparchus_ode_EquationsMapper_H
#define org_hipparchus_ode_EquationsMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class EquationsMapper : public ::java::lang::Object {
       public:
        enum {
          mid_extractEquationData_545d7714bece21ed,
          mid_getNumberOfEquations_412668abc8d889e9,
          mid_getTotalDimension_412668abc8d889e9,
          mid_insertEquationData_4b60b99b94da8ca7,
          mid_mapStateAndDerivative_f8a8d5145e03dbab,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EquationsMapper(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EquationsMapper(const EquationsMapper& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > extractEquationData(jint, const JArray< jdouble > &) const;
        jint getNumberOfEquations() const;
        jint getTotalDimension() const;
        void insertEquationData(jint, const JArray< jdouble > &, const JArray< jdouble > &) const;
        ::org::hipparchus::ode::ODEStateAndDerivative mapStateAndDerivative(jdouble, const JArray< jdouble > &, const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(EquationsMapper);
      extern PyTypeObject *PY_TYPE(EquationsMapper);

      class t_EquationsMapper {
      public:
        PyObject_HEAD
        EquationsMapper object;
        static PyObject *wrap_Object(const EquationsMapper&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
