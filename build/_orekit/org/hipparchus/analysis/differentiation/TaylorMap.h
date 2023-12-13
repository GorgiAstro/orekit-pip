#ifndef org_hipparchus_analysis_differentiation_TaylorMap_H
#define org_hipparchus_analysis_differentiation_TaylorMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class TaylorMap;
      }
    }
    namespace linear {
      class MatrixDecomposer;
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

        class TaylorMap : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9d69924e252c5b9a,
            mid_init$_a0df4b8e4ed3805e,
            mid_compose_6646fcff2910e26b,
            mid_getFunction_7d1614ef7f412b0c,
            mid_getNbFunctions_55546ef6a647f39b,
            mid_getNbParameters_55546ef6a647f39b,
            mid_getPoint_25e1757a36c4dde2,
            mid_invert_1573c268f373a63b,
            mid_value_14dee4cb8cc3e959,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TaylorMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TaylorMap(const TaylorMap& obj) : ::java::lang::Object(obj) {}

          TaylorMap(const JArray< jdouble > &, const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > &);
          TaylorMap(jint, jint, jint);

          TaylorMap compose(const TaylorMap &) const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure getFunction(jint) const;
          jint getNbFunctions() const;
          jint getNbParameters() const;
          JArray< jdouble > getPoint() const;
          TaylorMap invert(const ::org::hipparchus::linear::MatrixDecomposer &) const;
          JArray< jdouble > value(const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(TaylorMap);
        extern PyTypeObject *PY_TYPE(TaylorMap);

        class t_TaylorMap {
        public:
          PyObject_HEAD
          TaylorMap object;
          static PyObject *wrap_Object(const TaylorMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
