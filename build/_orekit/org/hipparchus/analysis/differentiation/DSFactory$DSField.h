#ifndef org_hipparchus_analysis_differentiation_DSFactory$DSField_H
#define org_hipparchus_analysis_differentiation_DSFactory$DSField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
      }
    }
    class Field;
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
            mid_equals_460c5e2d9d51c6cc,
            mid_getOne_57983c4d4b4a2f7f,
            mid_getPi_57983c4d4b4a2f7f,
            mid_getRuntimeClass_1aeb0737a960d371,
            mid_getZero_57983c4d4b4a2f7f,
            mid_hashCode_55546ef6a647f39b,
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
