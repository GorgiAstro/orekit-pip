#ifndef org_hipparchus_ode_FieldODEState_H
#define org_hipparchus_ode_FieldODEState_H

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

      class FieldODEState : public ::java::lang::Object {
       public:
        enum {
          mid_init$_bee5c8ff86f4e777,
          mid_init$_1aa689b999c11532,
          mid_getCompleteState_226a0b2040b1d2e1,
          mid_getCompleteStateDimension_570ce0828f81a2c1,
          mid_getNumberOfSecondaryStates_570ce0828f81a2c1,
          mid_getPrimaryState_226a0b2040b1d2e1,
          mid_getPrimaryStateDimension_570ce0828f81a2c1,
          mid_getSecondaryState_f2aa3eb7e0b5647f,
          mid_getSecondaryStateDimension_2235cd056f5a882b,
          mid_getTime_eba8e72a22c984ac,
          mid_copy_d1031b0c6b4f03ae,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldODEState(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldODEState(const FieldODEState& obj) : ::java::lang::Object(obj) {}

        FieldODEState(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
        FieldODEState(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &);

        JArray< ::org::hipparchus::CalculusFieldElement > getCompleteState() const;
        jint getCompleteStateDimension() const;
        jint getNumberOfSecondaryStates() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getPrimaryState() const;
        jint getPrimaryStateDimension() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getSecondaryState(jint) const;
        jint getSecondaryStateDimension(jint) const;
        ::org::hipparchus::CalculusFieldElement getTime() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldODEState);
      extern PyTypeObject *PY_TYPE(FieldODEState);

      class t_FieldODEState {
      public:
        PyObject_HEAD
        FieldODEState object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldODEState *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldODEState&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldODEState&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
