#ifndef org_orekit_data_SeriesTerm_H
#define org_orekit_data_SeriesTerm_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class BodiesElements;
      class FieldBodiesElements;
      class SeriesTerm;
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
          mid_add_864f173bba930896,
          mid_buildTerm_ed99c00c6dd7f56d,
          mid_derivative_012501d58cd2c4a9,
          mid_derivative_7ef60273b11c242d,
          mid_getCosCoeff_a84e4ee1da3f1ab8,
          mid_getDegree_38565d58479aa24a,
          mid_getSinCoeff_a84e4ee1da3f1ab8,
          mid_value_012501d58cd2c4a9,
          mid_value_7ef60273b11c242d,
          mid_argumentDerivative_68f0627d4a947675,
          mid_argumentDerivative_8988cf596cc2decd,
          mid_argument_8988cf596cc2decd,
          mid_argument_68f0627d4a947675,
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
