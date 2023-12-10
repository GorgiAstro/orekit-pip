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
      class ODEState;
      class EquationsMapper;
      class OrdinaryDifferentialEquation;
      class SecondaryODE;
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
          mid_init$_0b79d008bdba5ce0,
          mid_addSecondaryEquations_231f49c6b5a21e64,
          mid_computeDerivatives_125ce48de7dbfde5,
          mid_getMapper_b352b1a7f73df8de,
          mid_getPrimary_af746d446210838e,
          mid_init_9a885fd893969c04,
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
