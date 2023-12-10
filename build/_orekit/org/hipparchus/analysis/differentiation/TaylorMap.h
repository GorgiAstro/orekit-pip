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
        class TaylorMap;
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

        class TaylorMap : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d6beef7d5ac3aeda,
            mid_init$_c80ec2f7d8b5fe87,
            mid_compose_d43e52d71d192134,
            mid_getFunction_e42bfd21ac531fa1,
            mid_getNbFunctions_f2f64475e4580546,
            mid_getNbParameters_f2f64475e4580546,
            mid_getPoint_7cdc325af0834901,
            mid_invert_23d0f1e57994ee82,
            mid_value_4b742fe429c22ba8,
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
