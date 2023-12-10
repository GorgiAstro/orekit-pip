#ifndef org_hipparchus_analysis_differentiation_GradientField_H
#define org_hipparchus_analysis_differentiation_GradientField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class GradientField;
        class Gradient;
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
            mid_equals_65c7d273e80d497a,
            mid_getField_981218e64b7680f0,
            mid_getOne_cc2f4e0a456f51de,
            mid_getRuntimeClass_7c16c5008b34b3db,
            mid_getZero_cc2f4e0a456f51de,
            mid_hashCode_570ce0828f81a2c1,
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
