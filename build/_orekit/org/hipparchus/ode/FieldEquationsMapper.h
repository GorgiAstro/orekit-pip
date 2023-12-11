#ifndef org_hipparchus_ode_FieldEquationsMapper_H
#define org_hipparchus_ode_FieldEquationsMapper_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class FieldEquationsMapper : public ::java::lang::Object {
       public:
        enum {
          mid_extractEquationData_2bfb9a29e7d7770a,
          mid_getNumberOfEquations_412668abc8d889e9,
          mid_getTotalDimension_412668abc8d889e9,
          mid_insertEquationData_270f73898b4ef6d7,
          mid_mapStateAndDerivative_4a44960527a4a78a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldEquationsMapper(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldEquationsMapper(const FieldEquationsMapper& obj) : ::java::lang::Object(obj) {}

        JArray< ::org::hipparchus::CalculusFieldElement > extractEquationData(jint, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        jint getNumberOfEquations() const;
        jint getTotalDimension() const;
        void insertEquationData(jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::ode::FieldODEStateAndDerivative mapStateAndDerivative(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldEquationsMapper);
      extern PyTypeObject *PY_TYPE(FieldEquationsMapper);

      class t_FieldEquationsMapper {
      public:
        PyObject_HEAD
        FieldEquationsMapper object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldEquationsMapper *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldEquationsMapper&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldEquationsMapper&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
