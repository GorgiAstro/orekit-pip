#ifndef org_hipparchus_analysis_differentiation_FieldTaylorMap_H
#define org_hipparchus_analysis_differentiation_FieldTaylorMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace linear {
      class FieldMatrixDecomposer;
    }
    class Field;
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldTaylorMap;
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

        class FieldTaylorMap : public ::java::lang::Object {
         public:
          enum {
            mid_init$_35cd4b0d5c456d22,
            mid_init$_6621086b060c801f,
            mid_compose_2186d3bfd7fd19ad,
            mid_getFunction_5209187934217f90,
            mid_getNbFunctions_570ce0828f81a2c1,
            mid_getNbParameters_570ce0828f81a2c1,
            mid_getPoint_226a0b2040b1d2e1,
            mid_invert_431a64036cd27a45,
            mid_value_a60c769d407c20d1,
            mid_value_401cf8a1b53fb909,
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
