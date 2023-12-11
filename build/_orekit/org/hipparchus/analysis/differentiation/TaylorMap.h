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
            mid_init$_859c9366927100bd,
            mid_init$_3796b665437eba81,
            mid_compose_b7f2337e4b8f4e3a,
            mid_getFunction_aee818789db1d6ac,
            mid_getNbFunctions_412668abc8d889e9,
            mid_getNbParameters_412668abc8d889e9,
            mid_getPoint_a53a7513ecedada2,
            mid_invert_cd6cfb213ddfa90d,
            mid_value_1db7c087750eaffe,
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
