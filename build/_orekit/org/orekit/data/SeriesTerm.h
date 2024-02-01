#ifndef org_orekit_data_SeriesTerm_H
#define org_orekit_data_SeriesTerm_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class FieldBodiesElements;
      class SeriesTerm;
      class BodiesElements;
    }
  }
  namespace hipparchus {
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
  namespace orekit {
    namespace data {

      class SeriesTerm : public ::java::lang::Object {
       public:
        enum {
          mid_add_c65d45c928e07977,
          mid_buildTerm_066ac2bf8d52cd60,
          mid_derivative_6bcdaa5aa99188a7,
          mid_derivative_2ebca4e2d8d7517f,
          mid_getCosCoeff_6d920aab27f0a3d2,
          mid_getDegree_d938fc64e8c6df2d,
          mid_getSinCoeff_6d920aab27f0a3d2,
          mid_value_6bcdaa5aa99188a7,
          mid_value_2ebca4e2d8d7517f,
          mid_argumentDerivative_7212d8ed403494a1,
          mid_argumentDerivative_3cea1ba38c4e1540,
          mid_argument_3cea1ba38c4e1540,
          mid_argument_7212d8ed403494a1,
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
