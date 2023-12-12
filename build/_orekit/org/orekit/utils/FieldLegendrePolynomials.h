#ifndef org_orekit_utils_FieldLegendrePolynomials_H
#define org_orekit_utils_FieldLegendrePolynomials_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class FieldLegendrePolynomials : public ::java::lang::Object {
       public:
        enum {
          mid_init$_1c8164bd91d5a690,
          mid_getPnm_f548ed78c2486137,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldLegendrePolynomials(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldLegendrePolynomials(const FieldLegendrePolynomials& obj) : ::java::lang::Object(obj) {}

        FieldLegendrePolynomials(jint, jint, const ::org::hipparchus::CalculusFieldElement &);

        ::org::hipparchus::CalculusFieldElement getPnm(jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldLegendrePolynomials);
      extern PyTypeObject *PY_TYPE(FieldLegendrePolynomials);

      class t_FieldLegendrePolynomials {
      public:
        PyObject_HEAD
        FieldLegendrePolynomials object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldLegendrePolynomials *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldLegendrePolynomials&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldLegendrePolynomials&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
