#ifndef org_hipparchus_analysis_integration_gauss_FieldAbstractRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_FieldAbstractRuleFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace integration {
        namespace gauss {
          class FieldRuleFactory;
        }
      }
    }
    namespace util {
      class Pair;
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
      namespace integration {
        namespace gauss {

          class FieldAbstractRuleFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_205c34b8e33cf33f,
              mid_getField_70b4bbd3fa378d6b,
              mid_getRule_086dd68d091255ed,
              mid_computeRule_086dd68d091255ed,
              mid_findRoots_6e0adb7db6561aa0,
              mid_enforceSymmetry_4c337e4c1ec6f647,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldAbstractRuleFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldAbstractRuleFactory(const FieldAbstractRuleFactory& obj) : ::java::lang::Object(obj) {}

            FieldAbstractRuleFactory(const ::org::hipparchus::Field &);

            ::org::hipparchus::Field getField() const;
            ::org::hipparchus::util::Pair getRule(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          extern PyType_Def PY_TYPE_DEF(FieldAbstractRuleFactory);
          extern PyTypeObject *PY_TYPE(FieldAbstractRuleFactory);

          class t_FieldAbstractRuleFactory {
          public:
            PyObject_HEAD
            FieldAbstractRuleFactory object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldAbstractRuleFactory *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldAbstractRuleFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldAbstractRuleFactory&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
