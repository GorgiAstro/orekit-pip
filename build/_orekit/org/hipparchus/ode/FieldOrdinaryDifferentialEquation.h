#ifndef org_hipparchus_ode_FieldOrdinaryDifferentialEquation_H
#define org_hipparchus_ode_FieldOrdinaryDifferentialEquation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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

      class FieldOrdinaryDifferentialEquation : public ::java::lang::Object {
       public:
        enum {
          mid_computeDerivatives_ea2fed402e730f9f,
          mid_getDimension_f2f64475e4580546,
          mid_init_d000a2ae6993fd7f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldOrdinaryDifferentialEquation(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldOrdinaryDifferentialEquation(const FieldOrdinaryDifferentialEquation& obj) : ::java::lang::Object(obj) {}

        JArray< ::org::hipparchus::CalculusFieldElement > computeDerivatives(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        jint getDimension() const;
        void init(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldOrdinaryDifferentialEquation);
      extern PyTypeObject *PY_TYPE(FieldOrdinaryDifferentialEquation);

      class t_FieldOrdinaryDifferentialEquation {
      public:
        PyObject_HEAD
        FieldOrdinaryDifferentialEquation object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldOrdinaryDifferentialEquation *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldOrdinaryDifferentialEquation&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldOrdinaryDifferentialEquation&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
