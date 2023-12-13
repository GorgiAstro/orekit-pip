#ifndef org_orekit_data_SeriesTerm_H
#define org_orekit_data_SeriesTerm_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class FieldBodiesElements;
      class BodiesElements;
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
          mid_add_97e33498326f7285,
          mid_buildTerm_5b820596e89d1f17,
          mid_derivative_385587d041c81b1f,
          mid_derivative_8e0d8ae8849d1551,
          mid_getCosCoeff_cad98089d00f8a5b,
          mid_getDegree_0e7cf35192c3effe,
          mid_getSinCoeff_cad98089d00f8a5b,
          mid_value_385587d041c81b1f,
          mid_value_8e0d8ae8849d1551,
          mid_argumentDerivative_6d9bdfdb86170f1b,
          mid_argumentDerivative_e5a6deebdf7be070,
          mid_argument_6d9bdfdb86170f1b,
          mid_argument_e5a6deebdf7be070,
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
