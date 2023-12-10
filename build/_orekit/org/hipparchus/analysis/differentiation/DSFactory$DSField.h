#ifndef org_hipparchus_analysis_differentiation_DSFactory$DSField_H
#define org_hipparchus_analysis_differentiation_DSFactory$DSField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
      }
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
      namespace differentiation {

        class DSFactory$DSField : public ::java::lang::Object {
         public:
          enum {
            mid_equals_229c87223f486349,
            mid_getOne_c8ca2097cc2fbc0a,
            mid_getPi_c8ca2097cc2fbc0a,
            mid_getRuntimeClass_8f66acc08d2a174c,
            mid_getZero_c8ca2097cc2fbc0a,
            mid_hashCode_f2f64475e4580546,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DSFactory$DSField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DSFactory$DSField(const DSFactory$DSField& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure getOne() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure getPi() const;
          ::java::lang::Class getRuntimeClass() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure getZero() const;
          jint hashCode() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        extern PyType_Def PY_TYPE_DEF(DSFactory$DSField);
        extern PyTypeObject *PY_TYPE(DSFactory$DSField);

        class t_DSFactory$DSField {
        public:
          PyObject_HEAD
          DSFactory$DSField object;
          static PyObject *wrap_Object(const DSFactory$DSField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
