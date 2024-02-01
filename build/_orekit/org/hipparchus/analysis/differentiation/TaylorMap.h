#ifndef org_hipparchus_analysis_differentiation_TaylorMap_H
#define org_hipparchus_analysis_differentiation_TaylorMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class MatrixDecomposer;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class TaylorMap;
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

        class TaylorMap : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8befb2fa54d4eadc,
            mid_init$_48ca1125d4856a74,
            mid_compose_163150f2addcb85a,
            mid_getFunction_d2b8014a1c7d22f6,
            mid_getNbFunctions_d6ab429752e7c267,
            mid_getNbParameters_d6ab429752e7c267,
            mid_getPoint_be783177b060994b,
            mid_invert_26364ce0a724a9ce,
            mid_value_51f624c89851da7e,
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
