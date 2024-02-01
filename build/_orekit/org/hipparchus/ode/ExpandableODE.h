#ifndef org_hipparchus_ode_ExpandableODE_H
#define org_hipparchus_ode_ExpandableODE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      class SecondaryODE;
      class EquationsMapper;
      class OrdinaryDifferentialEquation;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
          mid_init$_42ef144907fee018,
          mid_addSecondaryEquations_6261b1536ecfb8ff,
          mid_computeDerivatives_bfc955188bf36f2c,
          mid_getMapper_0209d6833e7fdcb2,
          mid_getPrimary_89f5a4343b91b929,
          mid_init_e6ba2f1f75657f6f,
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
