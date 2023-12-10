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
            mid_init$_c53d6f00246d2509,
            mid_init$_8336200ef3dde36b,
            mid_compose_1b4086c2315c67d8,
            mid_getFunction_7e2a7a2e34cb2504,
            mid_getNbFunctions_570ce0828f81a2c1,
            mid_getNbParameters_570ce0828f81a2c1,
            mid_getPoint_60c7040667a7dc5c,
            mid_invert_802414c7d3fa4705,
            mid_value_ac3d742ccc742f22,
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
