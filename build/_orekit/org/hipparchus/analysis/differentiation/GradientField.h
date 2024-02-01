#ifndef org_hipparchus_analysis_differentiation_GradientField_H
#define org_hipparchus_analysis_differentiation_GradientField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace analysis {
      namespace differentiation {
        class Gradient;
        class GradientField;
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

        class GradientField : public ::java::lang::Object {
         public:
          enum {
            mid_equals_72faff9b05f5ed5e,
            mid_getField_a9b016a0e8d69230,
            mid_getOne_9d89382e9667f8f2,
            mid_getRuntimeClass_d5247e4b166c4ce8,
            mid_getZero_9d89382e9667f8f2,
            mid_hashCode_d6ab429752e7c267,
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
