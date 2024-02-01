#ifndef org_hipparchus_analysis_interpolation_FieldHermiteInterpolator_H
#define org_hipparchus_analysis_interpolation_FieldHermiteInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    class FieldElement;
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
            mid_init$_ff7cb6c242604316,
            mid_addSamplePoint_1f979b4691836ff5,
            mid_derivatives_0199092f8b525482,
            mid_value_6f69085479c1d880,
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
