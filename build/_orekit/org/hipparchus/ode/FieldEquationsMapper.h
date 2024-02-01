#ifndef org_hipparchus_ode_FieldEquationsMapper_H
#define org_hipparchus_ode_FieldEquationsMapper_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace ode {
      class FieldODEStateAndDerivative;
    }
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class FieldEquationsMapper : public ::java::lang::Object {
       public:
        enum {
          mid_extractEquationData_d165cd7576e69a5a,
          mid_getNumberOfEquations_d6ab429752e7c267,
          mid_getTotalDimension_d6ab429752e7c267,
          mid_insertEquationData_7d0026cf0755dda0,
          mid_mapStateAndDerivative_107457b3d57b6f3a,
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
