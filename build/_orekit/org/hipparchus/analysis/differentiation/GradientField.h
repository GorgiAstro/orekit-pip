#ifndef org_hipparchus_analysis_differentiation_GradientField_H
#define org_hipparchus_analysis_differentiation_GradientField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
        class GradientField;
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

        class GradientField : public ::java::lang::Object {
         public:
          enum {
            mid_equals_221e8e85cb385209,
            mid_getField_52406fde95ba4c75,
            mid_getOne_b157bc83ac48b3b3,
            mid_getRuntimeClass_d4b191ff8147475d,
            mid_getZero_b157bc83ac48b3b3,
            mid_hashCode_412668abc8d889e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GradientField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GradientField(const GradientField& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          static GradientField getField(jint);
          ::org::hipparchus::analysis::differentiation::Gradient getOne() const;
          ::java::lang::Class getRuntimeClass() const;
          ::org::hipparchus::analysis::differentiation::Gradient getZero() const;
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
        extern PyType_Def PY_TYPE_DEF(GradientField);
        extern PyTypeObject *PY_TYPE(GradientField);

        class t_GradientField {
        public:
          PyObject_HEAD
          GradientField object;
          static PyObject *wrap_Object(const GradientField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
