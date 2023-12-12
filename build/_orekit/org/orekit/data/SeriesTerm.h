#ifndef org_orekit_data_SeriesTerm_H
#define org_orekit_data_SeriesTerm_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class SeriesTerm;
      class BodiesElements;
      class FieldBodiesElements;
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
          mid_add_8f08153945634de4,
          mid_buildTerm_9e48c9dd795854c8,
          mid_derivative_c933bd8b3b01b6fa,
          mid_derivative_19d2f680a2dd5e54,
          mid_getCosCoeff_21b81d54c06b64b0,
          mid_getDegree_0092017e99012694,
          mid_getSinCoeff_21b81d54c06b64b0,
          mid_value_c933bd8b3b01b6fa,
          mid_value_19d2f680a2dd5e54,
          mid_argumentDerivative_3e0ce57516456e43,
          mid_argumentDerivative_645226ccf45fca25,
          mid_argument_3e0ce57516456e43,
          mid_argument_645226ccf45fca25,
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
