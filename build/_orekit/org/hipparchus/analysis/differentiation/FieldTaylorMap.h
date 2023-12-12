#ifndef org_hipparchus_analysis_differentiation_FieldTaylorMap_H
#define org_hipparchus_analysis_differentiation_FieldTaylorMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldTaylorMap;
      }
    }
    namespace linear {
      class FieldMatrixDecomposer;
    }
    class CalculusFieldElement;
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

        class FieldTaylorMap : public ::java::lang::Object {
         public:
          enum {
            mid_init$_dc508ff654a63001,
            mid_init$_a4259b5830086408,
            mid_compose_8a705bca13fda9e9,
            mid_getFunction_40193fcf634e0858,
            mid_getNbFunctions_412668abc8d889e9,
            mid_getNbParameters_412668abc8d889e9,
            mid_getPoint_41762fd4377ff26e,
            mid_invert_478258a7e7861983,
            mid_value_0d5d57abd8dbe925,
            mid_value_a126e91ca3e53df2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldTaylorMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldTaylorMap(const FieldTaylorMap& obj) : ::java::lang::Object(obj) {}

          FieldTaylorMap(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > &);
          FieldTaylorMap(const ::org::hipparchus::Field &, jint, jint, jint);

          FieldTaylorMap compose(const FieldTaylorMap &) const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure getFunction(jint) const;
          jint getNbFunctions() const;
          jint getNbParameters() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getPoint() const;
          FieldTaylorMap invert(const ::org::hipparchus::linear::FieldMatrixDecomposer &) const;
          JArray< ::org::hipparchus::CalculusFieldElement > value(const JArray< jdouble > &) const;
          JArray< ::org::hipparchus::CalculusFieldElement > value(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldTaylorMap);
        extern PyTypeObject *PY_TYPE(FieldTaylorMap);

        class t_FieldTaylorMap {
        public:
          PyObject_HEAD
          FieldTaylorMap object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldTaylorMap *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldTaylorMap&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldTaylorMap&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
