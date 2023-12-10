#ifndef org_hipparchus_ode_ExpandableODE_H
#define org_hipparchus_ode_ExpandableODE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class OrdinaryDifferentialEquation;
      class EquationsMapper;
      class SecondaryODE;
      class ODEState;
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
    namespace ode {

      class ExpandableODE : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3fd05eb85385c75b,
          mid_addSecondaryEquations_4d3a805d476f8a0d,
          mid_computeDerivatives_7b8ea6f669f90156,
          mid_getMapper_c85ebb7ac50d94ef,
          mid_getPrimary_fa145b7a16039fac,
          mid_init_d60bc5812a8e442c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ExpandableODE(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ExpandableODE(const ExpandableODE& obj) : ::java::lang::Object(obj) {}

        ExpandableODE(const ::org::hipparchus::ode::OrdinaryDifferentialEquation &);

        jint addSecondaryEquations(const ::org::hipparchus::ode::SecondaryODE &) const;
        JArray< jdouble > computeDerivatives(jdouble, const JArray< jdouble > &) const;
        ::org::hipparchus::ode::EquationsMapper getMapper() const;
        ::org::hipparchus::ode::OrdinaryDifferentialEquation getPrimary() const;
        void init(const ::org::hipparchus::ode::ODEState &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ExpandableODE);
      extern PyTypeObject *PY_TYPE(ExpandableODE);

      class t_ExpandableODE {
      public:
        PyObject_HEAD
        ExpandableODE object;
        static PyObject *wrap_Object(const ExpandableODE&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
