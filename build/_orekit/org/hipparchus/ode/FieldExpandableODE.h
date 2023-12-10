#ifndef org_hipparchus_ode_FieldExpandableODE_H
#define org_hipparchus_ode_FieldExpandableODE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldEquationsMapper;
      class FieldOrdinaryDifferentialEquation;
      class FieldSecondaryODE;
      class FieldODEState;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
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

      class FieldExpandableODE : public ::java::lang::Object {
       public:
        enum {
          mid_init$_2e419b80baea033b,
          mid_addSecondaryEquations_900c8342a9ae2930,
          mid_computeDerivatives_ea2fed402e730f9f,
          mid_getMapper_ac3e7c17676ea260,
          mid_getPrimary_bf46998f6ba5ae79,
          mid_init_2231c8fee9b0ac70,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldExpandableODE(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldExpandableODE(const FieldExpandableODE& obj) : ::java::lang::Object(obj) {}

        FieldExpandableODE(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation &);

        jint addSecondaryEquations(const ::org::hipparchus::ode::FieldSecondaryODE &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > computeDerivatives(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::ode::FieldEquationsMapper getMapper() const;
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation getPrimary() const;
        void init(const ::org::hipparchus::ode::FieldODEState &, const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldExpandableODE);
      extern PyTypeObject *PY_TYPE(FieldExpandableODE);

      class t_FieldExpandableODE {
      public:
        PyObject_HEAD
        FieldExpandableODE object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldExpandableODE *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldExpandableODE&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldExpandableODE&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
