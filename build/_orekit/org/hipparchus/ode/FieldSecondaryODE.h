#ifndef org_hipparchus_ode_FieldSecondaryODE_H
#define org_hipparchus_ode_FieldSecondaryODE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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

      class FieldSecondaryODE : public ::java::lang::Object {
       public:
        enum {
          mid_computeDerivatives_b035a3c9f1fe5fd2,
          mid_getDimension_412668abc8d889e9,
          mid_init_13831dd045f2fba3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldSecondaryODE(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldSecondaryODE(const FieldSecondaryODE& obj) : ::java::lang::Object(obj) {}

        JArray< ::org::hipparchus::CalculusFieldElement > computeDerivatives(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        jint getDimension() const;
        void init(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldSecondaryODE);
      extern PyTypeObject *PY_TYPE(FieldSecondaryODE);

      class t_FieldSecondaryODE {
      public:
        PyObject_HEAD
        FieldSecondaryODE object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldSecondaryODE *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldSecondaryODE&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldSecondaryODE&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
