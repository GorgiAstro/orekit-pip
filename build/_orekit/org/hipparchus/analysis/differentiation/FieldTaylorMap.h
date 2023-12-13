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
    class Field;
    class CalculusFieldElement;
    namespace linear {
      class FieldMatrixDecomposer;
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
            mid_init$_8356de26692c5649,
            mid_init$_aa3d598d86c9a2b6,
            mid_compose_965d6f38bf560791,
            mid_getFunction_1a54109df9c15fac,
            mid_getNbFunctions_55546ef6a647f39b,
            mid_getNbParameters_55546ef6a647f39b,
            mid_getPoint_883be608cfc68c26,
            mid_invert_8fe79baf5efe64ab,
            mid_value_d36b5f4f656d870d,
            mid_value_1cc99f34da9b4a7b,
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
