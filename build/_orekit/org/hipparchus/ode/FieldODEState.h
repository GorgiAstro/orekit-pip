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
          mid_init$_8556964e7b03aae6,
          mid_init$_ad8360099586064a,
          mid_getCompleteState_94ed2e0620f8833d,
          mid_getCompleteStateDimension_d6ab429752e7c267,
          mid_getNumberOfSecondaryStates_d6ab429752e7c267,
          mid_getPrimaryState_94ed2e0620f8833d,
          mid_getPrimaryStateDimension_d6ab429752e7c267,
          mid_getSecondaryState_15c819004b045aca,
          mid_getSecondaryStateDimension_d938fc64e8c6df2d,
          mid_getTime_08d37e3f77b7239d,
          mid_copy_ed1934a6d28c3ac3,
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
