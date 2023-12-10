#ifndef org_hipparchus_ode_FieldSecondaryODE_H
#define org_hipparchus_ode_FieldSecondaryODE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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

      class FieldSecondaryODE : public ::java::lang::Object {
       public:
        enum {
          mid_computeDerivatives_074f58e68ab9f435,
          mid_getDimension_570ce0828f81a2c1,
          mid_init_281a8331f0ac6a2e,
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
