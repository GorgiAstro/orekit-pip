#ifndef org_hipparchus_ode_ExpandableODE_H
#define org_hipparchus_ode_ExpandableODE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      class EquationsMapper;
      class OrdinaryDifferentialEquation;
      class SecondaryODE;
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
          mid_init$_28d0dab69f2e282c,
          mid_addSecondaryEquations_95d0971981220a69,
          mid_computeDerivatives_31b9a2982d73e37a,
          mid_getMapper_ac224193cab69474,
          mid_getPrimary_7732629ab518c1bf,
          mid_init_4d28f529380c21e7,
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
