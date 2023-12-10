#ifndef org_hipparchus_analysis_differentiation_FieldTaylorMap_H
#define org_hipparchus_analysis_differentiation_FieldTaylorMap_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldTaylorMap;
        class FieldDerivativeStructure;
      }
    }
    namespace linear {
      class FieldMatrixDecomposer;
    }
    class Field;
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
            mid_init$_9cf2acb2788b573e,
            mid_init$_3537cc0f3be9839f,
            mid_compose_10e3913c7d4a482e,
            mid_getFunction_ee1359d8f0ec1f6b,
            mid_getNbFunctions_f2f64475e4580546,
            mid_getNbParameters_f2f64475e4580546,
            mid_getPoint_01c7d10e96d5cf94,
            mid_invert_435c9099831c7875,
            mid_value_3ec681aa2c641b4a,
            mid_value_45349640cfb1ab66,
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
