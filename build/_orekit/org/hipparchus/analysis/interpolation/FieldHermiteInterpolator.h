#ifndef org_hipparchus_analysis_interpolation_FieldHermiteInterpolator_H
#define org_hipparchus_analysis_interpolation_FieldHermiteInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathRuntimeException;
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
    namespace analysis {
      namespace interpolation {

        class FieldHermiteInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_addSamplePoint_b905de7a007641fb,
            mid_derivatives_7e6a45a3e3b96ef6,
            mid_value_fe86fae25ede109a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldHermiteInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldHermiteInterpolator(const FieldHermiteInterpolator& obj) : ::java::lang::Object(obj) {}

          FieldHermiteInterpolator();

          void addSamplePoint(const ::org::hipparchus::FieldElement &, const JArray< JArray< ::org::hipparchus::FieldElement > > &) const;
          JArray< JArray< ::org::hipparchus::FieldElement > > derivatives(const ::org::hipparchus::FieldElement &, jint) const;
          JArray< ::org::hipparchus::FieldElement > value(const ::org::hipparchus::FieldElement &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        extern PyType_Def PY_TYPE_DEF(FieldHermiteInterpolator);
        extern PyTypeObject *PY_TYPE(FieldHermiteInterpolator);

        class t_FieldHermiteInterpolator {
        public:
          PyObject_HEAD
          FieldHermiteInterpolator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldHermiteInterpolator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldHermiteInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldHermiteInterpolator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
