#ifndef org_orekit_data_SeriesTerm_H
#define org_orekit_data_SeriesTerm_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace data {
      class BodiesElements;
      class FieldBodiesElements;
      class SeriesTerm;
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
  namespace orekit {
    namespace data {

      class SeriesTerm : public ::java::lang::Object {
       public:
        enum {
          mid_add_d472661d1e6c4e58,
          mid_buildTerm_bd640c15e6a2c88d,
          mid_derivative_82ff8289084ebe61,
          mid_derivative_87b8f1de0a07b746,
          mid_getCosCoeff_dbbe5f05149dbf73,
          mid_getDegree_2235cd056f5a882b,
          mid_getSinCoeff_dbbe5f05149dbf73,
          mid_value_82ff8289084ebe61,
          mid_value_87b8f1de0a07b746,
          mid_argumentDerivative_2748c478a8009c37,
          mid_argumentDerivative_bea6276a59f3cdf6,
          mid_argument_2748c478a8009c37,
          mid_argument_bea6276a59f3cdf6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SeriesTerm(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SeriesTerm(const SeriesTerm& obj) : ::java::lang::Object(obj) {}

        void add(jint, jint, jdouble, jdouble) const;
        static SeriesTerm buildTerm(jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint);
        JArray< jdouble > derivative(const ::org::orekit::data::BodiesElements &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > derivative(const ::org::orekit::data::FieldBodiesElements &) const;
        jdouble getCosCoeff(jint, jint) const;
        jint getDegree(jint) const;
        jdouble getSinCoeff(jint, jint) const;
        JArray< jdouble > value(const ::org::orekit::data::BodiesElements &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > value(const ::org::orekit::data::FieldBodiesElements &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(SeriesTerm);
      extern PyTypeObject *PY_TYPE(SeriesTerm);

      class t_SeriesTerm {
      public:
        PyObject_HEAD
        SeriesTerm object;
        static PyObject *wrap_Object(const SeriesTerm&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
