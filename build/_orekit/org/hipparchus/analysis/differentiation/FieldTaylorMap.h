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
    namespace linear {
      class FieldMatrixDecomposer;
    }
    class CalculusFieldElement;
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
            mid_init$_2d4107722298a4c6,
            mid_init$_e2ca6bcdfe4e6004,
            mid_compose_1ca2cfdef9628b01,
            mid_getFunction_14f0e73adde16f83,
            mid_getNbFunctions_d6ab429752e7c267,
            mid_getNbParameters_d6ab429752e7c267,
            mid_getPoint_94ed2e0620f8833d,
            mid_invert_521d6a28243fe141,
            mid_value_63544903937aafd5,
            mid_value_38b803e86c0bea36,
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
